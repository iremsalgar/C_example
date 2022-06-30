#include <stdio.h>

void show_mem(char *start, int n)
{
    int i;
	i = 0;
    while (i < n)
	{
         printf(" %.2x", start[i]);
		 i++;
	}
	printf("\n");
} 

int main()
{
   int i = 0x09;
   show_mem((char *)&i, sizeof(i));
}

/*
 *	"0x%2x" içinde 2, "alan genişliğini" tanımlar: 
 *	değerin onaltılı gösterimi 2 basamaktan daha az ise, 2 alan genişliği ile bitmesi için önüne boşluk eklenir.
 *	"0x%.2x" de 2 kesinliği tanımlar: sonuçta en az 2 onaltılık basamak olacaktır, 
 *	değerin temsili daha az basamak içeriyorsa, önüne 0'lar eklenir
*/
/*
 * Küçük ve büyük endian, çok baytlı veri türlerini (int, float, vb.) depolamanın iki yoludur. 
 * Küçük endian makinelerinde, önce çok baytlı veri türünün ikili gösteriminin son baytı saklanır. 
 * Öte yandan, büyük endian makinelerinde, önce çok baytlı veri türünün ikili gösteriminin ilk baytı depolanır.
 * Tamsayı 4 bayt olarak depolandığını varsayalım 
 * (C++ 3.0 gibi DOS tabanlı derleyiciler kullananlar için tamsayı 2 bayttır), 
 * 0x01234567 değerine sahip bir x değişkeni aşağıdaki gibi depolanacaktır.
 * big = 01 23 45 67
 * little = 67 45 23 01
*/
