#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    int n,k,pasan = 0;
    cin>>n>>k;
    int vec[100];
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    for(int j = 0;j<n;j++){
        if(vec[j] >= vec[k-1] && vec[j] > 0){
            pasan ++;
        }
    }
    cout<<pasan;



    return 0;
}