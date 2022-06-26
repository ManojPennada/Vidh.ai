//1.Minimum swaps required to bring all elements that are less than or equal 
//to k together on the left side and greater elements on the right side. 

#include<stdio.h>
int main()
{
 int n,arr[1000],index,left,right,k,swap=0;
 scanf("%d",&n);
 for(index=0;index<n;index++)
 scanf("%d",&arr[index]);
 scanf("%d",&k);
 for(left=0,right=n-1;left<right;left++,right--)
 {
 while(arr[left]<=k)
 left++;
 while(arr[right]>k)
 right--;
 if(left<right)
 swap++;
 }
 printf("%d",swap);
 return 0;
}

//2.Write a Program to Rotate second half of the array to left by n times

#include <stdio.h>

void rotate(int arr[], int rot,int n)
{
 int i,temp;
 temp=arr[n-1];
 for (i = n-1; i >n/2; i--)
 arr[i] = arr[i-1];
 arr[n/2]=temp;
 printf("\nRotated array is\n";
 for (i = 0; i < n; i++)
 printf("%d ", arr[i]);

}

int main()
{
 int arr[1000], i,rot;
 int n;
 scanf("%d",&n);
 //printf("Given array is\n";
 for (i = 0; i < n; i++)
 scanf("%d ", &arr[i]);
 scanf("%d",&rot);
 rotate(arr, rot,n);
 return 0;
}


//3.Find the maximum sum possible from a sub array of size k.

#include<stdio.h>
#include<limits.h>
int main()
{
 long long int arr[100];
 long long size,ind1=0,max=INT_MIN,k,itr,ind,sum;
 scanf("%lld",&size);
 for(itr=0;itr<size;itr++)
 scanf("%lld ",&arr[itr]);
 scanf("%lld",&k);
 for(ind=0;ind<size;ind++)
 {
 ind1=ind;
 sum=0;
 for(itr=1;itr<=k;itr++)
 {
 if(ind1!=size)
 sum=sum+arr[ind1++];
 }
 if(sum>max)
 max=sum;
 }
 printf("%lld",max);
return 0;
}

//4.Get a array from user and Count the number of possible triplets (not necessary to be continuous) that give a sum greater than K. In the sample case, 
//the triplets that give sum greater than 10 are (2,4,5) and (3,4,5)

#include<stdio.h>
#include<limits.h>
int main()
{
 int arr[100],size,ind,ind1,ind2,sum,count=0,k;
 scanf("%d",&size);
 for(ind=0;ind<size;ind++)
 scanf("%d ",&arr[ind]);
 scanf("%d",&k);
 for(ind=0;ind<size-2;ind++)
 {
 for(ind1=ind+1;ind1<size-1;ind1++)
 {
for(ind2 ind1+1;ind2<size;ind2++)
{
 sum=arr[ind]+arr[ind1]+arr[ind2];
 if(sum>k)
 count++;
 }
 }
 }
 printf("%d",count);
 return 0;
}

//5.For each element consider the next k elements and nd the average of those values. If next element is not present,
// consider the element from the beginning of the array in circular fashion.

#include<stdio.h>
int main()
{
int n,k,i,j,sum=0;
 scanf("%d",&n);
 int arr[n];
 float ans[n];
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
 for(j=i;j<i+k;j++)
 {
 sum+=arr[j%n];
 }
 ans[i]=(float)sum/k;
 sum=0;
 }
 for(i=0;i<n;i++)
 printf("%.2f ",ans[i]);

 return 0;
}