package CyclicSort;

import java.util.Arrays;

// https://leetcode.com/problems/set-mismatch/

public class Setmismatch {
    public static void main(String[] args) {
        int[] arr={1,2,2,4};
        System.out.println(Arrays.toString(mismatch(arr)));
    }
    public static int[] mismatch(int[] nums){
        int i=0;
        while(i<nums.length){
            int correct =nums[i]-1;
            if(nums[i] != nums[correct]){
                swap(nums,i,correct);
            }else{
                i++;
            }
        }
//        Loop violated so the array is sorted
//        Condition to find and return the element repeated and missed
        for(int index=0;index<nums.length;index++){
            if(nums[index] != index+1){
                return new int[] {nums[index],index+1};
            }
        }
        return new int[] {-1,-1};
    }
//    Function to swap the numbers
    public static void swap(int[] nums,int start,int end){
        int temp= nums[start];
        nums[start]= nums[end];
        nums[end]=temp;
    }
}
