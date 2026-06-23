#include<stdio.h>
float operator(int operator)
switch(operator){
    case 1 {printf("The sum of a and b is : %d",a+b);
        break;}
    case 2 {printf("The difference of a and b is : %d",a-b);
        break;}
    case 3 {printf("The product of a and b is : %d",a*b);
        break;}
    case 4 {printf("The quotient of a and b is : %d",a/b);
        break;}    
}
int main(){
    
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b); 
    int operator;
    printf("Enter the number of operator : ");
    scanf("%d",&operator);
    printf("The operator" );
    int ans;
    ans = operator(operator);
    printf("The answer is : %d",ans);        
    
    return 0;
}