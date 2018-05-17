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
int array_size(int n,char array[]){
            int k=0;
            for(int i=0;i<n;++i){
                      if(array[i]==','){
                        k++;
                      }
            }
            return k;
}
void convert(int n,char array[],int array2[]){
            int j=0;
            for(int i=0;i<n;++i){
                        if(array[i]!=','){
                                    array2[j++]=array[i]-'0';
                        }
            }
}
void change(int n,int array[]){
           for(int i=0;i<n/2;++i){
                     int temp=array[n-1-i];
                    array[n-1-i]=array[i];
                    array[i]=temp;
           }
}
int sum(int n,int array[]){
           int  sum=0;
           int  l=1;
            for(int i=0;i<n;++i){
                        sum+=array[i]*l;
                        l*=10;
            }
            return sum;
}
int main(){
            char a[12];
            int temp1[12];
            char b[12];
            int temp2[12];
            while(cin>>a>>b){
            int n1=strlen(a);
            int n2=strlen(b);
            int flag=-1,flag2=-1;
            int N,M;
            if(*a=='-'){
                    for(int i=0;i<n1-1;++i){
                        a[i]=a[i+1];
                    }
                       N=n1-1-array_size(n1-1,a);
                       convert(n1-1,a,temp1);
                }else{
                       flag=1;
                       N=n1-array_size(n1,a);
                       convert(n1,a,temp1);
            }
             if(*b=='-'){
                    for(int i=0;i<n2-1;++i){
                        b[i]=b[i+1];
                    }
                       M=n2-1-array_size(n2-1,b);
                       convert(n2-1,b,temp2);
                }else{
                       flag2=1;
                       M=n2-array_size(n2,b);
                       convert(n2,b,temp2);
            }


             change(N,temp1);
             int A;
             A=flag*sum(N,temp1);

             change(M,temp2);
             int B;
             B=flag2*sum(M,temp2);

             cout<<A+B<<endl;

           }
            return 0;
}
