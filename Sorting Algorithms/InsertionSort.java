import java.util.Arrays;
import java.util.Scanner;

public class InsertionSort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] nums=new int[6];
        System.out.println("Enter elements to be searched:");
        for(int i =0;i<nums.length;i++){
            nums[i]=in.nextInt();
        }
        System.out.println(Arrays.toString(insertionsort(nums)));
    }
    public static int[] insertionsort(int[] nums){
//       For each loop to check the entire array:
        for(int i =0;i<nums.length-1;i++){
//            For each pass in the loop the 'j' is 'i+1' and is subtracting i.e J--
            for(int j=i+1;j>0;j--) { //j is always greater than zero and j decrement
                if(nums[j]<nums[j-1]){
                    swap(nums,j,j-1);
                }else{
                    break;
                }
            }
        }
        return nums;
    }
    public static void swap(int[] nums,int index1,int index2){
        int temp=nums[index1];
        nums[index1]=nums[index2];
        nums[index2]=temp;
    }
}
