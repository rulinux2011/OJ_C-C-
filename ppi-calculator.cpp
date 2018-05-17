#include<iostream>
#include<cmath>

int ppicalulator(int,int,double);


int main(){
    int x,y;
    double z;
    std::cout<<"plz input the x pixel:"<<std::endl;
    std::cin>>x;
    std::cout<<"plz input the y pixel:"<<std::endl;
    std::cin>>y;
    std::cout<<"plz input the size of panel:"<<std::endl;
    std::cin>>z;
    std::cout<<"PPI:"<<ppicalulator(x,y,z)<<std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}

int ppicalulator(int a,int b,double c){
    int d;
    d=int(sqrt(a*a+b*b)/c);
    return d;

}
