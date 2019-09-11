// https://www.hackerrank.com/challenges/a-very-big-sum/problem
// By Jason Breijak

import java.util.*;
public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long sum=0;
        int arr[] = new int[n];
        for(int i=0; i < n; i++){
            arr[i] = input.nextInt();
        }
        for(int m:arr){
            sum+=m;
        }
        System.out.println(sum);
    }
}
