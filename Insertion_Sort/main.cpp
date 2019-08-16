//
//  main.cpp
//  Insertion_Sort
//
//  Created by JF Zhou on 2019/8/15.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
using namespace std;

//插入排序
void insertion_sort(int* arr,int size)
{
    int i,j,temp;
    for(i = 1; i < size; i++)
    {
        temp = arr[i];
        for(j = i; j > 0 && arr[j - 1] > temp; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}

int main(int argc, const char * argv[])
{
    int arr[] = {89,22,3,32,82,55,22,50,37,5,64,35,9,70};
    int size = (int) sizeof(arr)/sizeof(*arr);
    int i;
    cout<<"初始顺序为: ";
    for(i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    insertion_sort(arr, size);
    
    cout << "选择排序后顺序为：";
    for(i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
