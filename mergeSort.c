#include<stdio.h>
int arr[7]={6,1,0,2,5,3,4};
void merge(int arr[],int l,int c,int r)
{
    int i,j,k;
    int ql=c-l+1;
    int qr=r-c;
    int L[ql];
    int R[qr];
    for(i=0;i<ql;i++)
    {
        L[i]=arr[l+i];
    }//parte esquerda ordenada
    for(i=0;i<qr;R[i]=arr[c+1+i],i++);//parte diretia ordenada
    k=l;
    for(i=0,j=0;i<ql&&j<qr; )
    {
        arr[k++]=(L[i]<R[j])?L[i++]:R[j++];
    }
    for( ;i<ql;i++)
    {
        arr[k++]=L[i];
    }
    for( ;j<qr;j++)
    {
        arr[k++]=R[j];
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int c=l+((r-l)>>1);
        mergesort(arr,l,c);
        mergesort(arr,c+1,r);
        merge(arr,l,c,r);
    }
}
int main()
{
    int l,r;
    l=0;
    r=7-1;
    mergesort(arr,l,r);
    int i;
    for(i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
