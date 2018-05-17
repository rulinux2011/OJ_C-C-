/*特殊乘法

题目描述
写个算法，对2个小于1000000000的输入，求结果。特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
输入
 两个小于1000000000的数

输出
 输入可能有多组数据，对于每一组数据，输出Input中的两个数按照题目要求的方法进行运算后得到的结果。

样例输入
24 65
42 66666
3 67
样例输出
66
180
39
*/

#include<iostream>
#include<cstring>
using namespace std;
int main(){
            int a,b;
            int *p1=new int[10];
            int *p2=new int[10];
            while(cin>>a>>b){
                        int N=0;
                        for(int i=0;a!=0;++i){
                                    *(p1+i)=a%10;
                                    a=a/10;
                                    N++;
                        }
                        int M=0;
                        for(int i=0;b!=0;++i){
                                    *(p2+i)=b%10;
                                    b=b/10;
                                    M++;
                        }


                        int sum=0;
                        for(int i=0;i<N;++i){
                                    for(int j=0;j<M;++j){
                                            sum+=p1[i]*p2[j];
                                    }
                        }
                        cout<<sum<<endl;

            }
            delete [] p2;
            delete [] p1;

            return 0;
}
