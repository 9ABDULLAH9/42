#include <unistd.h>
void ft_putchar(char c ,int uzunluk)
{
    int i;
    i=1;
    while (i<=uzunluk)
    {
        write(1, &c,1);
        i++;
    }
}
void satir(int x, char sol, char orta, char sag)
{
    ft_putchar(sol,1);
    int uzunluk;
    uzunluk = x-2;
    ft_putchar(orta,uzunluk);
    if ( 1!= x)
    {
            ft_putchar(sag,1);
    }
    ft_putchar(10,1);
}
void rush(int x, int y) {
    if (x >= 1 && y >= 1) {
        satir(x, 'a', 'b', 'c'); // sol / orta * sag 
        int i = 2;
        while (i < y) {
            satir(x, 'b', ' ', 'b'); // sol * orta BOSLUK sag *
            i++;
        }
        if (y > 1) {
            satir(x, 'c', 'b', 'a');//sol \ orta * sag /
        }
    }
}
int main()
{
    rush(4, 3);  // Örnek olarak x genişlik, y yükseklik
    return 0;
}
