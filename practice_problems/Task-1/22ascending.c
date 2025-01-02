#include <stdio.h>
int main(void)
{
	int a, b, c, larg,smol,mid;
	printf("write three numbers: ");
	scanf("%d %d %d",&a, &b, &c);
    if (a>b){
       if(a>c){
         larg=a;
        if(b>c){
            mid=b;
            smol=c;
        }
        else{
            mid=c;
            smol=b;
        }
       }
       else{
            larg=c;
            mid=a;
            smol=b;
       }
    }
    else if(b>c){
        larg=b;
        if(a>c){
            mid=a;
            smol=c;
        }
        else{
            mid=c;
            smol=a; 
        }
    }
    else if (c>b){
        larg=c;
        mid=b;
        smol=a;
    }
    printf("%d %d %d", smol,mid,larg);

}    