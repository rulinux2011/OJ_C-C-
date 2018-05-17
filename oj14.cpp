/*
求第k大的数

给定一个长度为n（1≤n≤1,000,000）的无序正整数序列，以及另一个数k（1≤k≤1,000,000）（关于第k大的数：例如序列{1,2,3,4,5,6}中第3大的数是4。）

输入
第一行两个正整数m,n。

第二行为n个正整数。

输出
第k大的数。

样例输入
6 3
1 2 3 4 5 6
样例输出
4
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
            int n,m,k;
            while((cin>>n)&&n!=0)
            {
                        cin>>k;
                        vector<int>a;
                        for(int i=0;i<n;++i){
                                    cin>>m;
                                    a.push_back(m);
                        }
                        for(int i=0;i<n-1;++i){
                                    for(int j=0;j<n-1-i;++j){
                                                if(a[j]<a[j+1]){
                                                            int temp=a[j+1];
                                                            a[j+1]=a[j];
                                                            a[j]=temp;
                                                }
                                    }
                        }
                        cout<<a[k-1]<<endl;
            }

            return 0;
}
