#include<stdio.h>
int swap(int *,int *);
void main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    printf("values before swapping a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("values after swapping a=%d b=%d\n",a,b);

}
int swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return 0;
}
