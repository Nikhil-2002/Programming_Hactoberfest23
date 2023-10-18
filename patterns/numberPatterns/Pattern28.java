package basics.patterns.numberPatterns;

import java.util.Scanner;

/*
				1
			2	3	2
		3	4	5	4	3
	4	5	6	7	6	5	4
5	6	7	8	9	8	7	6	5

 */

public class Pattern28 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nst=1;
        int nsp=n-1;
        int value;

        //row
        int row=1;
        while(row<=n){
            //space
            value=row;
            for(int csp=1;csp<=nsp;csp++){
                System.out.print("\t");
            }

            //star
            for(int cst=1;cst<=nst;cst++){
                //print the no.
                System.out.print(value + "\t");
                if(cst<=nst/2){
                    value++;
                }else{
                    value--;
                }
            }

            //preparation
            System.out.println();
            nst+=2;
            nsp--;

            row++;
        }
    }
}
