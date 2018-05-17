/*
题目描述
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。

现给定A、DA、B、DB，请编写程序计算PA + PB。

输入
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。
输出
在一行中输出PA + PB的值。
样例输入
3862767 6 13530293 3
3862767 1 13530293 8
样例输出
399
0
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
            string s1,s2;
            int a,b;
            int PA=0,PB=0;
            vector<char>vec1;
            vector<char>vec2;
            while(cin>>s1>>a>>s2>>b){
            for(int i=0;s1[i]!='\0';++i){
                        vec1.push_back((char)s1[i]);
            }
            for(int i=0;s2[i]!='\0';++i){
                        vec2.push_back((char)s2[i]);
            }

            int k1=0,k2=0;
            for(vector<char>::iterator it=vec1.begin();it!=vec1.end();++it){
                        if(a==*it-'0'){
                              k1++;
                        }
            }
            for(vector<char>::iterator it=vec2.begin();it!=vec2.end();++it){
                        if(b==*it-'0'){
                                    k2++;
                        }
            }

            int l1=1;
            if(k1!=0){
            for(int i=0;i<k1;++i){
                        PA+=a*l1;
                        l1*=10;
            }
            }
            int l2=1;
            if(k2!=0){
            for(int i=0;i<k2;++i){
                        PB+=b*l2;
                        l2*=10;
            }
            }
            cout<<PA+PB<<endl;
            }
            return 0;
}
