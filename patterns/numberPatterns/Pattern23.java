package basics.patterns.numberPatterns;

import java.util.Scanner;

/*

    1
   111
  11111
 1111111
111111111

 */

public class Pattern23 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nsp=n-1;
        int nst=1;
        int value =1;

        //rows
        int row=1;
        while(row<=n){

            //space
            for(int csp= 1 ;csp<=nsp;csp++){
                System.out.print(" ");
            }
            //star

            for(int cst=1;cst<=nst;cst++){
                System.out.print(value);
            }

            //pre
            System.out.println();
            nsp--;
            nst+=2;

            row++;
        }
    }
}
