#include <unistd.h>
void ft_print_comb(void)
{
    int first, second, third;
    first = 0;
    while (first <= 7) {
        second = first +1;
        while (second <= 8) {
            third = second + 1;
            while (third <= 9) {
                char digit_1 = '0' + first;
                char digit_2 = 48 + second;
                char digit_3 = '0' + third;
                write(1, &digit_1, 1);
                write(1, &digit_2, 1);
                write(1, &digit_3, 1);
                write(1, " ,", 2); 
				third++;
			}
            second++;
        }
        first++;
    }
}
int main(void)
{
    ft_print_comb();
    return 0;
}
