#include<iostream>
#include<cmath>
using namespace std;



int main(){
    int n;
    cin>>n;
    int i=2;
    bool isprime=true;
    while(i<=sqrt(n)){
        if(n%i==0){
            isprime=false;
            break;
        }else{
            i++;
        }
    }
    if(isprime){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
