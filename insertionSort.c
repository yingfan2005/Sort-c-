#include<stdio.h>
int arr[10]={1,3,6,2,8,10,9,7,11,20};
void inserSort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int aux=arr[i];
        for(j=i;j>0&&arr[j-1]>aux;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[j]=aux;
    }

}
int main()
{
    inserSort(arr,10);
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
