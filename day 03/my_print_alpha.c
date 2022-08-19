#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_alpha ( void )
{
    int i = 97;
    for (; i <= 122; i++) {
        my_putchar(i);        
    }
    return 0;
}

int my_print_revalpha ( void )
{
    int i = 122;
    for (; i >= 97; i--) {
        my_putchar(i);       
    }
    return 0;
}

int my_print_digits ( void )
{
    for (int i = 48; i <= 57; i++) {
        my_putchar(i);  
    }
    return 0;
}

int my_isneg (int n )
{
    if (n < 0) my_putchar('N');
    else my_putchar('P');
    return 0;
}

void disp_my_comb (int i, int j, int k)
{
    my_putchar(i + 48);
    my_putchar(j + 48);
    my_putchar(k + 48);
    my_putchar(',');
}

int my_print_comb ( void )
{
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j < 9; j++) {
            for (int k = 2; k < 9; k++) {

                if (i != j && i != k && j != k) {
                    disp_my_comb(i, j, k);
                }
                if (i == j) {
                    j++;
                    if (j != k) {
                        disp_my_comb(i, j, k);
                    }
                    if ( j == k ) {
                        k++;
                        disp_my_comb(i, j, k);
                    }
                }
                if (i == k) {
                    k++;
                    if (j == k) {
                        k++;
                        disp_my_comb(i, j, k);
                    }
                    if ()
                    {
                        /* code */
                    }
                    
                }
                

            }
            
        }
        
    }
    
}

int main(void)
{
    int n = 0;
    int nn = -1;
    int nnn = 12;
    my_print_alpha();
    my_putchar('\n');
    my_print_revalpha();
    my_putchar('\n');
    my_print_digits();
    my_putchar('\n');
    my_isneg(n);
    my_putchar(',');
    my_isneg(nn);
    my_putchar(',');
    my_isneg(nnn);
    my_putchar('\n');
    my_print_comb();


    
    return 0;
}