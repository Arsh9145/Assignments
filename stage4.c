#include<stdio.h>

void Addition()
{
    int iValue1;
    int iValue2;

    int iAns;

    printf("Please Enter First Number");
    scanf("%d",&iValue1);

    printf("Please Enter Second Number:");
    scanf("%d",&iValue2);

    iAns=iValue1+iValue2;

    printf("Addition of %d & %d is: %d\n",iValue1,iValue2,iAns);


}

int main()
{
    Addition();
    return 0;
}