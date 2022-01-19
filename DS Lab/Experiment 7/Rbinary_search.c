#include <stdio.h>

int Rbinary_search(int a[],int,int,int);

int main()
{
int a[20],l,h,key,i,p,n;
      printf("enter the size of an array:");
      scanf("%d",&n);
    printf("enter the elements in an array:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("element to be searched:");
    scanf("%d",&key);
  p = Rbinary_search(a,0,n-1,key);
    if(p>=0)
    {
       printf("element found at %d\n",p);
    }
    else
    {
       printf("element not found");
       }
return 0;
}

  int Rbinary_search(int a[20],int l, int h, int key)
{
   int mid;
   if(l<=h)
   {
   mid = (l+h)/2;
   if(key == a[mid])
   {
       return mid;
    }
   else if(key>a[mid])
   {
       return Rbinary_search(a,mid+1,h,key);
   }
   else{
       return Rbinary_search(a,l,mid-1,key);
   }
    }
        return -1;
 }
