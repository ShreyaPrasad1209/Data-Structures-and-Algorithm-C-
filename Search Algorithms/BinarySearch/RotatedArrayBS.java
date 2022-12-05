package BinarySearch;

import java.util.Scanner;

// Q from Leetcode: MEDIUM
// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
public class RotatedArrayBS {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = {11,12,1,2,3,4,6};
        System.out.println("Enter the target element:");
        int target=in.nextInt();
        System.out.println(search(arr,target));
    }
    public static int search(int[] nums, int target) {
        int peak=findpivot(nums);
        if(peak==-1){
            return binarysearch(nums,target,0,nums.length-1);
        }
        if(nums[peak] == target){
            return peak;
        }
        if(target>=nums[0]){
            return binarysearch(nums,target,0,peak-1);
        }
        return binarysearch(nums,target,peak+1,nums.length-1);
    }
    public static int binarysearch(int[] nums,int target, int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return -1;
    }
    public static int findpivot(int[] nums){
        int start=0;
        int end=nums.length-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(mid<end && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(mid>start && nums[mid]<nums[mid-1]){
                return mid-1;
            }
            if(nums[mid]<=nums[start]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return -1;
    }
}
