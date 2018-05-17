/*
题目描述
令Pi表示第i个素数。现任给两个正整数M <= N <= 10000，请输出PM到PN的所有素数。

输入描述:
输入在一行中给出M和N，其间以空格分隔。


输出描述:
输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入例子:
5 27

输出例子:
11 13 17 19 23 29 31 37 41 43

47 53 59 61 67 71 73 79 83 89

97 101 103

*/
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n){
     for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            return 0;
            break;
        }
     }
     return 1;
}

void print_prime(int m,int n,int array[]){
   int r=0;
   for(int i=(m-1);i<n;++i){
    cout<<*(array+i);
    r++;
    if(r==(n-m+1)||r%10==0){
        cout<<endl;
    }else{
        cout<<" ";
    }
   }
}

int main()
{

    int *p=new int[10000];
    int j=0,k=0;
    int M,N;
    for(int i=2;i<=104740;++i){
       if(isprime(i)==1){
            *(p+(j++))=i;
            ++k;
       }
    }

   cin>>M>>N;
   print_prime(M,N,p);

   delete [] p;


   return 0;

}
