/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
            char str[]="hello";
            char *p=str;
            int n=sizeof(str);
            cout<<n<<endl;
            for(size_t i=0;i<n;++i){
                  cout<<*(p+i)<<endl;
            }
            int m=strlen(str);
            cout<<m<<endl;
                        for(size_t i=0;i<m;++i){
                  cout<<*(p+i)<<endl;
            }
            return 0;
}
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
            struct student {
            int num;
            char name[20];
            char sex;
            int age;
            };
            int n;
            student *pt;
            cin>>n;
            if(n>0&&n<=20){
                for(int i=0;i<n;++i){
                        scanf("%d %s %s %d",(pt+i)->num,(pt+i)->name,(pt+i)->sex,(pt+i)->age);
                }
               for(int j=0;j<n;++j){
                        cout<<(pt+j)->num<<" "<<(pt+j)->name<<" "<<(pt+j)->sex<<" "<<(pt+j)->age<<endl;
                }

            }
            return 0;
}
