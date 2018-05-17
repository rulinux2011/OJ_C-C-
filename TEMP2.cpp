/*
#include<iostream>
using namespace std;
int main(){
    int i=1,sum=1;
    while(i<=10){
        sum*=i;
        ++i;
    }
    cout<<sum<<endl;
    return 0;
}
*/
/*
#include<stdio.h>
char *myString(){
    char buffer[6]={0};
    char *s="Hello World!";
    for(int i=0;i<sizeof(buffer)-1;i++){
        buffer[i]=*(s+i);
    }
    return buffer;
}
int main(){
    printf("%s\n",myString());
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
long factorial(long n){
    if(n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int sum=0,t=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        sum+=factorial(i);
    }
    cout<<sum<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int sum=0,t=1;
    for(int i=1;i<=3;++i){
        t*=i;
        sum+=t;

    }
    cout<<sum<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int count=1;
    int a,n;
    long sn=0,an=0;
    cin>>a;
    cin>>n;
    while(count<=n){
        an+=a;
        a*=10;
        sn+=an;
        ++count;
        cout<<an<<endl;
    }
    cout<<sn<<endl;
    return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>t;
    vector<int>a;
    int r,c,b;
    cin>>r>>c;
    int x=r*c;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
          cin>>b;
          a.push_back(b);
        }
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<a[i];
        if((i+1)%c==0){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }

    for(int j=0;j<c;++j){
        for(int i=0;i<r;++i){
            t.push_back(a[i*c+j]);
        }
    }
    cout<<endl;

    for(int i=0;i<x;i++){
        cout<<t[i];
        if((i+1)%r==0){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }


    return 0;
}
*/
/*
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    vector<int>t;
    vector<int>a;
    int r,c,b;
    cin>>r>>c;
    int x=r*c;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
          cin>>b;
          a.push_back(b);
        }
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<fixed<<right<<setw(3)<<a[i];
        if((i+1)%c==0){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }


    for(int j=0;j<c;++j){
        for(int i=0;i<r;++i){
            t.push_back(a[i*c+j]);
        }
    }
    cout<<endl;

    for(int i=0;i<x;i++){
        cout<<fixed<<right<<setw(3)<<t[i];
        if((i+1)%r==0){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;++i){
        for(int j=1;j<=i;++j){
            cout<<fixed<<right<<i<<"*"<<j<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;++i){
        for(int j=1;j<=i;++j){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;++i){
        for(int j=1;j<=i;++j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;++i){
        for(int j=9;j>=i;--j){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=9;i>=1;--i){
        for(int j=1;j<=i;++j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int rows=5,k=0;
    for(int i=0;i<rows;++i){
        for(int j=0;j<rows-i;++j){
            cout<<setw(3)<<"  ";
        }
        for(int j=0;j<=i;++j){
            cout<<setw(6)<<"*";
        }

        cout<<endl;
    }
    return 0;
}
*/
/*
题目描述
有一行电文，已按如下规律译成密码：

A-->Z        a-->z

B-->Y        b-->y

C-->X        c-->x

......          ......

即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，非字母字符不变。要求根据密码译回原文，并输出。

输入
输入一行密文
输出
解密后的原文，单独占一行。
样例输入
ZYX123zyx
样例输出
ABC123abc


#include<iostream>
using namespace std;
int main(){
        char  *p=new char[20];
        char  *cl=new char[26];
        char  *sl=new char[26];
        int j='A',k='a';
        for(int i=0;i<26;++i){
                cl[i]=j++;
                sl[i]=k++;
        }
        cin.getline(p,20);
        for(int i=0;i<20;++i){
            for(int j=0;j<26;++j){
                        if(p[i]==cl[j]){
                                    p[i]=cl[25-j];
                                    break;
                        }
                        if(p[i]==sl[j]){
                                    p[i]=sl[25-j];
                                    break;
                        }
            }
        }

        cout<<p<<endl;
        delete [] sl;
        delete [] cl;
        delete [] p;
        return 0;
}
*/
/*
题目描述
比较两个字符串s1和s2的大小，如果s1>s2，则输出一个正数；若s1=s2，则输出0；若s1<s2，则输出一个负数。

要求：不用strcpy函数；两个字符串用gets函数读入。

例如："A"与"C"相比，由于"A"<"C"，应输出负数，同时由于"A"与"C"的ASCII码差值为2，因此应输出"-2"。

同理："And"和"Aid"比较，根据第2个字符比较的结果，"n"比"i"大5，因此应该输出"5"

输入
输入2行字符串

输出
一个整数，表示这两个字符串 比较的差值，单独占一行。
样例输入
And
Aid
样例输出
5

*/
/*
#include<stdio.h>
#include<string.h>

int main(){
            int i=0,res;
            char *s1=new char[20];
            char *s2=new char[20];
            gets(s1);
            gets(s2);
            while((s1[i]==s2[i])&&(s1[i]!='\0')){
                        ++i;
            }
            if((s1[i]=='\0')&&(s2[i]=='\0')){
                        res=0;
            }else{
                        res=s1[i]-s2[i];
            }
            printf("%d\n",res);
            return 0;
}
*/
/*
int main(){
            int m,n,res=0;
            char *s1=new char[20];
            char *s2=new char[20];
            gets(s1);
            gets(s2);
            m=strlen(s1);
            n=strlen(s2);
            for(int i=0, j=0;i<m||j<n;++i,++j){
                        if(s1[i]==s2[j]){
                                    continue;
                        }else{
                                    res=s1[i]-s2[j];
                        }
            }
            printf("%d\n",res);

            return 0;
}
*/
/*
题目描述
从键盘上输入3个字符串，求出其中最大者。
输入
输入3行，每行均为一个字符串。

输出
一行，输入三个字符串中最大者。
样例输入
England
China
America
样例输出
England
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

void  swap(char **a,char **b){
       char *temp;
       temp=*a;
      *a=*b;
      *b=temp;
}
int main(){
            char str1[20],str2[20],str3[20];
            cin.getline(str1,20);
            cin.getline(str2,20);
            cin.getline(str3,20);
            if(strcmp(str1,str2)<0){
                        swap(str1,str2);
            }
            if(strcmp(str1,str3)<0){
                        swap(str1,str3);
            }
            if(strcmp(str2,str3)<0){
                        swap(str2,str3);
            }
            cout<<str1<<endl;
            return 0;
}
*/

/*
题目描述
写一个函数将一个字符串按反序存放。在主函数中输入一个字符串，通过调用该函数，得到该字符串按反序存放后的字符串，并输出。
输入
一行字符串。
输出
输入字符串反序存放后的字符串。单独占一行。
样例输入
abcd
样例输出
dcba
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
/*
这个方法不好
void sort(int n,char a[]){
         char *t=new char[n];
         for(size_t i=0;i<n;++i){
              if(a[i]!='\0'||t[i]!='\0'){
                        t[i]=a[n-1-i];
              }
         }
         cout<<t<<endl;


}
*/
/*
void sort(int n,char *a){
            for(int i=0;i<n/2;++i){
                        int temp=a[i];
                        a[i]=a[n-1-i];
                        a[n-1-i]=temp;
            }
            cout<<a<<endl;
}


int main(){
            int n;
            char *p=new char[n];
            gets(p);
            n=strlen(p);
            sort(n,p);
            delete [] p;
            return 0;
}
*/
/*
题目描述
写一个函数，将一个字符串中的元音字母复制到另一个字符串中。在主函数中输入一个字符串，通过调用该函数，得到一个有该字符串中的元音字母组成的一个字符串，并输出。
输入
一个字符串（一行字符）。

输出
该字符串所有元音字母构成的字符串。行尾换行。
样例输入
CLanguage
样例输出
auae
提示

可以采用如下函数原型


void vowels(char s1[], char s2[]);
*/
/*
#include<iostream>
#include<cstring>
using namespace std;


int main(){
            int n,m,count=0,k=0;
            char *p=new char[n];
            gets(p);
            n=strlen(p);


            char str[]="AEIOUaeiou";
            m=strlen(str);
                 for(size_t i=0;i<n;++i){
                        for(size_t j=0;j<m;++j){
                                    if(p[i]==str[j]){
                                                count++;
                                    }
                        }
            }

           char *p2=new char[count];
           for(size_t i=0;i<n;++i){
                for(size_t j=0;j<m;++j){
                     if(p[i]==str[j]){
                           p2[k++]=p[i];
                     }
                }
           }
           cout<<p2<<endl;
           delete [] p2;
           delete [] p;

            return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
            int a,b;
            while(cin>>a>>b){
                    cout<<a+b<<endl;
            }

            return 0;
}
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
            int n;
            string s;
            vector<char>str1;
            vector<char>str2{'A','E','I','O','U','a','e','i','o','u'};
            vector<char>str3;
            cin>>s;
            for(int i=0;s[i]!='\0';++i){
                        str3.push_back((char)s[i]);
            }

            for(int i=0;i<str3.size();++i){
                        for(int j=0;j<str2.size();++j){
                                    if(str3[i]==str2[j]){
                                                str1.push_back(str3[i]);
                                    }
                        }
            }
           // for(vector<char>::size_type  i=0;i<str1.size();++i){
           //             cout<<str1[i];
           // }
           for(vector<char>::iterator it=str1.begin();it!=str1.end();++it){
                          cout<<*it;
           }
            cout<<endl;
            return 0;
}



















