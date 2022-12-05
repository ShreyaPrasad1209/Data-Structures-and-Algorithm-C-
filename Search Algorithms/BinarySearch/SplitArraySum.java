package BinarySearch;
//Question: https://leetcode.com/problems/split-array-largest-sum/submissions/
public class SplitArraySum {
    public static void main(String[] args) {
    int[] arr={7,2,5,10,8};
    int m=2;
        System.out.println(splitarray(arr,m));
    }
//    We need two elements here: {Max element in Array,Maximum Sum possible of Array
    public static int splitarray(int[] arr,int m){
        int start=0;
        int end=0;
//        Basic Linear search to get the Max Element present in the Array:
        for(int i=0;i<arr.length;i++){
            start=Math.max(start,arr[i]); //Max Element in Array
            end+= arr[i]; //Maximum Sum of the Array
        }
        while(start<end){
//            Calculating the potential ans:
            int mid = start+(end-start)/2;
//            Calculate sum and no of pieces array can be divided into:
            int sum=0;
            int pieces=1;
            for(int i=0;i<arr.length;i++){
//                For every element in array if the current sum and the element added is greater than the potential ans
//                Then, add the new element to a new Sub array!
                if(sum+arr[i]>mid){
                    sum= arr[i];
                    pieces++;
                }else{
                    sum+=arr[i];
                }
            }
            if(pieces>m){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return end;
    }
}
