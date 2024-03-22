  long maximumSumSubarray(int K, vector<int> &Arr, int N){
        
        
        long res = 0;
        for (int i=0; i<K; i++)
           res += Arr[i];
     
        long curr_sum = res;
        for (int i=K; i<N; i++)
        {
           curr_sum += Arr[i] - Arr[i-K];
           res = max(res, curr_sum);
        }
     
        return res;
        
        
        
    }