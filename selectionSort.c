#include<stdio.h>
int arr[5]={7,2,15,4,9};
void seleSort(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        int aux;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        aux=arr[i];
        arr[i]=arr[k];
        arr[k]=aux;
    }
}
int main()
{
    seleSort(arr,5);
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
