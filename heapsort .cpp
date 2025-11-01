//
// Created by yanfyunfei on 25-10-30.
//
#include "heapsort .h"
//构建堆结构 向下构建
void swap( int *arr,int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
//构建堆结构 向下构建 维护堆结构
//n，数组数量；i要构建的数量
//无返回值
void heapify(int arr[], int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if (left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
    if (right<n && arr[right]>arr[largest])
    {
        largest=right;
    }

    if (largest!=i)
    {
        swap(arr,i,largest);
        heapify(arr,n,largest);
    }

}

//堆排序
void heapsort(int *arr,int size)
{
    //开始构建堆
    for (int i=size/2-1; i>=0;i--)
    {
        heapify(arr,size,i);
    }

    for (int i=size-1;i>=0;i--)
    {
        swap(arr,0,i);//将堆顶，最大值移动到队尾
        heapify(arr,i,0);

    }

}