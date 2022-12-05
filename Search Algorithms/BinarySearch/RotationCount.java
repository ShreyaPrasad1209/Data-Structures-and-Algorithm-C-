package BinarySearch;

import java.util.Scanner;

public class RotationCount {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr=new int[7];
        System.out.println("Enter elements of Array:");
        for(int i=0;i<arr.length-1;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(count(arr));

    }
    public static int count(int[] arr){
        int pivot=findpivot(arr);
        return pivot+1;
    }
    public static int findpivot(int[] arr){
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid =start+(end-start)/2;
            if(mid<end && arr[mid]>arr[mid+1]){
                return mid;
            }
            if(mid>start && arr[mid]<arr[mid-1]){
                return mid-1;
            }
            if(arr[start]<=arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return -1;
    }
}
