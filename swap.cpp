/*********************不依赖第三个变量实现两个整数的数值交换*************/

#include<iostream>
using namespace std;
void change(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    change(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
