int tour(petrolPump arr[],int n)
{
   deque<int> dq;
   int j = 0, sum = 0;
   while(j < 2*n){
       int x = arr[j%n].petrol - arr[j%n].distance;
       dq.push_back(j%n);
       sum += x;
       
       while(!dq.empty() && sum < 0){
           sum -= arr[dq.front()].petrol - arr[dq.front()].distance;
           dq.pop_front();
       }
       
       
       if(dq.size() == n){
           return dq.front();
       }
       j++;
   }
   return -1;
}

//Link: https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1
