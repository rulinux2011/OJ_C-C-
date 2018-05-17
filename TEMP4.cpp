/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
            int a,b,n;
            while(cin>>n){
                        if(n!=0){
                              vector<int>a;
                               int sum=0;
                              for(int i=0;i<n;++i){
                                    cin>>b;
                                    a.push_back(b);
                                    sum+=a[i];
                              }
                              cout<<sum<<endl;
                        }else if(n==0){
                                    break;
                        }
            }
            return 0;
}
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
            int n,m,a;
            cin>>n;
            if(n!=0){
            for(int i=0;i<n;++i){
                           cin>>m;
                           if(m!=0){
                           vector<int>a;
                           int b,sum=0;
                           for(int i=0;i<m;++i){
                                         cin>>b;
                                         a.push_back(b);
                                         sum+=a[i];
                                  }
                                  cout<<sum<<endl;
                           }else{
                                       break;
                           }
            }

            }else{
                return 0;
            }
            return 0;
}
