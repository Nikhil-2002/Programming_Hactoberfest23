package basics.patterns.numberPatterns;

import java.util.Scanner;

public class Pattern33 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); //10
        int nst=1;
        int nsp=n-1;
        int value=n;
        //rows
        int row=1;
        while(row<=n){
            //space
            for(int csp=1;csp<=nsp;csp++){
                System.out.print("\t");
            }

            //star
            for(int cst=1;cst<=nst;cst++){
                //as we are prining the count of star
                if(value==n)
                {
                    System.out.print(0 + "\t");
                }else{
                    System.out.print(value + "\t");
                }
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
