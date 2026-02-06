#include<bits/stdc++.h>
using namespace std;

int main(){
    int lengthStr;
    cin >> lengthStr;
    char arr[lengthStr];
    cin.getline(arr,lengthStr);
    char checked;
    int maximum = 0;
    int local = 0;
    
    for(int ii =0;ii<lengthStr;ii++){
        if(ii==0){
            checked = arr[ii];
        }
        else{
            if(arr[ii] == checked){
                local += 1;
            }
            else{
                if(local > maximum){
                    maximum = local;
                }
                local = 0;
                checked = arr[ii];
            }
        }
    }

    cout << maximum;

    return 0;
}