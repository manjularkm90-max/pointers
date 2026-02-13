//swaping
#include<stdio.h>
void swap(int *a,int *b){

     int temp=*a;
     *a=*b;
     *b=temp;
    }
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("befor swaping:\n%d\n%d\n",a,b);
    swap(&a,&b);
    printf("after swaping:\n%d\n%d",a,b);
    return 0;

}