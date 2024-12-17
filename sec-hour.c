#include<stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter seconds");
    scanf("%d",a);
    b = a/60;
    c = b/60;
    d = b*60;

    printf("hour\tminute\tsecound");
    printf("%d\t,%d\t,%d",c,b,d);
}