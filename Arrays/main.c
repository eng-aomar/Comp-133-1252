#include <stdio.h>
#include <stdlib.h>
int func(int arry[], int size, int key);
void print_arry(int array[], int size);
void swap(int *element_1, int *element_2);
void sort_array(int arry[], int size);
int main()
{
    int a[]= {1,10,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    printf("Size of the array=%d\n",size);
    print_arry(a,size);
    int res= func(a,size,5);
    if (res==-1)
        printf("Not Found\n");
    else
        printf("Element %d found at index %d\n", 5,res);

    swap(&a[0],&a[4]);
    print_arry(a,size);
    sort_array(a,size);
    print_arry(a,size);
    return 0;
}
int func(int arry[], int size, int key)
{
    int found =0, i;
    for( i=0; i<size; i++)
    {
        if(arry[i]==key)
        {
            found=1;
            break;
        }

    }
    if(found)
    {
        return i;
    }
    else
        return -1;
}

void swap(int *element_1, int *element_2)
{
    int temp = *element_1;
    *element_1 = *element_2;
    *element_2= temp;
}
void print_arry(int array[], int size)
{

    for(int i=0; i<size; i++)
        printf("a[%d]=%d \t",i,  array[i]);
    printf("\n");

}
void sort_array(int arry[], int size){
    printf("Sorted Array:   \n");
    for(int i=0; i<size-1;i++)
    {

        int min_index =i;
        for(int j=i+1; j<size;j++)
        {
            if (arry[j] < arry[min_index])
            {
                min_index = j;
            }
        }
        if(min_index !=i)
        {
            int temp = arry[min_index];
                arry[min_index] = arry[i];
                arry[i] =temp;
        }
    }


}
