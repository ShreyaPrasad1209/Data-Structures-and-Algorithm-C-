package BinarySearch;

import java.util.Scanner;

//https://leetcode.com/problems/find-in-mountain-array/
public class MountainArrayBS {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int[] arr={1,2,3,4,5,3,1};
        System.out.println("Enter element to be searched:");
        int target=in.nextInt();
        System.out.println(ans(arr,target));
    }
//    Function to return the index of element
    public static int ans(int[] arr,int target){
        int peak=peakindex(arr);
        if(target<peak){
            return search(arr,target,0,peak);
        }else{
            return search(arr,target,peak+1,arr.length-1);
        }
    }
//    Function to find the peak of the array.
    public static int peakindex(int[] arr){
        int start=0;
        int end=arr.length-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
                end=mid;
            }else if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
        }
        return start;
    }
//    Function to perform binary search based on parameters given
    public static int search(int[] arr,int target,int start,int end){
        boolean isasc = arr[start]<arr[end];
        while(start<=end){
            int mid =start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(isasc){
                if(arr[mid]>target){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{
                if(arr[mid]>target){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }

        return -1;
    }
}
