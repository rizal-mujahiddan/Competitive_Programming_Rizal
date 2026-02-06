#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int array[a][b];
    int arrayRotate[b][a];
    for(int i=0;i<a;i++){
        for(int j=0; j<b;j++){
            scanf("%d",&array[i][j]);
        }
    }


    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            arrayRotate[j][i] = array[a-i-1][j];
        }
    }

    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            if(j+1==a)printf("%d",arrayRotate[i][j]);
            else printf("%d ",arrayRotate[i][j]);
        }
        if(i<(b-1)) printf("\n");
    }

    return 0;
}