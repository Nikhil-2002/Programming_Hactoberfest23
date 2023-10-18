package basics.patterns.numberPatterns;

import java.util.Scanner;

/*
    1
   222
  33333
 4444444
555555555

 */

public class Pattern24 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nsp=n-1;
        int nst=1;
        int value =1;

        //rows
        int row=1;
        while(row<=n){
            //value=row; as we are printing the value same as no. of rows

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
            value++;
            row++;
        }
    }
}
