package BinarySearch;
//Mountain Array is also known as BITONIC array. Ascending then descending or vice versa.
public class PeakIndex {
    public static void main(String[] args) {
        int[] arr={0,2,3,5,6,7,6,3,2,1,0};
        System.out.println(peakIndexInMountainArray(arr));
    }
    // https://leetcode.com/problems/peak-index-in-a-mountain-array/
    // https://leetcode.com/problems/find-peak-element/
//    Function to find peak element
    public static int peakIndexInMountainArray(int[] arr) {
        int start=0;
        int end=arr.length-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
//                This means we are in descending
                end=mid;
            }else{
//                Means ascending
                start=mid+1;
            }
        }
        return end;
    }
}
