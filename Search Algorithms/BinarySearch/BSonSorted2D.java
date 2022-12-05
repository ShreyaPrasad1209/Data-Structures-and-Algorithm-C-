package BinarySearch;

import java.util.Arrays;
import java.util.Scanner;

public class BSonSorted2D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] matrix={
                {12,14,16,18},
                {21,23,25,27,28},
                {31,33,36,39}
        };
        System.out.println("Enter a element to be searched for:");
        int target= in.nextInt();
        int[] ans=ans(matrix,target);
        System.out.println(Arrays.toString(ans));
    }
//    Function to perform basic Binary Seacrh in given range
    public static int[] binarysearch(int[][] arr,int row,int cstart,int cend,int target){
        while(cstart<=cend){
            int mid = cstart+(cend-cstart)/2;
            if(arr[row][mid]==target){
                return new int[] {row,mid};
            }
            if(arr[row][mid]>target){
                cend=mid-1;
            }else{
                cstart=mid+1;
            }
        }
        return new int[] {-1,-1};
    }
//    Function to minimise search space by finding mid element and finding the target element
    public static int[] ans(int[][] arr,int target){
        int row=arr.length;
        int col=arr[0].length;
        if(row==1){
            return binarysearch(arr,0,0,col-1,target);
        }
        if(col==0){
            return new int[] {-1,-1};
        }
//        you can do the below with columns too
        int rstart=0;
        int rend=row-1;
        int cmid=col/2; //  Middle element of all columns.
//        Run a loop such that only 2 rows remain after this loop is violated:
        while(rstart<(rend-1)){  // (rend-1) because at end it will be: rend=rstart which means only 2 rows will be remaining
            int mid=rstart+(rend-rstart)/2;
            if(arr[mid][cmid]==target){
                return new int[] {mid,cmid};
            }
            if(arr[mid][cmid]<target){
                rstart=mid;
            }else{
                rend=mid;
            }
        }
//       Above while loop is violated which means only two rows must be remaining hence, Search for element in them
        if (arr[rstart][cmid] == target) {
            return new int[]{rstart, cmid};
        }
        // After above loop violated rstart+1 =rend
        if (arr[rstart + 1][cmid] == target) {
            return new int[]{rstart + 1, cmid};
        }
//        Now, search in 1st Half
      if (target <= arr[rstart][cmid - 1]) {
            return binarysearch(arr, rstart, 0, cmid-1, target);
        }
////        Now, search in 2nd Half
        if (target >= arr[rstart][cmid + 1] && target <= arr[rstart][col - 1]) {
            return binarysearch(arr, rstart, cmid + 1, col - 1, target);
        }
////        Now, search in 3rd Half
        if (target <= arr[rstart + 1][cmid - 1]) {
            return binarysearch(arr, rstart + 1, 0, cmid-1, target);
        }
////        Now, search in 4th Half
        if(target<=arr[rstart+1][cmid+1]){
            return binarysearch(arr,rstart+1,cmid+1,col-1,target);
        } // Search in 4th half:
         else {
            return binarysearch(arr, rstart + 1, cmid + 1, col - 1, target);
        }
    }
}
