package basics.patterns.numberPatterns;

import java.util.Scanner;

/*

				1
			1	2	1
		1	2	3	2	1
	1	2	3	4	3	2	1
1	2	3	4	5	4	3	2	1


 */

public class Pattern27 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nsp=n-1;
        int nst=1;
        int value;
        //rows
        int row=1;
        while(row<=n){
            value=1;
            //space
            for(int csp= 1 ;csp<=nsp;csp++){
                System.out.print("\t");
            }
            //star

            for(int cst=1;cst<=nst;cst++){
                //as we are prining the count of star
                System.out.print(value + "\t");
                if(cst<=nst/2){
                    value++;
                }else{
                    value--;
                }

            }

            //pre
            System.out.println();
            nsp--;
            nst+=2;
            row++;
        }
    }
}
