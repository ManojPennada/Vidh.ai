//1.Write a program toggle n+1 th bit of a given number

#include<stdio.h>
int main()
{
 int num,N,newnum;
 scanf("%d %d",&num,&N);
 newnum=num^(1<<N);
 printf("%d",newnum);
 return 0;
}

//2.Generate a bonacci series where each term is made by XOR of previous 2 terms. 
//The first and second term in the series is 1 and 2 respectively. So the third term is 1^2=3 and it goes on.

#include<stdio.h>
int fibonacci(int n)
{
 if(n==1)
 return 1;
 if(n==2)
 return 2;
 if(n==3)
 return 1^2;
return ((n%3)+1);
}
int main()
{
 int n,count;
 scanf("%d",&n);
 for(count=1;count<=n;count++)
 printf("%d ",fibonacci(count));
 return 0;
}

//3.Write a program to check whether the given number is
//happy number or not using recursion

#include<stdio.h>
int isHappy(int num)
{
 int sum=0;
 if(num==1)
return 1;
 if(num==4)
 return 0;
 while(num)
 {
 sum=sum+(num%10)*(num%10);
 num=num/10;
 }
 return isHappy(sum);
}
int main()
{
 int num,result;
 scanf("%d",&num);
 result=isHappy(num);
 if(result==0)
 printf("Not a happy number";
 else
 printf("Happy number";
 return 0;
}

//4.Josephus Problem: During a war, n number of soldiers are captured. 
//These soldiers prefer death to imprisonment. So they stand in a circle and decide 
//that each alive person will kill the next alive person 
//in clockwise direction i.e Soldier 1 will kill Soldier 2, 
//Soldier 3 will kill soldier 4 and it goes on. 
//This will continue until only one soldier is alive. The position of the alive soldier varies based on the number of soldiers captured. Your task 
//is to find the position of the alive soldier based on the number of soldiers.

#include<stdio.h>
int josephus(int num)
{
 int mask=1;
 num=num<<1;
 num=num+1;
 while(mask<=num)
 mask=mask<<1;
 mask=mask>>1;
 num=num^mask;
 return num;
}

int main()
{
 int n;
 scanf("%d",&n);
 printf("The last alive soldier is %d", josephus(n));
 return 0;
}

//5.Check whether the given number 
//is extra perfect number (only first and last bits are ON bits)

#include<stdio.h>
int main()
{
 
int num;
scanf("%d",&num);
if(num&1)
{
 num>>=1;
 while(num>1)
 {
 if(num&1)
 break;
 num>>=1;
 }
 if(num==1)
 printf("Extra Perfect Number";
 else
 printf("Not";
}
else
 printf("Not";
return 0;
}