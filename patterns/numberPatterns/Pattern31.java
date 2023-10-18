package basics.patterns.numberPatterns;

import java.util.Scanner;

/*

5	4	3	2	*
5	4	3	*	1
5	4	*	2	1
5	*	3	2	1
*	4	3	2	1

 */

public class Pattern31 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nst=n;
        int value;
        //rows
        int row=1;
        while (row<=n){
            value=n;
            //star
            for(int cst=1;cst<=nst;cst++){

                if(value==row){
                    System.out.print("*\t");
                }else{
                    System.out.print(value + "\t");
                }
                value--;
            }

            //pre
            System.out.println();
            row++;

        }
    }
}
