  // How to set nth position in number ‘num’ :   
     
     void set(int & num,int n) 
{    
     int shift = 1<< n;  // First step is shift '1', 
     num = num | shift ;  // second  step is bitwise OR 
} 
