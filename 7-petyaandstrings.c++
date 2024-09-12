#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){

    string a,b;
    cin>>a;
    cin>>b;
    int mayor;
    int resultado = 0;
    for (int i = 0; i < a.length(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    for(int i = 0;i<a.length();i++){
        if(a[i] > b[i]){
            resultado = 1;
            break;
        }else if(a[i] < b[i]){
            resultado = -1;
            break;
        }
    }
    cout<<resultado;
    



    return 0;
}