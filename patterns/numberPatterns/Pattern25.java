package basics.patterns.numberPatterns;

import java.util.Scanner;

/*
    			1
			2	3	4
		5	6	7	8	9
	10	11	12	13	14	15	16
17	18	19	20	21	22	23	24	25

 */

public class Pattern25 {
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
                System.out.print("\t");
            }
            //star

            for(int cst=1;cst<=nst;cst++){
                //numbers
                System.out.print(value + "\t");
                value++;
            }

            //pre
            System.out.println();
            nsp--;
            nst+=2;
            row++;
        }
    }
}
