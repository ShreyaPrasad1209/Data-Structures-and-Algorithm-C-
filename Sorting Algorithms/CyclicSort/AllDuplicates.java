package CyclicSort;
// https://leetcode.com/problems/find-all-duplicates-in-an-array/

import java.util.ArrayList;
import java.util.List;

public class AllDuplicates {
    public static void main(String[] args) {
        int[] nums={4,3,2,7,8,2,3,1};
        System.out.println(duplicates(nums));
    }
    public static List<Integer> duplicates(int[] nums){
        int i =0;
        while(i<nums.length){
            int correct = nums[i]- 1;
            if(nums[i] != nums[correct]){
                swap(nums,i,correct);
            }else{
                i++;
            }
        }
//        Creating a new ArrayList to return all the Duplicate Values
        List<Integer> list= new ArrayList<>();
//        Loop is violated and Array is sorted
        for(int index=0;index<nums.length;index++){
            if(nums[index] != index+1){
                list.add(nums[index]);
            }
        }
        return list;
    }
        public static void swap(int[] nums, int start,int end){
            int temp= nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
        }
}
