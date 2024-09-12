#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    string vec[100];

    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }

    for(int i = 0;i<n;i++){
        string palabra = vec[i];

        int cantidad = 0;
            while (palabra[cantidad] != '\0')
            {
                cantidad++;
            }
 
        if (cantidad > 10)
        {
            cout<<palabra[0]<<cantidad -2 << palabra[cantidad -1]<<endl;
        }else{
            cout<<palabra<<endl;
        }
        
        
    }


    return 0;
}