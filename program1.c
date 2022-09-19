//1.Program to divide two numbers 
#include<stdio.h> 
 
 int Division(int iNo1,int iNo2)
 {
    int iAns=0;
    
    iAns=iNo1/iNo2;
    return iAns;
 }

 int main()
 {
    int iValue1=20;
    int iValue2=10;
    int iRet;

    iRet=Division(iValue1,iValue2);

    printf("Division of two number is : %d",iRet);
    return 0;
 }