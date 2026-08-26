// JAVA program to display this special pattern

public class special_pattern
{
    public static void main(String args[])
    {
        int i, j, k, p, d; p= 5; d= 1;
        System.out.println("The special pattern is: ");
        for(i=1; i<=5; i++)
        {
            for(j=1; j<=p; j++)
            {
                System.out.print(j);
            }
            for(k=1; k<=d; k++)
            {
                System.out.print(" ");
            }
            for(k=p; k>=1; k--)
            {
                System.out.print(k);
            }
            System.out.println();
            p--; d+=2;
        }
    }
}