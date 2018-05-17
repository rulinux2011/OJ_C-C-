#include<stdio.h>

int main()
{
    int *p;
    int i=10;
    int j;
    p=&i;
    j=*p;
    printf("%d\n",j);
    return 0;
}


/*
int main()
{
    int a[5]={1,2,3,4,5};
    //a[3]==*(a+3);
    printf("%p\n",a);
    printf("%p\n",a+1);
    printf("%p\n",*a+2);
    return 0;
}
*/
/*
void show_array(int *p,int len)
{
    int i=0;
    for(i=0;i<len;i++)
        printf("%d\n",p[i]);
}
int main()
{
    int a[5]={1,2,3,4,5};
    show_array(a,5);
    //printf("%d\n",a[0]);
    return 0;
}
*/
