package BinarySearch;

import java.util.Scanner;

// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

public class SmallestLetter {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char[] chars=new  char[6];
        System.out.println("Enter elements of array:");
        for(int i=0;i<chars.length;i++){
            chars[i]=in.next().trim().charAt(0);
        }
        System.out.println("Enter target element:");
        char target=in.next().trim().charAt(0);
        char ans=chars(chars,target);
        System.out.println(ans);
    }
    public static char chars(char[] chars,char target){
        int start=0;
        int end=chars.length-1;
//        No need to check if the array is empty
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target>chars[mid]){
                start=mid+1;

            }else{
                if(target<chars[mid]){
                    end=mid-1;
                }
            }
        }
//        modulus with chars.length cz the array wraps around!
        return chars[start % chars.length];
    }
}
