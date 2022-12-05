package Arrays.Sorting;

import java.util.Arrays;

public class MSinPlace {
    public static void main(String[] args) {
        int[] arr= {90,2,5,4,32,1};
        mergesort(arr,0,arr.length);
        System.out.println(Arrays.toString(arr));
    }
//    Function to get array sorted using merge sort in place method
    public static void mergesort(int[] arr,int start,int end){
//        Base condition
        if(end - start ==1 ){
            return;
        }
//        Finding middle element
        int mid = start + (end - start)/2;
//        Dividing the original array
        mergesort(arr,start,mid);
        mergesort(arr,mid,end);

        mergeInPlace(arr,start,mid,end);
    }
    public static void mergeInPlace(int[] arr, int start, int mid, int end){
        int[] sorted = new int[end-start];
        int i = start;
        int j = mid;
        int k = 0;

        while(i < mid && j < end){
            if(arr[i] < arr[j]){
                sorted[k] = arr[i];
                i++;
            } else {
                sorted[k] = arr[j];
                j++;
            }
            k++;
        }

        while( i < mid ){
            sorted[k] = arr[i];
            i++;
            k++;
        }
        while( j < end ){
            sorted[k] = arr[j];
            j++;
            k++;
        }

        for(int l = 0; l < sorted.length; l++){
            arr[start + l] = sorted[l];
        }
    }
}
