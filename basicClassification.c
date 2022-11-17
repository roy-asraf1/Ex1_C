#include<stdio.h>
#include<math.h>
int isPrime(int a);
int isStrong(int a);

int main(){
  if ((isStrong(2))==1)
  {
    printf("%d",2);
    
 }
    printf("\n");
   if ((isPrime (137))==1)
  {
    printf("%d",137);
}
return 0;
}
int isPrime(int a){
    for(int i=2; i<sqrt(a);i++){
        if(a%i==0)
        return 0;
    }
    return 1;
}
int isStrong(int a){
    int sum=0;
    int sumdigit=1;
    int temp=a;
    int rem=0;

    while(temp!=0){
        rem=temp%10;
        sumdigit=1;
        for (int i = 1; i <= rem; i++){
            sumdigit*=i;
    }
        sum+=sumdigit;
        temp=temp/10;
}
    return (sum==a)?1:0;
}   




