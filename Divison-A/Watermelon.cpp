#include <iostream>

using namespace std;

int main(){

  int value;
  while(cin >> value){
    if(value> 2 && !(value%2)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }

    return 0;
}
