import java.util.Scanner;

public class pgm9
{
    static void bubbleSort(int[] A,int n)
    {
        int temp;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(A[j]>A[j+1])
                {
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }
        System.out.print("The sorted array is : ");
        for(int i=0;i<n;i++)
            System.out.print(A[i]+" ");
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.print("Enter n : ");
        n=sc.nextInt();
        int[] A=new int[n];
        System.out.print("Enter the array elements : ");
        for(int i=0;i<n;i++)
            A[i]=sc.nextInt();
        bubbleSort(A,n);
        sc.close();
    }
}