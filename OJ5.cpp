// This file is a "Hello, world!" in C++ language by GCC for wandbox.
/*
题目描述
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：



A1 = 能被5整除的数字中所有偶数的和；

A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；

A3 = 被5除后余2的数字的个数；

A4 = 被5除后余3的数字的平均数，精确到小数点后1位；

A5 = 被5除后余4的数字中最大数字。

输入描述:
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。


输出描述:
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入例子:
13 1 2 3 4 5 6 7 8 9 10 20 16 18
8 1 2 4 5 6 7 9 16

输出例子:
30 11 2 9.7 9
N 11 2 N 9
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
            int n,b;
           while(cin>>n){
            if(n!=0){
                        vector<int>a;
                        int sumA1=0;
                        int sumA2=0;
                        int sumA3=0;
                        int sumA4=0;
                        int l=1,MAX=0,k=0,k1=0,k2=0,k3=0;
                        for(int i=0;i<n;++i){
                                    cin>>b;
                                    a.push_back(b);

                                    if(a[i]%10==0){
                                                sumA1+=a[i];
                                                k1++;
                                    }
                                    if(a[i]%5==1){
                                                sumA2+=l*a[i];
                                                l*=-1;
                                                k2++;
                                    }
                                    if(a[i]%5==2){
                                                sumA3++;
                                    }
                                    if(a[i]%5==3){
                                                 sumA4+=a[i];
                                                 k++;
                                    }
                                    if(a[i]%5==4){
                                            if(MAX<a[i]){
                                                MAX=a[i];
                                                k3++;
                                            }
                                    }

                        }


                        if(k1==0){
                                    cout<<"N"<<" ";
                        }else{
                                    cout<<sumA1<<" ";
                        }
                        if(k2==0){
                                    cout<<"N"<<" ";
                        }else{
                                    cout<<sumA2<<" ";
                        }
                        if(sumA3==0){
                                    cout<<"N"<<" ";
                        }else{
                                    cout<<sumA3<<" ";
                        }
                        if(k==0){
                                    cout<<"N"<<" ";
                        }else{
                                    cout<<fixed<<setprecision(1)<<(double)sumA4/k<<" ";
                        }
                        if(k3==0){
                                    cout<<"N"<<endl;
                        }else{
                                    cout<<MAX<<endl;
                        }
            }
           }
            return 0;
}

#include<stdio.h>
int main(){
            int n;
            int a[32767];
            while(scanf("%d",&n)!=EOF){
                        int sumA1=0,sumA2=0,sumA3=0,sumA4=0,l=1,max=0,k1=0,k2=0,k=0,k5=0;
                        for(int i=0;i<n;++i){
                                    scanf("%d",&a[i]);
                                     if(a[i]%10==0){
                                                sumA1+=a[i];
                                                k1++;
                                    }
                                    if(a[i]%5==1){
                                                sumA2+=l*a[i];
                                                l*=-1;
                                                k2++;
                                    }
                                    if(a[i]%5==2){
                                                sumA3++;
                                    }
                                    if(a[i]%5==3){
                                                 sumA4+=a[i];
                                                 k++;
                                    }
                                    if(a[i]%5==4){
                                            if(max<a[i]){
                                                max=a[i];
                                                k5++;
                                            }
                                    }

                        }
                        if(k1==0){
                                    printf("N ");
                        }else{
                                    printf("%d ",sumA1);
                        }
                        if(k2==0){
                                    printf("N ");
                        }else{
                                    printf("%d ",sumA2);
                        }
                        if(sumA3==0){
                                    printf("N ");
                        }else{
                                    printf("%d ",sumA3);
                        }
                        if(k==0){
                                    printf("N ");
                        }else{
                                    printf("%.1lf ",(double)sumA4/k);
                        }
                        if(k5==0){
                                    printf("N\n");
                        }else{
                                    printf("%d\n",max);
                        }
            }
            return 0;
}












