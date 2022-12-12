#include<iostream>
using namespace std;
void mergeSort(int *arr1,int *arr2,int size1,int size2,int *ntemp)
{
  int i =0, j = 0,k=0;
  while(i<size1 && j<size2)
  {
    if(arr1[i]==arr2[j])
    {
      ntemp[k]=arr1[i];
      k++;
      i++;
    }
    if(arr1[i]<arr2[j])
    {
      ntemp[k]=arr1[i];
      i++;
      k++;
    }
    if(arr2[j]<arr1[i])
    {
      ntemp[k]=arr2[j];
      j++;
      k++;
    }
  }
  if(j==size2)
  {
    while(i<size1)
    {
      ntemp[k]=arr1[i];
      i++;
      k++;
    }
  }
  if(i==size1)
  {
    while(j<size2)
    {
      ntemp[k]=arr2[j];
      j++;
      k++;
    }
  }
}

void display(int *ntemp,int size)
{
  cout<<"The merged sorted array is :";
  for(int i = 0; i < size; i++)
  {
    cout<<ntemp[i]<<" ";
  }
}

int main()
{
  int arr1[100],arr2[100];
  int n1,n2;
  cout<<"Enter teh Size of Ist Sorted Array:";
  cin>>n1;
  cout<<"Enter the elements of the Ist Sorted Array:";
  for(int i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  cout<<"Enter teh Size of 2nd Sorted Array:";
  cin>>n2;
  cout<<"Enter the elements of the 2nd Sorted Array:";
  for(int i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
  cout<<"The Ist Sorted Array is:";
  for(int i=0;i<n1;i++)
  {
    cout<<arr1[i]<<" ";
  }
  cout<<endl;
  cout<<"The 2nd Sorted array is:";
  for(int i=0;i<n2;i++)
  {
    cout<<arr2[i]<<" ";
  }
  cout<<endl;
  int t = n1+n2;
  int ntemp[t];
  mergeSort(arr1,arr2,n1,n2,ntemp);
  display(ntemp,t);
}
