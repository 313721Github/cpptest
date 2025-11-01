//
// Created by yanfyunfei on 25-10-22.
//
void my_swap(int *arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;
}

void selectionSort(int *arr,int size)
{
    for (int i=0;i<size-1;i++)
    {
        int min=i;
        for (int j=i+1;j<size;j++)
        {
            if (arr[j]<arr[min])
            {
               min=j;
            }
 
        }
            my_swap(arr,min,i);
    }


}