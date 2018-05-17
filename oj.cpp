/*
题目描述
输入3个字符串，按从小到大的顺序输出。要求使用指针的方法进行处理。

输入
3行，每行一个用字符串。保证每个字符串的长度不超过20。

输出
按从小到大的顺序输出这3个字符串，每个字符串一行。
请注意行尾输出换行。

样例输入
China
CLOCK
deal
样例输出
CLOCK
China
deal
*/

#include <iostream>
#include <cstring>
using namespace std;

void swap(char **a,char **b){
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
    char *p1=str1;
    char *p2=str2;
    char *p3=str3;
    if(strcmp(p1,p2)>0){
        swap(p1,p2);
    }
    if(strcmp(p1,p3)>0){
        swap(p1,p3);
    }
    if(strcmp(p2,p3)>0){
        swap(p2,p3);
    }
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;


    return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20],t[20];
       gets(a);
       gets(b);
       gets(c);

       if(strcmp(a,b)>0)
       {
         strcpy(t,a);
         strcpy(a,b);
         strcpy(b,t);
       }


        if(strcmp(a,c)>0)
        {
         strcpy(t,a);
         strcpy(a,c);
         strcpy(c,t);
        }

         if(strcmp(b,c)>0)
        {
         strcpy(t,b);
         strcpy(b,c);
         strcpy(c,t);
        }

        puts(a);
        puts(b);
        puts(c);
        return 0;
}
*/

/*
题目描述
求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，且保证b2-4ac>0。

程序中所涉及的变量均为double类型。

输入
以空格分隔的一元二次方程的三个系数，双精度double类型
输出
分行输出两个根如下（注意末尾的换行）：

r1=第一个根

r2=第二个根

结果输出时，宽度占7位，其中小数部分2位。

样例输入
1 3 2
样例输出
r1=  -1.00
r2=  -2.00
*/
/*
#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
   double a;
   double b;
   double c;
   //cin>>a>>b>>c;
   scanf("%lf%lf%lf",&a,&b,&c);
   if(a!=0&&(b*b-4*a*c)>0){
      double r1=(b*(-1)+sqrt(b*b-4*a*c))/2*a;
      double r2=(b*(-1)-sqrt(b*b-4*a*c))/2*a;
      //cout<<"r1="<<setiosflags(ios::fixed)<<setw(7)<<setprecision(2)<<r1<<endl;
      //cout<<"r2="<<fixed<<setprecision(2)<<setw(7)<<r2<<endl;
      printf("r1=%7.2lf\n",r1);
      printf("r2=%7.2lf\n",r2);

   }
   return 0;
}
*/
/*
#include<iostream>
#include<cmath>


int main(){
   double a;
   double b;
   double c;
   //cin>>a>>b>>c;
   scanf("%lf%lf%lf",&a,&b,&c);
   if(a!=0&&(b*b-4*a*c)>0){
      double r1=(b*(-1)+sqrt(b*b-4*a*c))/2*a;
      double r2=(b*(-1)-sqrt(b*b-4*a*c))/2*a;
      printf("r1=%7.2lf\n",r1);
      printf("r2=%7.2lf\n",r2);

   }else{
       printf("No real roots!\n");
   }
   return 0;
}
*/

/*
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double a;
    double b;
    double c;
    cin>>a>>b>>c;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a>c){
        a=a+c;
        c=a-c;
        a=a-c;
    }
    if(b>c){
        b=b+c;
        c=b-c;
        b=b-c;
    }
    cout<<fixed<<setprecision(2)<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a>c){
        a=a+c;
        c=a-c;
        a=a-c;
    }
    if(b>c){
        b=b+c;
        c=b-c;
        b=b-c;
    }
    cout<<c<<endl;
    return 0;
}
*/
/*

int main(){
    double l;
    cin>>l;
    if(l<=10000){
        l=l*0.1;
    }else if(l>10000&&l<=20000){
        l=10000*0.1+(l-10000)*0.075;
    }else if(l>20000&&l<=40000){
        l=10000*0.1+20000*0.075+(l-20000)*0.05;
    }else if(l>40000&&l<=60000){
        l=10000*0.1+20000*0.075+40000*0.05+(l-40000)*0.03;
    }else if(l>60000&&l<=100000){
        l=10000*0.1+20000*0.075+40000*0.05+60000*0.03+(l-60000)*0.015;
    }else{
        l=10000*0.1+20000*0.075+40000*0.05+60000*0.03+100000*0.015+(l-100000)*0.001;
    }
    cout<<fixed<<setprecision(2)<<l<<endl;
    return 0;
}
*/
/*
#include<iostream>

int main(){
    int sum=0,i=1;
    while(sum<1000){
        sum+=i;
        i++;
    }

     std::cout<<i-1<<std::endl;
    return 0;
}
*/
/*
题目描述
输出以下4*5的矩阵

  1  2  3  4  5

  2  4  6  8 10

  3  6  9 12 15

  4  8 12 16 20

要求使用循环实现，注意每行输出5个数字，每个数字占3个字符的宽度，右对齐。



输入
无
输出
每行输出5个数字，每个数字占3个字符的宽度，右对齐。


样例输入
无
样例输出
  1  2  3  4  5
  2  4  6  8 10
  3  6  9 12 15
  4  8 12 16 20

*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[4][5];
    for(int i=0;i<4;++i){
        for(int j=0;j<5*(i+1);j+=i+1){
            //*(*(a+i)+j/(i+1))=i+1+j;
            a[i][j/(i+1)]=i+1+j;
            //cout<<right<<setw(3)<<*(*(a+i)+j/(i+1))<<" ";
            //cout<<right<<setw(3)<<a[i][j/(i+1)]<<" ";
            printf("%3d",a[i][j/(i+1)]);
        }
        //cout<<endl;
        printf("\n");
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a[4][5];
    for(int i=0;i<4;++i){
        for(int j=0;j<5;++j){
            a[i][j]=i+1+j*(i+1);
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*

题目描述
用如下公式

π/4 ≈ 1 - 1/3 + 1/5 - 1/7 +...

求圆周率PI的近似值，直到发现某一项的绝对值小于10-6为止（该项不累加）。

要求输出的结果总宽度占10位，其中小数部分为8位。

程序中使用浮点型数据时，请定义为双精度double类型。

如果需要计算绝对值，可以使用C语言数学库提供的函数fabs，如求x的绝对值，则为fabs(x).

输入
无

输出
PI=圆周率的近似值

输出的结果总宽度占10位，其中小数部分为8位。

末尾输出换行。

样例输入
无
样例输出
PI=3.14159065

*/
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){

   double i=1.0;
   double sum=0.0;
   double l=1.0;
   double pi;
   while((1/i)>=1e-6){
        sum+=l/i;
        i+=2;
        l*=-1;
   }
    pi=4*sum;
    printf("PI=%10.8lf\n",pi);
    //cout<<"PI="<<fixed<<setprecision(8)<<setw(10)<<pi<<endl;

    return 0;
}
*/

/*
求Fibonacci数列，递归方法

#include<iostream>
using namespace std;
int Fibonacci(int n){
    if(n==1||n==2){
        return 1;
    }else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Fibonacci(n)<<endl;

    return 0;
}
*/
/*
求Fibonacci数列，非递归方法

#include<iostream>
using namespace std;
int Fibonacci(int n){
    int p=1,pn=1,pm=1;
    if(n==1||n==2){
        return p;
    }else{
        for(int i=3;i<=n;++i){
             p=pn+pm;
             pm=pn;
             pn=p;
        }
        return p;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<Fibonacci(n)<<endl;
    return 0;
}
*/

/*
求数列的和2/1，3/2，5/3，8/5，13/8，21/13......
#include<iostream>
#include<iomanip>
using namespace std;

double Fibonacci(int n){
    double p=1,pn=1.0,pm=2.0;
    if(n==1){
        return pn;
    }else if(n==2){
        return pm;
    }else{
        for(int i=3;i<=n;++i){
             p=pn+pm;
             pn=pm;
             pm=p;
        }
        return p;
    }
}

int main(){
    double sum=0;
    for(int i=1;i<=20;++i){
       sum+=Fibonacci(i+1)/Fibonacci(i);
    }
    cout<<fixed<<setprecision(6)<<sum<<endl;
    return 0;
}

*/

/*
#include<iostream>
using namespace std;
void swap_array(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(){
    int *p=new int[10];
    for(int i=0;i<10;++i){
        cin>>*(p+i);
    }

    for(int i=0;i<5;++i){
        swap_array(p+i,(p+10-i-1));
    }
    for(int i=0;i<10;++i){
        cout<<*(p+i)<<endl;
    }

    delete [] p;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int *p=new int[10];
    for(size_t i=0;i<10;++i){
        cin>>*(p+i);
    }
    for(int i=9;i>=0;--i){
        cout<<*(p+i)<<endl;
    }
    delete [] p;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void Fibonacci(int n,int *array){
    if(n==1){
        *array=1;
    }else if(n==2){
        *array=1;
        *(array+1)=1;
    }else{
        for(int i=2;i<n;++i){
            *array=1;
            *(array+1)=1;
            *(array+i)=*(array+(i-1))+*(array+(i-2));
        }
    }
}

int main(){
    int *p=new int[20];
    Fibonacci(20,p);
    for(size_t i=0;i<20;++i){
        cout<<*(p+i)<<endl;
    }
    delete [] p;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
    int *p=new int[10];
    for(size_t i=0;i<10;++i){
        cin>>*(p+i);
    }
    for(size_t i=0;i<9;++i){
        for(size_t j=0;j<9-i;++j){
            if(p[j]>p[j+1]){
                p[j]=p[j]+p[j+1];
                p[j+1]=p[j]-p[j+1];
                p[j]=p[j]-p[j+1];
            }
        }
    }
    for(size_t i=0;i<10;++i){
        cout<<*(p+i)<<endl;
    }
    delete [] p;
    return 0;
}
*/
/*矩阵转置的简单方法*/
/*
#include<iostream>
using namespace std;
int main(){
    int a[2][3];
    int t[3][2];
    for(size_t i=0;i<2;++i){
        for(size_t j=0;j<3;++j){
            cin>>a[i][j];
        }
    }
    for(size_t j=0;j<3;++j){
        for(size_t i=0;i<2;++i){
            t[j][i]=a[i][j];
        }
    }
    for(size_t i=0;i<3;++i){
        for(size_t j=0;j<2;++j){
            cout<<t[i][j]<<" ";
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
有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入到数组中。

假设数组长度为10，数组中前9个数（这9个数要求从键盘上输入，输入时要满足自小到大的输入顺序）已经按从小到大进行排序。

然后再从键盘上输入一个整数，将此整数插入到前有序的9个数中，使得最终的10个数依然是从小到大有序的。

输入
第一行输入以空格分隔的9个整数数，要求按从小到大的顺序输入。

第二行输入一个整数

输出
从小到大输出这10个数，每个数一行。
样例输入
1 11 21 31 41 51 61 71 81
45
样例输出
1
11
21
31
41
45
51
61
71
81

#include<iostream>
using namespace std;
int main(){
            int *p=new int[10];
            for(int i=0;i<9;++i){
                        cin>>*(p+i);
            }
            cin>>*(p+9);
            for(int i=0;i<10;++i){
                        if(*(p+9)<*(p+i)){
                                    *(p+9)=*(p+9)+*(p+i);
                                    *(p+i)=*(p+9)-*(p+i);
                                    *(p+9)=*(p+9)-*(p+i);
                        }
            }
            for(int i=0;i<10;++i){
                        cout<<*(p+i)<<endl;
            }
            delete [] p;
            return 0;
}
*/






















