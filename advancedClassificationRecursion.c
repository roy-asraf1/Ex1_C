#include<stdio.h>
#include<math.h>
#include "NumClass.h"

int countDigits(int num){
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    return count;
}
int HELPER(int num,int len){
    if(num<10){
        return pow(num,countDigits(len));
    }
    return pow(num%10,len)+HELPER(num/10,len);
}
int isArmstrong(int num){
    int res=HELPER(num,(num));
    if(res==num){
        return 1;
    }
    else{
        return 0;
    }
}
int reverse(int num){
    int size=countDigits(num);
    if(size==0){
        return 0;
    }
    return((num%10*pow(10,size))+reverse(num/10));
}
int isPalindrome(int num){
    int rev=reverse(num);
    rev/=10;
    if(rev==num){
        return 1;
    }
    return 0;
}