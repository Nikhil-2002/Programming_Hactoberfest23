package basics.patterns.numberPatterns;

import java.util.Scanner;

/*

1
2	*	2
3	*	3	*	3
4	*	4	*	4	*	4
5	*	5	*	5	*	5	*	5
4	*	4	*	4	*	4
3	*	3	*	3
2	*	2
1

 */

public class Pattern32 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); //5
        int nr= 2*n-1;
        int nst=1;
      int value=1;
        //rows
        int row=1;
        while(row<=nr){

            //star
            for(int cst=1;cst<=nst;cst++){
                if(cst%2==0){
                    System.out.print("*\t");
                }else{
                    System.out.print(value+ "\t");
                }

            }

            //pre
            System.out.println();
            if(row<=nr/2){
                nst+=2;
                value++;
            }else{
                nst-=2;
                value--;
            }
            row++;

        }
    }
}
