// JAVA program to print "a Diamond Pattern"
public class a_diamond_pattern
{
    public static void main(String[] args)
    {
        int i, j, k, m;
        m=5; // number of rows in the upper half of the diamond

        // for upper half of the diamond
        for(i = 0; i < 5; i++)
        {
            for(j = 1; j <= m; j++)
            {
                // printing spaces
                System.out.print(" ");
            }

            for(k = 0; k <= i; k++ )
            {
                // printing star
                System.out.print("a ");
            }
            System.out.println();
            m--;
        }

        // for lower half of the diamond
        m=2;
        for(i = 4; i >= 1; i--)
        {
            for(j = 1; j <= m; j++)
            {
                // printing spaces
                System.out.print(" ");
            }

            for(k = 1; k <= i; k++)
            {
                // printing star
                System.out.print("a ");
            }
            System.out.println();
            m++;
        }
    }
}