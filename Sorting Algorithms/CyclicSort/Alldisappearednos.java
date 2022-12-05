package CyclicSort;

// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
// Asked in Google

import java.util.ArrayList;
import java.util.List;

public class Alldisappearednos {
    public static void main(String[] args) {
        int[] nums={4,3,2,7,8,2,3,1};
        System.out.println(findmissing(nums));
    }
    public static List<Integer> findmissing(int[] nums){
        int i =0;
        while (i < nums.length) {
            int correct = nums[i] -1;
            if(nums[i] != nums[correct]){
                swap(nums,i,correct);
            }else{
                i++;
            }
        }
//        The loop is violated and hence the array is sorted
        List<Integer> list =new ArrayList<>();
        for(int index=0;index<nums.length;index++){
            if(nums[index] != index+1){
                list.add(index+1);
            }
        }
        return list;
    }
    public static void swap(int[] nums, int start, int end){
        int temp= nums[start];
        nums[start]= nums[end];
        nums[end]=temp;
    }
}
