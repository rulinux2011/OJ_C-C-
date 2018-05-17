/*

#include<stdio.h>


double fun(int n){
    double p,pn=1.0,pm=2.0;
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
        sum+=fun(i+1)/fun(i);
    }
    printf("%.6lf\n",sum);


    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int temp;
    int *p=new int[10];
    for(size_t i=0;i<9;++i){
        cin>>*(p+i);
    }
    cin>>*(p+9);
    for(int i=0;i<9;++i){
        if(p[9]<p[i]){
            temp=p[9];
            p[9]=p[i];
            p[i]=temp;
        }
    }
    for(size_t i=0;i<10;++i){
        cout<<*(p+i)<<endl;
    }

    delete [] p;
    return 0;
}





