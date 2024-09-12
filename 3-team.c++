#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a,b,c;
    int cantidad;
    for(int i = 0; i < n; i++){
        cin>>a>>b>>c;
        if(a+b+c >= 2){ 
        cantidad++;
        }
    }
    cout<<cantidad;



    return 0;
}