package CyclicSort;
// https://leetcode.com/problems/find-the-duplicate-number/
//Asked by amazon and Microsoft
public class DuplicateNumber {
    public static void main(String[] args) {
        int[] arr={1,3,4,2,2};
        System.out.println(duplicate(arr));
    }
    public static int duplicate(int[] nums){
        int i=0;
        while(i<nums.length){
            if(nums[i] != i+1){
                int correct = nums[i]-1;
                if(nums[i] != nums[correct]){
                    swap(nums,i,correct);
                }else{
                    return nums[i];
                }
            }else{
                i++;
            }
        }
        return -1;
    }
    public static void swap(int[] nums,int start,int end){
        int temp=nums[start];
        nums[start]= nums[end];
        nums[end]=temp;
    }
}
