package basics.patterns.numberPatterns;

import java.util.Scanner;

/*
				1
			2	0	2
		3	0	0	0	3
	4	0	0	0	0	0	4
5	0	0	0	0	0	0	0	5

 */

public class Pattern29 {
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
               if(cst==1 || cst==nst){
                   System.out.print(value + "\t");
               }else{
                   System.out.print(0 + "\t");
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
