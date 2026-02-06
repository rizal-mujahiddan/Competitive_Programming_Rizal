#include<bits/stdc++.h>
using namespace std;

#pragma region Operational Matriks
vector<vector<int>> refleksiHorizontal(vector<vector<int>> value){
    vector<vector<int>> valueHasil = value;

    int n = value.size();
    int m = value[0].size();

    #pragma region flipHorizontal
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            valueHasil[i][j] = value[n-i-1][j];
        }
    }
    #pragma endregion

    return valueHasil;
}

vector<vector<int>> refleksiVertikal(vector<vector<int>> value){
    vector<vector<int>> valueHasil = value;

    int n = value.size();
    int m = value[0].size();

    #pragma region flipHorizontal
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            valueHasil[i][j] = value[i][m-j-1];
        }
    }
    #pragma endregion

    return valueHasil;
}

vector<vector<int>> rotating(vector<vector<int>> value,int rotateDeg){
    vector<vector<int>> vectorHasil;

    int n = value.size();
    int m = value[0].size();
    
    if(rotateDeg == 90){
        vectorHasil.resize(m,vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                vectorHasil[j][i] = value[n-i-1][j];
            }
        }
    }
    else if(rotateDeg == 180){
        vectorHasil.resize(n,vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                vectorHasil[i][j] = value[n-i-1][m-j-1];
            }
        }
    }
    else if(rotateDeg == 270){
        vectorHasil.resize(m,vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                vectorHasil[j][i] = value[i][m-j-1];
            }
        }
    }
    else{
        return vectorHasil; 
    }

    return vectorHasil;
}

#pragma endregion



int main(){
    #pragma region declare variable 
    int n,m,x;
    int seting;

    string operational;
    string KeteranganOperasi;
    int rotDeg;
    

    scanf("%d %d %d",&n,&m,&x);

    vector<vector<int>> vectorSet;
    vector<int> tampungan;
    #pragma endregion

    #pragma region Input Data
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d",&seting);
            tampungan.push_back(seting);
        }
        vectorSet.push_back(tampungan);
        tampungan.clear();
    }
    #pragma endregion

    // #pragma region Print data

    // n = vectorSet.size();
    // m = vectorSet[0].size();

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         printf("%d ",vectorSet[i][j]);
    //     }
    //     printf("\n");
    // }
    // #pragma endregion

    #pragma region Input Operational
    for(int ii = 0; ii < x; ii++){
        cin>>operational;
        if(operational == "|") {vectorSet = refleksiVertikal(vectorSet); KeteranganOperasi = "Refleksi Vertikal";}
        else if(operational == "_") {vectorSet = refleksiHorizontal(vectorSet);KeteranganOperasi = "Refleksi Horizontal";}
        else{
            rotDeg = stoi(operational);
            vector<int> cekDeg = {90,180,270};
            if(std::find(cekDeg.begin(), cekDeg.end(), rotDeg) == cekDeg.end()) {
                throw invalid_argument("error because degree not in rotating");
            } else {
                vectorSet = rotating(vectorSet,rotDeg);
                KeteranganOperasi = "Rotating " + operational;
            }
        }
        // printf("=======================%s========================\n",KeteranganOperasi.c_str());

        // #pragma region Print data
        // n = vectorSet.size();
        // m = vectorSet[0].size();

        // for(int i = 0; i<n; i++){
        //     for(int j = 0; j<m; j++){
        //         printf("%d ",vectorSet[i][j]);
        //     }
        //     printf("\n");
        // }
        // #pragma endregion
    }

    #pragma endregion

    // printf("=======================Hasil Akhir========================\n");
    #pragma region Print data
    n = vectorSet.size();
    m = vectorSet[0].size();

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("%d ",vectorSet[i][j]);
        }
        printf("\n");
    }
    #pragma endregion

}