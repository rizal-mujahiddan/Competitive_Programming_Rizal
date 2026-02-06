#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >>a >> b;
    double pembilang = log((double)b/ (double)a);
    double penyebut = (log(1.5));
    double t = pembilang/ penyebut;
    int t_hasil;
    if (std::fmod(t, 1.0) != 0.0) {
        t_hasil = ceil(t);  // ceiling if not integer
    } else {
        t_hasil = t + 1;         // if integer, add +1
    }

    cout << t_hasil << endl;
    return 0;
}