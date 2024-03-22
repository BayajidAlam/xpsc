        int ans = 0 ;
	    unordered_map<char, int> mp ;
	    for(auto it : pat) {
	        mp[it]++ ;
	    }
	    int cnt = mp.size() ;
	    
	    int n = txt.size(), k = pat.size(), i = 0, j = 0 ;
	    while(j<n) {
	        if(mp.find(txt[j]) != mp.end()) {
	            mp[txt[j]]-- ;
	            if(mp[txt[j]] == 0) cnt-- ;
	        }
	        if(j-i+1 == k) {
	            if(cnt == 0) ans++ ;
	            if(mp.find(txt[i]) != mp.end()) {
    	            if(mp[txt[i]] == 0) cnt++ ;
    	            mp[txt[i]]++ ;
    	        }
	            i++ ;
	        }
	        j++ ;
	    }
	    return ans ;