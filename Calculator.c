#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter operation: \t ");
    float a,b;
    char c;
    scanf("%f",&a);
    scanf("%c",&c);
    scanf("%f",&b);
    switch(c){
        case '+' : printf("\n%.2f",(a+b)); break;
        case '-' : printf("\n%.2f",(a-b)); break;
        case '*' : printf("\n%.2f",(a*b)); break;
        case '/' : printf("\n%.2f",(a/b)); break;
        case '%' : printf("\n%d",((int)a%(int)b)); break;
        case '^' : printf("\n%.2f",(pow(a,b))); break;
    }
    
    return 0;
}

    