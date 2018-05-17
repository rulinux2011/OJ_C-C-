/*
#include<iostream>
#include<vector>

using namespace std;
int main(){
            int n;

            while(cin>>n){
             int a;
             vector<int>vec;
            for(int i=0;i<n;++i){
                    cin>>a;
                    vec.push_back(a);
            }
            int m,N,flag=0;
            cin>>m;
            for(size_t i=0;i<n;++i){
                        if(vec[i]==m){
                                    N=i;
                                    flag=1;
                                    break;
                        }
            }
            if(flag==1){
                        cout<<N<<endl;
            }else{
                        cout<<"-1"<<endl;
            }
            }

            return 0;
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
            int n;
            while((cin>>n)&&n!=0)
            {

                        int m;
                        vector<int>a;
                        for(int i=0;i<n;++i){
                                    cin>>m;
                                    a.push_back(m);
                        }
                        int N,flag=0;
                        cin>>N;
                        for(int i=0;i<a.size();++i){
                                    if(N==a[i]){
                                                flag=1;
                                                cout<<i<<endl;
                                                break;
                                    }
                        }
                        if(flag==0){
                                    cout<<"-1"<<endl;
                        }

            }
            return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
            int n;
            while((cin>>n)&&n!=0){
                        int a[n];
                        for(int i=0;i<n;++i){
                                    cin>>a[i];
                        }
                        int m,k=0;
                        cin>>m;
                        for(int i=0;i<n;++i){
                                    if(a[i]==m){
                                                k++;
                                    }
                        }
                        cout<<k<<endl;


            }
            return 0;
}
*/

/*
#include<stdio.h>
int main(){
            int n;
            while(scanf("%d",&n)&&n!=0){
                        int k=0;
                        int a[n];
                        for(int i=0;i<n;++i){
                                    scanf("%d",&a[i]);
                        }
                        int m;
                        scanf("%d",&m);
                        for(int i=0;i<n;++i){
                                    if(a[i]==m){
                                                k++;
                                    }
                        }
                        printf("%d\n",k);
            }
            return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
            int n;
            while((cin>>n)&&n!=0){
                    int a[n];
                    for(int i=0;i<n;++i){
                        cin>>a[i];
                    }
                    int m;
                    if((cin>>m)&&m!=0){
                    int b[m];
                    for(int i=0;i<m;++i){
                         cin>>b[i];
                    }

                        int c[m]={0};
                        for(int i=0;i<n;++i){
                                for(int j=0;j<m;++j){
                                     if(b[j]==a[i]){
                                           c[j]=1;
                                     }
                                }
                        }
                        for(int i=0;i<m;++i){

                                    if(c[i]==1){
                                                cout<<"YES"<<endl;
                                    }
                                    if(c[i]==0){
                                                cout<<"NO"<<endl;
                                    }
                        }
                    }
            }
            return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
            int n;
            while((cin>>n)&&n!=0){
                    int a[n];
                    for(int i=0;i<n;++i){
                        cin>>a[i];
                    }
                    int m;
                    if((cin>>m)&&m!=0){
                    int b[m]={0};
                    int c;
                    for(int i=0;i<m;++i){
                         cin>>c;
                         for(int j=0;j<n;++j){
                                    if(c==a[j]){
                                                b[i]++;
                                    }
                         }
                    }

                        for(int i=0;i<m;++i){

                                    if(b[i]==1){
                                                cout<<"YES"<<endl;
                                    }
                                    if(b[i]==0){
                                                cout<<"NO"<<endl;
                                    }
                        }

                    }
            }
            return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
            struct student{
                        string num;
                        string name;
                        string sex;
                        int age;
            };

            int n;
            while((cin>>n)&&n!=0){
                                    student a[n];
                                    for(int i=0;i<n;++i){
                                                cin>>a[i].num>>a[i].name>>a[i].sex>>a[i].age;
                                    }
                                    int m;
                                    cin>>m;
                                                string  num;
                                                while(m--!=0)
                                                {
                                                            num.clear();
                                                            cin>>num;
                                                            int flag=-1;
                                                            int A=0,B=n-1;
                                                            while(A<=B){
                                                                        int mid=(A+B)/2;
                                                                        if(num==a[mid].num){
                                                                                   flag=mid;
                                                                                   break;
                                                                        }else if(num>a[mid].num){
                                                                                    A=mid+1;
                                                                        }else{
                                                                                    B=mid-1;
                                                                        }
                                                            }
                                                            if(flag==-1){
                                                                        cout<<"No Answer!"<<endl;
                                                            }else{
                                                                        cout<<a[flag].num<<" "<<a[flag].name<<" "<<a[flag].sex<<" "<<a[flag].age<<endl;
                                                            }
                                                }
            }
            return 0;
}
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
     struct student{
                        int num;
                        string name;
                        string gender;
                        int age;
            };
          int n,m;
          cin>>m;
          while(m--!=0)
          {
                      int n;
                      cin>>n;
                      student a[n];
                      for(int i=0;i<n;++i)
                      {
                                 cin>>a[i].num>>a[i].name>>a[i].gender>>a[i].age;
                      }
                      int k;
                      cin>>k;
                      for(int i=0;i<n;++i)
                      {
                                  if(k==a[i].num){
                                  cout<<a[k-1].num<<" "<<a[k-1].name<<" "<<a[k-1].gender<<" "<<a[k-1].age<<endl;
                                    break;
                                  }
                      }
          }
            return 0;
}


