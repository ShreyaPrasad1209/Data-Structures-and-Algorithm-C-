package CyclicSort;

import java.util.Arrays;

public class CyclicSort {
    public static void main(String[] args) {
        int[] nums={3,5,2,1,4};
        System.out.println(Arrays.toString(sorting(nums)));
    }
//    Function to sort the array
    public static int[] sorting(int[] nums){
        int i=0; //Starting index
//        A while loop which breaks when i is == or greater than length of the array
        while(i<nums.length){
//            For an array ranging from 0 to N, [0,N], the value of index=value
//            For an array ranging from 1 to N,[1,N], the value of index=value-1
            int correct = nums[i]-1; //Correct Index
            if(nums[i]!= nums[correct]){
                swap(nums,i,correct);
            }else{
                i++;
            }
        }
        return nums;
    }
//    Function to swap the element to its correct position
    public static void swap(int[] nums,int first,int second){
        int temp=nums[first];
        nums[first]=nums[second];
        nums[second]=temp;
    }
}
