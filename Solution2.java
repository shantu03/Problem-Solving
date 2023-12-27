//PARTIALLY ACCEPTED SOLUTION --( PROBLEM IS TIME EXCEED) 

//https://www.hackerearth.com/practice/codemonk/ --> CYCLIC SHIFT PROBLEM 
// DIFFICULTY- MEDIUM

// USING BIGINTEGER CLASS TO COMPARE ADDITIONAL TEST CASES (WHICH CONTAIN BIG NUMBERS)
//USING COMPARETO() METHOD

import java.util.Scanner;
import java.math.BigInteger;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
          long n=sc.nextLong();
          long k=sc.nextLong();
          sc.nextLine();
          String arr=sc.nextLine();

          String max=arr;
          int cycle=0;
          int p=-1;

          for(int i=0;i<n;i++)
          {
              arr=arr.substring(1)+arr.charAt(0);
            BigInteger maxx=new BigInteger(max,2);
            BigInteger arrr=new BigInteger(arr,2);
            if( maxx.compareTo(arrr)==-1){ max=arr; p=i;
          //  System.out.printf("Case (%d) if -> cycle =%d p=%d max=%s arr=%s i= %d\n",t,cycle,p,max,arr,i);
          }
            else if(maxx.compareTo(arrr)==0){ n=i-p; 
            
           // System.out.printf("Case (%d) else -> cycle =%d p=%d max=%s arr=%s i= %d\n",t,cycle,p,max,arr,i);
            break;}

          }

            System.out.println(p+(k-1)*n+1);

        }

    }
}
