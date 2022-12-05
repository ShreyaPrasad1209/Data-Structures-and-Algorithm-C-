package CyclicSort;
//  https://leetcode.com/problems/missing-number/
//Asked in Amazon interview
public class MissingNumber {
    public static void main(String[] args) {
        int[] nums={3,0,1};
        System.out.println(missingnumber(nums));

    }
//    Function to sort the array and find the missing number
    public static int missingnumber(int[] nums){
        int i=0;
        while(i<nums.length){
//            we are taking the range 0 to N nos array
            int correct= nums[i];
            if(nums[i]<nums.length && nums[i]!=nums[correct]){
                swap(nums,i,correct);
            }else{
                i++;
            }
        }
//        The Array is sorted after the loop is violated
//        NOw, we just need to find the missing number and return it
//        We do that by simply performing a linear check, checking all
        for(int index=0; index<nums.length ;index++){
            if(nums[index]!= index){
                return index;
            }
        }
        return nums.length; // The Nth element is the answer
    }
    public static void swap(int[] nums,int start,int end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
    }
}
