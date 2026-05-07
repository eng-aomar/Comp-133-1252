#include <stdio.h>
#include <stdlib.h>
int search(int arr[], int size, int key);
void print(int arr[], int n);
void sort(int arr[], int size );
int main()
{
    int a[]= {10,5,2,1,7};
    int size = sizeof(a)/sizeof(a[0]);
    printf("Size = %d\n", size);
    int res = search(a,size,5 );
    if (res)
        printf("%d is in index %d", 5,res);
    else
        printf("Not found");
    print(a, size);
    printf("----");

    sort(a,size);
    print(a,size);
    return 0;
}

void sort(int arr[], int size )
{
    for ( int i=0; i<size -1; i++)
    {
        int min_index= i;
        for(int j=i+1; j<size; j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index =j;
            }
        }
        int temp= arr[min_index];
        arr[min_index] = arr[i];
        arr[i]= temp;

    }
}

int search(int arr[], int size, int key)
{
    int found=0; // key not found
    int i;
    for(i=0; i<size; i++)
    {
        if (arr[i]==key)
        {
            found= 1;
            break;
        }
    }
    if(found==1)
    {
        // printf("%d is in index %d", key,i);
        return i;
    }
    else return -1;

}
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
        printf("arr[%d]=%d \t", i, arr[i]);
    printf("\n");
}


