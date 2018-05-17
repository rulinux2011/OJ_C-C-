/*判断质数*/

#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int n){
    if(n==1){
        return false;
    }else{
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
        return true;
    }else{
        return false;
    }
    }
}

int main(){
    int n;
    cin>>n;

    if(is_prime(n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
