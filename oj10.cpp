/*
题目描述
第一行输入一个数，为n，第二行输入n个数，这n个数中，如果偶数比奇数多，输出NO，否则输出YES。

输入

输入有多组数据。
每组输入n，然后输入n个整数（1<=n<=1000）。


输出

如果偶数比奇数多，输出NO，否则输出YES。


样例输入
1
67
7
0 69 24 78 58 62 64
样例输出
YES
NO

*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
            int n,a;
           while(cin>>n){
            vector<int>vec;
            if(n!=0){
                        for(int i=0;i<n;++i){
                                cin>>a;
                                vec.push_back(a);
                        }
            }
            int k1=0,k2=0;
            for(vector<int>::iterator it=vec.begin();it!=vec.end();++it){
                        if(*it%2==0){
                                    ++k2;
                        }else{
                                    ++k1;
                        }
            }

            if(k1>k2){
                        cout<<"YES"<<endl;
            }else{
                        cout<<"NO"<<endl;
            }
           }
            return 0;
}
