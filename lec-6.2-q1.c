#include<stdio.h>
#include<conio.h>
main() {

    int n;
    clrscr();
    printf("Enter number n:");
    scanf("%d",&n);
    do{
       printf("%d\n",n);
       n--;
    }while(n>=1);
    getch();
}
