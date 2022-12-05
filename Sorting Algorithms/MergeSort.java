package Arrays.Sorting;

import java.util.Arrays;

public class MergeSort {
    public static void main(String[] args) {
        int[] arr= {8,4,2,1,3,7};
        int[] ans = mergesort(arr);
        System.out.println(Arrays.toString(ans));
    }
//    Function to divide and conquer the array for sorting
//    This approach uses the Copy of the Arrays Method
    public static int[] mergesort(int[] arr){
//        Base condition
//        Returns the single element array
        if( arr.length == 1){
            return arr;
        }
//      Used to divide the array
        int mid = arr.length/2;
//        Dividing the arrays by using recursion
        int[] left = mergesort(Arrays.copyOfRange(arr,0,mid));
        int[] right = mergesort(Arrays.copyOfRange(arr,mid,arr.length));
//        Function used to return the sorted sub arrays merged into one
        return merge(left,right);
    }
//    Function to merge the given sorted SubArrays and return the Whole sorted Array
    public static int[] merge(int[] left, int[] right){
//        To store the new sorted Array
        int[] sorted = new int[left.length + right.length];
//        Pointer for First Sub Array
        int i = 0;
//        Pointer for Second Sub Array
        int j= 0;
//        Pointer for New Array
        int k = 0;
//      Condition to make sure the arrays are compared
        while(i < left.length && j < right.length){
//            Comparing the two elements to find which is smaller
            if(left[i] < right[j]){
//                smaller element is inserted into the array
                sorted[k] = left[i];
//                Increment the pointer or element as they are inserted
                i++;
            } else{
                sorted[k] = right[j];
                j++;
            }
//            irrespective of which element is inserted, New array has an element added, so
            k++;
        }

//        If any array has left out elements, they are directly added to the sorted array
//        Only one of the below two conditions will execute
        while(i < left.length){
            sorted[k] = left[i];
            i++;
            k++;
        }
        while(j < right.length){
            sorted[k] = right[j];
            j++;
            k++;
        }
//        returning the sorted array
        return sorted;
    }
}
