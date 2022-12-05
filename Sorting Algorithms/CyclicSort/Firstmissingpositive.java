package CyclicSort;
// https://leetcode.com/problems/first-missing-positive/
//Asked in Amazon interview
public class Firstmissingpositive {
    public static void main(String[] args) {
        int[] arr={3,4,-1,1};
        System.out.println(missingpositive(arr));
    }
    public static int missingpositive(int[] arr){
        int i =0;
        while(i<arr.length){
//            Since the range is not given, we want positive so we are taking from 1 to N
            int correct = arr[i]-1;
//            We add a question specific condition to ignore the -ve nos.
            if(arr[i]>0 && arr[i]<= arr.length && arr[i] != arr[correct]){
                swap(arr,i,correct);
            }else{
                i++;
            }
        }
//        After the loop is violated the array is sorted
        for(int index=0;index<arr.length;index++){
            if(arr[index] != index+1){
                return index+1;
            }
        }
        return arr.length+1;
    }
//    Function to swap the index to its right position
    public static void swap(int[] arr,int first,int second){
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
}
