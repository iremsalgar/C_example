#include<stdio.h>
//register değişkeni ile & operatörü kullanılamaz
//değişken kayıttır dendiğinde bellek yerine kayıtta saklama olabilir
//bir kaydın adresine erişim geçersizdir 
int main()
{
    register int i = 10;
    int  *a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}
