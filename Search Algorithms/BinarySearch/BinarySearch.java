package BinarySearch;

import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter elements:");
        int[] arr=new int[6];
        for(int i =0;i<arr.length;i++){
            arr[i]=in.nextInt();

        }
        System.out.println("Enter the target element:");
        int target=in.nextInt();
        System.out.println(Binarysearch(arr,target));

    }
    public static int Binarysearch(int[] arr,int target){
        if(arr.length==0){
            return -1;
        }
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>target){
                end=mid-1;
            }else{
                if(arr[mid]<target){
                    start=mid+1;
                }else{
                    return mid;
                }
            }
        }
        return -1;
    }
}
