/*
题目描述
给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。
现在请计算A+B的结果，并以正常形式输出。

输入
输入包含多组数据数据，每组数据占一行，由两个整数A和B组成（-10^9 < A,B < 10^9）。

输出
请计算A+B的结果，并以正常形式输出，每组数据占一行。

样例输入
-234,567,890 123,456,789
1,234 2,345,678
样例输出
-111111101
2346912
*/
#include<iostream>
#include<cstring>
using namespace std;

int  convert_1(int n,char array[])
{
            int res=0,l=1;
            for(int i=n-1;i>=0;--i)
            {
                        if(array[i]!=',')
                        {
                               res+=(array[i]-'0')*l;
                               l*=10;
                        }
            }
            return res;
}


int main(){
            char a[12];
            char b[12];
            while(cin>>a>>b){
            int n1=strlen(a);
            int n2=strlen(b);
            int flag=-1,flag2=-1;
            int N,M;
            if(*a=='-'){
                    for(int i=0;i<n1-1;++i){
                        a[i]=a[i+1];
                    }
                       N=n1-1;
                }else{
                       flag=1;
                       N=n1;
            }
             if(*b=='-'){
                    for(int i=0;i<n2-1;++i){
                        b[i]=b[i+1];
                    }
                       M=n2-1;
                }else{
                       flag2=1;
                       M=n2;
            }

             int A;
             A=flag*convert_1(N,a);
             int B;
             B=flag2*convert_1(M,b);

             cout<<A+B<<endl;

           }
            return 0;
}
