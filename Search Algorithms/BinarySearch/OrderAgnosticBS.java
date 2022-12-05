package BinarySearch;

import java.util.Scanner;

public class OrderAgnosticBS {
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
//    Function to check if array is Order-Agnostic and perform binary search
    public static int Binarysearch(int[] arr,int target){
        int start=0;
        int end=arr.length-1;
//        To check if the array is ascending or descending
       boolean ascending;
        ascending= arr[start] < arr[end];
//       Another way to check for boolean: boolean ascending= arr[start]<arr[end];

       while(start<=end){
//           find middle element
           int mid = start + (end-start)/2;
//           Since this is common for both scenarios;
           if(arr[mid]==target){
               return mid;
           }
//           Binary search for if array is ascending
           if(ascending){
               if(arr[mid]>target){
                   end=mid-1;
               }else{
                   if(arr[mid]<target){
                       start=mid+1;
                   }
               }
           }
//           If the array is descending
           else{
               if(arr[mid]>target){
                   start=mid+1;
               }else{
                   if(arr[mid]<target){
                       end=mid-1;
                   }
               }
           }
       }
//       If answer not found
       return -1;

    }
}
