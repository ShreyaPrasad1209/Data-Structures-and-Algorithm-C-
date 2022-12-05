package BinarySearch;

import java.util.Scanner;
//Question: Search for an element in a Rotated Array with Duplicate elements
public class RotatedBSwDuplicates {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr={2,2,9,2};
        System.out.println("Enter element to be searched:");
        int target=in.nextInt();
//        System.out.println(findpivot(arr));
        System.out.println(ans(arr,target));

    }
    public static int ans(int[] arr,int target){
        int peak=findpivot(arr);
        if(peak==-1){
            return search(arr,target,0,arr.length-1);
        }
        if(peak!=-1){
            return search(arr,target,0,peak);
        }
        return search(arr,target,peak+1,arr.length-1);
    }
//    Function to perform binary search
    public static int search(int[] arr,int target,int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
            if(arr[mid]==target){
                return mid;
            }
        }
        return -1;
    }
//    Function to find the element in a Rotated Sorted Array with Duplicates
    public static int findpivot(int[] arr){
        int start=0;
        int end =arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid]<arr[mid-1]){
                return mid-1;

            }
//            We can simply skip the duplicates to find pivot but before lets check if they contain the pivot
            if(arr[start]==arr[mid] && arr[mid]==arr[end]){
//                Check whether start is pivot
                if(arr[start]>arr[start+1]){
                    return start;
                }
//                If not increment the start(SKip)
                start++;
//                To check whether the end element is pivot
                if(arr[end]<arr[end-1]){
                    return end-1;
                }
//                IF not Decrement the end element(Skip)
                end--;
            }
//            The right side of array is sorted
            else if(arr[start]<arr[mid] || arr[start]==arr[mid] && arr[mid]>arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
}
