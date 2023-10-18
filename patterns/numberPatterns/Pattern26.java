package basics.patterns.numberPatterns;

import java.util.Scanner;

/*

        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9


 */

public class Pattern26 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nsp=n-1;
        int nst=1;

        //rows
        int row=1;
        while(row<=n){

            //space
            for(int csp= 1 ;csp<=nsp;csp++){
                System.out.print("\t");
            }
            //star

            for(int cst=1;cst<=nst;cst++){
                //as we are prining the count of star
                System.out.print(cst + "\t");

            }

            //pre
            System.out.println();
            nsp--;
            nst+=2;
            row++;
        }
    }
}
