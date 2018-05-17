/*

题目描述
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。要求用3个函数实现，分别为输入10个数、进行处理、输出10个数。要求使用指针的方法进行处理。

输入
用空格隔开的10个整数。

输出
输出进行题目描述操作之后的10个整数，每个整数之后输出一个空格。
请注意行尾输出换行。

样例输入
1 5 2 4 9 0 3 8 7 6
样例输出
0 5 2 4 6 1 3 8 7 9

*/
#include <iostream>
using namespace std;

void array_init(int array[]){
	for(int i=0;i<10;++i)
		cin>>*(array+i);
}

void sort(int array[]){
    int max=array[9],min=array[0],N,M;
    //寻找数组中的最小值，将其放到第一位
    for(int i=0;i<10;++i){
            if(*(array+i)<min){
            min=*(array+i);
            N=i;//记录下i的位置
        }

    }
        int temp1=array[N];
        array[N]=array[0];
        array[0]=temp1;
    //寻找数组中的最大值，将其放到最后一位
    for(int j=0;j<10;++j){
        if(*(array+j)>max){
                max=*(array+j);
                M=j;//记录下j的位置
        }
    }

        int temp2=array[M];
        array[M]=array[9];
        array[9]=temp2;
}




void array_print(int array[]){
      for(int i=0;i<10;++i){
	   cout<<*(array+i)<<" ";
   }
   cout<<endl;
}

int main()
{
   int array[10];
   int *p=array;
   array_init(p);
   sort(p);
   array_print(p);
   return 0;
}
