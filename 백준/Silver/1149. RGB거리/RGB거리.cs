using System;

class Program
{
    static void Main() {
       
       int n=int.Parse(Console.ReadLine());
       int[,] arr=new int[n+1,3];
       int[,] dp=new int[n+1,3];
       for(int i=0; i<n; i++){
           string[] str=Console.ReadLine().Split();
           for(int j=0; j<3; j++){
               int temp=int.Parse(str[j]);
               arr[i+1,j]=temp;
           }
       }
       int ans=0;
       for(int i=1; i<=n; i++){
           dp[i,0]=Math.Min(dp[i-1,1],dp[i-1,2])+arr[i,0];
           dp[i,1]=Math.Min(dp[i-1,0],dp[i-1,2])+arr[i,1];
           dp[i,2]=Math.Min(dp[i-1,0],dp[i-1,1])+arr[i,2];
           
          ans=Math.Min(Math.Min(dp[i,0],dp[i,1]),dp[i,2]);
       }
       Console.Write(ans);
    }
}