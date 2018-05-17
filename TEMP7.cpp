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

