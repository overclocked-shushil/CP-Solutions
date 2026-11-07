class Solution {
public:
    struct store {
            int type;
            int color;
            int count;
        };
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) {
        stack < store > st;
        for (int i  =0;i<types.size();i++){
            int t = types[i];
            int c = colors[i];
            if (!st.empty() && st.top().type  == t && st.top().color == c){
                int count = st.top().count+1;
                st.pop();
                st.push({t,c,count});
                
            }
            else {
                st.push({t,c,1});
            }
            if (st.top().count == groupSize[t]){   
                st.pop();
            }
            
        }
        return (st.empty());
    }
};