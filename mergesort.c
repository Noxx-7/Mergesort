#include <stdio.h>
#define SIZE 100

int array1[SIZE];
int array2[SIZE]; 

void merge(int low, int mid, int high)
{
    int i, j, k;

    for(i=low, j=mid+1, k=low; i<=mid && j<=high; k++) 
    {
        if(array1[i]<array1[j])
        {
            array2[k]=array1[i++];
        }
        else
        {
            array2[k] = array1[j++];
        }
    }
    while(i<=mid)
    {
        array2[k++]=array1[i++];
    }
    while(j<=high)
    {
        array2[k++]=array1[j++];
    }

    for (int l = 0; l <high+1 ; ++l)
    {
        array1[l]=array2[l];
    }
}

void sort(int low, int high)
{
    if(low<high)
    {
        int mid= (low + high)/2;
        sort(low,mid); 
        sort(mid+1, high);
        merge(low, mid, high);
    }
    else
        return;
}

int main(void)
{
    int n;
    printf("\nEnter number of elements");
    scanf("%d", &n);
    printf("\nEnter %d elemnts", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("\nArray after sorting is : ");

    sort(0, n-1);

    for(int i=0; i<n; i++)
    {
        printf("%d ", array1[i]);
    }
}
// hey this code is belong to rahul sharma dont miss use this. This code is made for educational purposes.