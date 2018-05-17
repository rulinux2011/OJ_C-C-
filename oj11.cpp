/*
问题 I: 锤子剪刀布 (20)

题目描述
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：



现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。



输入
输入第1行给出正整数N（<=105），即双方交锋的次数。随后N行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C代表“锤子”、J代表“剪刀”、B代表“布”，第1个字母代表甲方，第2个代表乙方，中间有1个空格。
输出
输出第1、2行分别给出甲、乙的胜、平、负次数，数字间以1个空格分隔。第3行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有1个空格。如果解不唯一，则输出按字母序最小的解。
样例输入
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
样例输出
5 3 2
2 3 5
B B
*/
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
            int n;
            char str[]={'B','C','J'};
             cin>>n;
            if(n!=0){
                vector<char>vec;
                char a,b;
                for(int i=0;i<n;++i){
                       cin>>a>>b;
                       vec.push_back(a);
                       vec.push_back(b);
                }
                int k1=0,k2=0,k3=0;
                int c[3]={0,0,0};
                int d[3]={0,0,0};
                for(int i=0;i<vec.size();i+=2){
                          if(vec[i]=='C'&&vec[i+1]=='C'){
                                              k2++;
                          }
                          if(vec[i]=='C'&&vec[i+1]=='J'){
                                              k1++;
                                              c[1]++;
                          }
                          if(vec[i]=='C'&&vec[i+1]=='B'){
                                              k3++;
                                              d[0]++;
                          }
                           if(vec[i]=='J'&&vec[i+1]=='C'){
                                               k3++;
                                               d[1]++;
                          }
                           if(vec[i]=='J'&&vec[i+1]=='J'){
                                                k2++;
                          }
                           if(vec[i]=='J'&&vec[i+1]=='B'){
                                                 k1++;
                                                 c[2]++;
                          }
                           if(vec[i]=='B'&&vec[i+1]=='C'){
                                                k1++;
                                                c[0]++;
                          }
                           if(vec[i]=='B'&&vec[i+1]=='J'){
                                                k3++;
                                                d[2]++;
                          }
                           if(vec[i]=='B'&&vec[i+1]=='B'){
                                                k2++;
                          }
                }

            cout<<k1<<" "<<k2<<" "<<k3<<endl;
            cout<<k3<<" "<<k2<<" "<<k1<<endl;
            int max1=c[0],N=0,max2=d[0],M=0;
            for(int i=0;i<3;++i){
                        if(max1<c[i]){
                                    max1=c[i];
                                    N=i;
                        }
            }
            for(int i=0;i<3;++i){
                        if(max2<d[i]){
                                    max2=d[i];
                                    M=i;
                        }
            }
            cout<<str[N]<<" "<<str[M]<<endl;


    }
            return 0;
}
