//Program to calculate the some of factorial of given number

#include<stdio.h>

int SumOfFact(int iValue)
{
   int iCnt = 0;
   int sum = 0;

   for(iCnt = 1; iCnt <= iValue/2; iCnt++)
   {
        if((iValue % iCnt) == 0)
		{
			sum = sum+iCnt;
		}
   }
return sum;   
}

int main()
{
	int no = 0;
	int iRet = 0;
	
	printf("Enter The Number \n");
	scanf("%d",&no);
	
	iRet = SumOfFact(no);
	printf("Sum of given factorial is : %d", iRet);
	
	return 0;
}