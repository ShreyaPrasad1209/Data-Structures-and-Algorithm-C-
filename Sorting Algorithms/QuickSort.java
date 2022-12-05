package Arrays.Sorting;

import java.util.Arrays;

public class QuickSort {
    public static void main(String[] args) {
        int[] arr= {5,321,122,3,21,4,34,2};
        sort(arr, 0, arr.length - 1);
        System.out.println(Arrays.toString(arr));
    }
//    Function to get the array sorted
    public static void sort(int[] arr,int low, int high){
//        Base condition
        if( low >= high){
            return;
        }
//        Initialising pointers to sort the array
        int start = low;
        int end = high;
        int mid = start + (end-start)/2;
        int pivot = arr[mid];
//        Condition to check the loop for elements that are either less than or greater than pivot but on the wrong side
        while(start <= end){
            while(arr[start] < pivot){
                start++;
            }
            while(arr[end] > pivot){
                end--;
            }
//            Once these loops are violated
//            it means there's a element on each side that is on the wrong side
//            So we swap them and fix both the violations
            if(start<= end){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }
//        Recursively sort the arrays
        sort(arr,low,end);
        sort(arr,start,high);
    }
}
