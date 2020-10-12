#include<stdio.h>
void main()
{
    int a[10],n,x,y,first,last,mid,element,pos=-1;
    printf("Enter the no. of rows and columns");
    scanf("%d",&n);
    printf("Enter the elements in the matrix");
    for(x=0;x<n;x++)
    {
     scanf("%d",&a[x]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&element);
    first=0;last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(element<a[mid])
            last=mid-1;
        else if(element>a[mid])
            first=mid+1;
        else
        {
         pos=mid+1;break;
    }
    }
    printf("%d found at position %d",element,pos);
}
