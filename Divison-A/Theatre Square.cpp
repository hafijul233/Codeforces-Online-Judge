#include <iostream>

using namespace std;

int main(){

    unsigned long long m,n,a,stone;
    while(cin >> m >> n >> a){
        stone = (((m+a)-1)/a)*(((n+a)-1)/a);
        cout << stone << endl;
    }
    return 0;
}
