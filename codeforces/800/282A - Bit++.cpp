#include <iostream>
using namespace std;

int main() {
    
    int a;
    cin >> a;
    string b;
    int sum = 0;
    for (int i = 0;i<a;i++){
        cin >> b;
        if (b == "X++" || b == "++X") sum+=1;
        else sum-=1;
    }
    cout << sum << endl;
    

    return 0;
}