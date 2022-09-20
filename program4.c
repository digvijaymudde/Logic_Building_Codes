# Logic_Building_Codes
Simple level to difficult problem stetment codes

// 4. Accept one number and check whether is is divisible by 5 or not.

#include<stdio.h>

int main()
{
    int iNo=0;
    int reminder=0;

    printf("enter the number : ");
    scanf("%d",&iNo);

    

    if(iNo%5==0)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("number is not divisible by 5");
    }

}
