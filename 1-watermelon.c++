#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){

    int w = 0;
    cin>>w;
    int parteUno, parteDos;
    int s = 0;

    for(int i = 1;i<w;i++){
    parteUno = i;
    parteDos = w - parteUno;
        if (parteUno % 2 == 0 && parteDos % 2 == 0)
        {
            cout<<"YES";
            s = 1;
            break;
        }
    }
    if (s == 0)
    {
       cout<<"NO";
    }
    

    return 0;
}