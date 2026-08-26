class Solution:
    def maximumValue(self, strs: List[str]) -> int:
        store = 0
        for i in range (len(strs)):
            if strs[i].isdigit() ==True:
                store = max(int(strs[i]),store) 
            else:
                store = max(len(strs[i]),store)
        return store
            
        