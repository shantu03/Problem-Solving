import java.util.Scanner;
public class Solution2
{



    public static void main(String args[] ) throws Exception {
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t-->0)
    {
        int n=sc.nextInt();
        int k=sc.nextInt();

      String array=sc.next();
      int count=Integer.parseInt(array,2);
      int cycle=0;
      for(int i=0;i<n;i++)
      {
        String temp="";
        for(int j=1;j<n;j++)
        {
          temp+=array.charAt(j);
          if(j==n-1)
          {
            temp+=array.charAt(0);
          }
        }
        int max=Integer.parseInt(temp,2);
        array=temp;
        if(max>count)
        {
          count=max;
          cycle=i+1;
        }
      }    
      System.out.println(cycle*k+1);
      
    }
    
}

}