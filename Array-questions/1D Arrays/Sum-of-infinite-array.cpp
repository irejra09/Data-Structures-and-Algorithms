
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) 
{
    // Write your code here

    int sum = 0;
    //Calculating sum of array 
    for(auto it: arr)
    {
        sum+=it;
    }
    vector<int> sumsum; // declaring the returning vector
    for(int i = 0;i<q;i++)
    {
        long left = queries[i][0];
        long right = queries[i][1];
        
        long r1 = right / n;
        int right_rem = right % n;

        long l1 = left / n;
        int left_rem = left % n;

        long long sum1 = r1*sum;
        if(right_rem !=0)
        {
            for(int j = 0; j<right_rem;j++)
            {
                sum1+=arr[j];
            }
        }

        long long sum2 = l1*sum;
        if(left_rem !=0)
        {
            for(int j = 0; j < left_rem;j++)
            {
                sum2+=arr[j];
            }
        }
        long ParSum = (sum1 - sum2)% 1000000007;
        long long finalSum = (ParSum +arr[(left-1)%n]);
        sumsum.push_back(finalSum);

    }
    return sumsum;

}