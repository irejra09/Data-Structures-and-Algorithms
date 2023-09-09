#include<iostream>
#include<vector>
using namespace std;

//impelemetion the print function for the array
void printArr(vector<int> &arr1)
{
    int n1 = arr1.size();
    for(int i = 0; i < n1; i++)
    {
        cout<<arr1[i]<<" ";
    }
}

void insertionSort(vector<int> &arr2)
{
    int n = arr2.size();
    for(int i = 1; i < n; i++)
    {
        int key = arr2[i];
        if(key > arr2[i-1])
        {    
            for(int j = i; j > 0; j--)
            {
                if(arr2[j]<arr2[j-1])
                {
                    swap(arr2[j],arr2[j-1]);
                }
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //printing the array before sorting
    cout<<"Printing the elements of the array before sorting: ";
    printArr(arr);
    cout<<endl;
    //calling the insertion sort function
    insertionSort(arr);

    //calling the printArr() agai to print the array after getting sorted
    cout<<"Printing the elements of the array after sorting: ";
    printArr(arr);
    return 0;

}