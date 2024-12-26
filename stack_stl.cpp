#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    stack<int> s;
    s.push(11);

    cout << s.top();
    cout << s.empty();
    return 0;
}