    int i=0;
    int j=0;
    vector<long long>ans;
    list<long long>l;
    
    while(j<N){
        if(A[j]<0){
            l.push_back(A[j]);
        }
        if(j-i+1<K)j++;
        else if((j-i+1)==K){
            if(l.size()==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(l.front());
                if(A[i]==l.front())
                    l.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;