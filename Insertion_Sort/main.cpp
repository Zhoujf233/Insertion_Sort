//
//  main.cpp
//  Insertion_Sort
//
//  Created by JF Zhou on 2019/8/15.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
using namespace std;

//void insertion_sort(int* arr,int size)
//{
//    int i,j,temp;
//    for(i = 1; i < size; i++)
//    {
//        temp = arr[i];
//        for(j = i; j > 0 && arr[j - 1] > temp; j--)
//        {
//            arr[j] = arr[j - 1];
//        }
//        arr[j] = temp;
//    }
//}

//插入排序
//void insertion_sort(int* arr, int size)
//{
//    int i, j, k;
//    for (i = 1; i < size; i++)
//    {
//        //为a[i]在前面的a[0...i-1]有序区间中找一个合适的位置
//        for (j = i - 1; j >= 0; j--)
//            if (arr[j] < arr[i])
//                break;
//        //如找到了一个合适的位置
//        if (j != i - 1)
//        {
//            //将比a[i]大的数据向后移
//            int temp = arr[i];
//            for (k = i - 1; k > j; k--)
//                arr[k + 1] = arr[k];
//            //将a[i]放到正确位置上
//            arr[k + 1] = temp;
//        }
//    }
//}

//优化1:将搜索和数据后移这二个步骤合并
//void insertion_sort(int* arr, int size)
//{
//    int i, j;
//    for (i = 1; i < size; i++)
//        if (arr[i] < arr[i - 1])
//        {
//            int temp = arr[i];
//            for (j = i - 1; j >= 0 && arr[j] > temp; j--)
//                arr[j + 1] = arr[j];
//            arr[j + 1] = temp;
//        }
//}

//优化2:用数据交换代替数据后移
void swap(int *a, int *b)//交换两数
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int* arr, int size)
{
    int i, j;
    for (i = 1; i < size; i++)
        for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
            swap(arr[j], arr[j + 1]);
}

int main(int argc, const char * argv[])
{
    int arr[] = {89,22,-3,32,82,55,22,50,37,5,64,35,9,70};
    int size = (int) sizeof(arr)/sizeof(*arr);
    int i;
    cout<<"初始顺序为: ";
    for(i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    insertion_sort(arr, size);
    
    cout << "插入排序后顺序为：";
    for(i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
