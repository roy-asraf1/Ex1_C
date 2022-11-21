#include<stdio.h>
#include<math.h>
#include "NumClass.h"

int isArmstrong(int a) 
{
    int temp=0;
    int count=0;
    int sum=0;
    temp=a;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=a;
    int reminder;
    for(int i=0;i<count;i++){
        reminder = temp%10;
        sum+=pow(reminder,count);
        temp=(temp/10);
    }
    return (sum==a?1:0);
}
int isPalindrome(int a){
    int count =0;
    int temp=0;
    while(temp!=0){
        count++;
        temp=temp/10;
    }    
    temp=a;
    int arr[count];
    for(int i=0;i<count;i++){
        arr[i]=(temp/10)%10;
    }
    for(int j=0;j<(count/2)-1;j++){
        if(arr[j]!=arr[count-1-j])
        return 0 ;
    } 
    return 1;
}

