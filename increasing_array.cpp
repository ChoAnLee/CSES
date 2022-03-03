#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    long long int b[a];
    long long int c=0;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<a;i++){
        if(b[i]<b[i-1])
        {
            c+=b[i-1]-b[i];
            b[i]=b[i-1];
        }    
    }
    cout<<c<<endl;
    return 0;
}