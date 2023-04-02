#include <iostream>
using namespace std;
#include <queue>


void kSortedArray(int inout[], int n, int k)
{
  priority_queue<int> pq;
  for(int i = 0; i < k; i++)
  {
    pq.push(inout[i]);
  }
  //Remaining elements
  int j = 0;
  for(int i = k; i < n; i++)
  {
    inout[j] = pq.top();
    pq.pop();
    pq.push(inout[i]);
    j++;
  }

  while(!pq.empty())
  {
    inout[j] = pq.top();
    pq.pop();
    j++;
  }
}
int main()
{
  int inout[] = { 10, 12, 8 , 7, 9};
  int k = 3;
  kSortedArray(inout,5,k);
  for(int i = 0; i < 5; i++)
  {
    cout<<inout[i]<<" ";
  }
}