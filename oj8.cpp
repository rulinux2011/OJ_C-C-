/*
��Ŀ����
������������A��B�����ʾ��ʽ�ǣ��Ӹ�λ��ʼ��ÿ��λ���ö���","������
���������A+B�Ľ��������������ʽ�����

����
������������������ݣ�ÿ������ռһ�У�����������A��B��ɣ�-10^9 < A,B < 10^9����

���
�����A+B�Ľ��������������ʽ�����ÿ������ռһ�С�

��������
-234,567,890 123,456,789
1,234 2,345,678
�������
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
