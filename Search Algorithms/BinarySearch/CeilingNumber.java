package BinarySearch;
//Ceiling Number= The Smallest element in array greater or equal to target
import java.util.Scanner;

public class CeilingNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr= new int[6];
        System.out.println("Enter the elements of the array:");
        for(int i = 0;i<arr.length;i++){
            arr[i]= in.nextInt();
        }
        System.out.println("Enter the target element:");
        int target=in.nextInt();
        int ans=ceiling(arr,target);
        System.out.println(ans);
    }
    public static int ceiling(int[] arr,int target){
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
//        Since we need the ceiling number, the new start after breaking the while condition is the ceiling number
        return start;
    }
}
