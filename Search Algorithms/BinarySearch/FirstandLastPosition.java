package BinarySearch;

import java.util.Arrays;
import java.util.Scanner;

public class FirstandLastPosition {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int[] arr={5,7,7,7,7,8,8,10};
        System.out.println("enter the element to check occurrence:");
        int target=in.nextInt();
        int[] ans=position(arr,target);
        System.out.println(Arrays.toString(ans));
    }
    public static int[] position(int[] nums,int target){
        int[] ans={-1,-1};
//        to check for first occurence
        ans[0]=search(nums,target,true);
        if(ans[0]!=-1){
            ans[1]=search(nums,target,false);
        }
        return ans;
    }
    public static int search(int[] nums,int target,boolean Indexcheck){
        int ans=-1;
        int start=0;
        int end=nums.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>target){
                end=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
//                 potential ans found;
                ans=mid;
//                When this condition is false, it will check for last occurrence
                if(Indexcheck){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }
        }
        return ans;
    }
}
