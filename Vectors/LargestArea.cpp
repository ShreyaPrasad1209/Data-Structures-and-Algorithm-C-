int largestArea(vector<vector<int> > samples){
    int n = samples.size();
    int m = samples[0].size();

    int ans = 0;

    for(int i=0; i<n; i++){
        ans = max(ans, samples[i][0]);
    }

    for(int j=0; j<m; j++){
        ans = max(ans, samples[0][j]);
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(samples[i][j] == 1){
                samples[i][j] = min(samples[i-1][j-1], min(samples[i][j-1], samples[i-1][j])) + 1;
                ans = max(ans, samples[i][j]);
            }
        }
    }

    return ans;
}

//Asked in SAP Labs Online Test 2020
