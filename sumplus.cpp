/*********求1!+2!+3!+.....+i!的值***********/
#include<iostream>
using namespace std;
/*
int main(){
    int i;
    int sum=0;
    int t=1;
    for(i=1;i<=1;++i){
        t*=i;
        sum+=t;
    }
    cout<<sum<<endl;
    return 0;
}
*/
//递归求阶乘

int fun(int n){
    if(n<=1)
        return 1;
    else
        return fun(n-1)*n;

    }

/*
//非递归
int fun(int n){
    int t=1;
    for(int i=1;i<=n;++i){
        t*=i;

    }
    return t;
}
*/

int main(){
    int i;
    int m=0;
    for(int i=1;i<=3;++i){
        cout<<fun(i)<<endl;
        m+=fun(i);
    }
    cout<<m<<endl;
    return 0;
}
