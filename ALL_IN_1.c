#include<stdio.h>
//sum of elements
void son(int arr[100], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    printf("\n");
}
//sq of number
void sq(int arr[100], int n)
{
   
    for(int i=0;i<n;i++)
    {
       int sq=arr[i]*arr[i];
       printf("%d \n",sq);
    }
    
}
//sum of digit
void sod(int arr[100], int n)
{
    int str[100],sum;
    for(int j=0;j<n;j++)
    {
        str[j]=arr[j];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
       while(str[i]!=0)
       {
        int r=str[i]%10;
        sum=sum+r;
        str[i]/=10;
       }
        printf("%d \n",sum);
    }
        printf("\n");

}
//reverse of digit 
void reverse(int arr[100], int n)
{
    
    int sum=0;
    int str[100];
    for(int j=0;j<n;j++)
    {
        str[j]=arr[j];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
       while(str[i]!=0)
       {
        int r=str[i]%10;
        sum=sum*10+r;
        str[i]/=10;
       }
        printf("%d \n",sum);
    }
        printf("\n");

}
//factorial
void fact(int arr[100],int n)
{
    int sum=1;
    for(int i=0;i<n;i++)
    {
       sum=1;
       for(int j=1;j<=arr[i];j++)
       { 
       sum=sum*j;
       }
        printf("%d \n",sum);
    }
 
        printf("\n");
}
//factor
void factor(int arr[100],int n )
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum=0;
       for(int j=1;j<=arr[i];j++)
       { 
            if(arr[i]%j==0)
            {
                sum++;
            }
       }
       printf("%d has %d factor \n",arr[i],sum);
    }
    
}
//count who many number are prime 
void prime(int arr[100],int n)
{
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
       for(int j=1;j<=arr[i];j++)
       { 
            if(arr[i]%j==0)
            {
                sum++;
            }
       }
       if(sum==2)
       {
            count++;
       }
       
    }
    printf("there are total %d prime number in this array \n",count);
}
//maximum and minimum
void max(int arr[100],int n)
{
    //maximum
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
   
    printf("max of the array is :%d\n",max);
    //minimum
    int mini=arr[0];
    for(int i=0;i<n;i++)
    {
        if(mini>arr[i])
        {
            mini=arr[i];
        }
    }
    printf("mini of the array is :%d\n",mini);
}
//reverse of array 
void rev(int arr[100],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int main ()
{
    int arr[100],n;
    char ch ;
    printf("enter number : ");
    scanf("%d",&n);
    printf("enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    printf("ENTRE 1 FOR SUM OF ELEMENETS \n");
    printf("ENTRE 2 REPLACING ARRAY WITH IT SQURE \n");
    printf("ENTRE 3 SUM OF DIGIT \n");
    printf("ENTRE 4 REVERSE OF DIGIT \n");
    printf("ENTRE 5 FACTORIAL OF DIGIT \n");
    printf("ENTRE 6 FACTOR OF DIGIT \n");
    printf("ENTRE 7 COUNT HOW MANY NUMBER ARE PRIME \n");
    printf("ENTRE 8 MAXIMUN AND MINIMUN OF NUMBER  \n");
    printf("ENTRE 9 REVERSE OF ARRAY \n");
    printf("ENTRE 0 TO END THE PROGRAM \n");
    printf("ENTRE YOUR CHOICE : \n");
    
    do
    { 
        scanf(" %c", &ch); 

    switch(ch)
    {
        case '1':
        printf("SUM OF ELEMENTS IS : \n");
        son(arr,n);
        break;
        case '2': 
        printf("ARRAY REPLACED  WITH ITS SQURE : \n");
        sq(arr,n);
        break;
        case '3':printf("SUM OF DIGITS IS  : \n"); 
        sod(arr,n);
        break;
        case '4': printf("REVERSE OF DIGITS IS : \n");
        reverse(arr,n);
        break;
        case '5': printf("FACTORIAL OF DIGITS IS : \n");
        fact(arr,n);
        break;
        case '6': printf("FACTOR OF DIGITS ARE : \n");
        factor(arr,n);
        break;
        case '7': printf("TOTAL PRIME NUMBER ARE  : \n");
        prime(arr,n);
        break;
        case '8': printf("MAX AND MINI OF THE ARRAY IS : \n");
        max(arr,n);
        break;
        case '9': printf("REVERSE OF ARRAY IS : \n");
        rev(arr,n);
        break;
        case '0':
        printf("Exiting program.\n");
        break;
        default:
        printf("invalid choice try again ");
    }
    }
    while(ch!='0');
    return 0;
}