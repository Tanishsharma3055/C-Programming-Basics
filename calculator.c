# include<stdio.h>

void cal(){
    char ca;
    int a,b,c;
    
    printf("Enter the operation\n");
    scanf(" %c", &ca); 
    switch(ca){
       case '+' : {printf("Enter number 1\n");
                  scanf("%d",&a);
                  printf("Enter number 2\n");
                  scanf("%d",&b);
                  c=a+b;
                  printf("Answer is %d\n \n",c);
                  break;}
       case '-' : {printf("Enter number 1\n");
                  scanf("%d",&a);
                  printf("Enter number 2\n");
                  scanf("%d",&b);
                  c=a-b;
                  printf("Answer is %d\n \n",c);
                  break;}
        case '*' : {printf("Enter number 1\n");
                  scanf("%d",&a);
                  printf("Enter number 2\n");
                  scanf("%d",&b);
                  c=a*b;
                  printf("Answer is %d\n \n",c);
                  break;}
        case '/' : {printf("Enter number 1\n");
                  scanf("%d",&a);
                  printf("Enter number 2\n");
                  scanf("%d",&b);
                  c=a/b;
                  printf("Answer is %d\n \n",c);
                  break;}

         default: printf("Not available or invalid\n \n");

            }
         }  
  

 int main(){
   
   for( int i=1; ; i++) {
   cal();
   
   }
     return 0;
    
     
 }
