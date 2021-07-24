- **sort(v.begin(),v.end())** : O(NlogN) where N=number of elements in vector
- **binary_search(v.begin(),v.end(),val)**: O(logN). Returns bool value.
- **upper_bound(v.begin(), v.end(), val)**: O(logN). Returns iterator 
- **lower_bound(v.begin(), v.end(), val)**: O(logN). Returns iterator 

#### Possible time complexities for given values of n
- **n<=10**       : O(n!), O(n^7), O(n^6). 
- **n<=20**       : O(n . 2^n), O(n^5). 
- **n<=80**       : O(n^4). 
- **n<=400**      : O(n^3). 
- **n<=7500**     : O(n^2). 
- **n<=7*10^4**   : O(n√n). 
- **n<=5*10^5**   : O(n logn). 
- **n<=5*10^6**   : O(n). 
- **n<=10^18**    : O(log^2 n), O(logn), O(1).
