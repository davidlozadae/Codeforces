#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    int n,number;
    string a;
    cin>>n;
    for(int i = 0;i < n; i++){
        cin>>a;
        if(a[1] == '-'){
            number--;
        }else{
            number++;
        }
    }
    cout<<number;



    return 0;
}