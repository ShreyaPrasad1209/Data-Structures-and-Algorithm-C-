package BinarySearch;

import java.util.Scanner;
// Question to find Floor Number: A element in array which is the greatest number less than or equal to target
public class FloorNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr= new int[6];
        System.out.println("Enter the elements of the array:");
        for(int i = 0;i<arr.length;i++){
            arr[i]= in.nextInt();
        }
        System.out.println("Enter the target element:");
        int target=in.nextInt();
        int ans=floor(arr,target);
        System.out.println(ans);
    }
    public static int floor(int[] arr,int target){
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }else{
                if (arr[mid]>target){
                    end=mid-1;
                }else{
                    if(arr[mid]<target){
                        start=mid+1;
                    }
                }
            }
        }
//        Since we need the Floor number, the end after breaking the while condition
        return end;
    }
}
