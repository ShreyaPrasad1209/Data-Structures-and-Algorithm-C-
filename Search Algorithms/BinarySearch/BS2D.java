package BinarySearch;

import java.util.Arrays;
import java.util.Scanner;

//The given 2D array is sorted row wise and Column wise.
public class BS2D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] matrix={
                {10,20,30,40},
                {11,21,31,41},
                {14,22,33,44}
        };
        System.out.println("Enter a target element to be found:");
        int target=in.nextInt();
        int[] ans=binarysearch(matrix,target);
        System.out.println(Arrays.toString(ans));
    }
//    We do not need to find Mid element for this, just compare and eliminate the search space
    public static int[] binarysearch(int[][] arr,int target){
        int row=0;
        int col=arr.length-1;
        while(row<arr.length && col>=0){
            if(arr[row][col]==target){
                return new int[] {row,col};
            }
//            Eliminate a Column or row based on the comparison
            if(arr[row][col]>target){
                col--;
            }else{
                row++;
            }
        }
        return new int[] {-1,-1};
    }
}

