#include<stdio.h>
#include<stdbool.h>
int arr[6]={6,2,9,1,4,0};
void bubbleSort(int arr[],int n)
{
    int i,j,tmp;
    bool trocou=true;
    for(i=0;i<n-1&&trocou;i++)
    {
        trocou=false;
        for(j=n-1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
                trocou = true;
            }
        }
    }
}
int main()
{
    bubbleSort(arr,6);
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
