#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin >> name;
    set<char> s(name.begin(), name.end());
    if (s.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
