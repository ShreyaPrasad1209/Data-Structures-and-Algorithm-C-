package BinarySearch;


public class InfiniteArrayBS {
    public static void main(String[] args) {
        int[] arr = {3, 5, 7, 9, 10, 90,
                100, 130, 140, 160, 170};
        int target = 7;
        System.out.println(findrangeandsearch(arr, target));
    }
//    To find the range of array without using teh command arr.length
    public static int findrangeandsearch(int[] arr,int target){
        int start=0;
        int end=1;
        if(target>arr[end]){
            int temp=end+1;
            end=end+(end-start+1)*2;
            start=temp;
        }
        return search(arr,target,start,end);
    }
//    general Binary function
    public static int search(int[] arr, int target, int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>target){
                end=mid-1;
            }else if(arr[mid]<target){
                start=mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
}
