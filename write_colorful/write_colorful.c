#include<stdio.h>
#include<stdlib.h>

//in windows
int main()
{
	printf("renkli yazı");
	system("COLOR F");
	return(0);
}

/*
 * 0 = Black   8 = Gray
 * 1 = Blue    9 = Light Blue
 * 2 = Green   A = Light Green
 * 3 = Aqua    B = Light Aqua
 * 4 = Red     C = Light Red
 * 5 = Purple  D = Light Purple
 * 6 = Yellow  E = Light Yellow
 * 7 = White   F = Bright White
*/

//in macos
int main()
{
	printf("\x1b[32m green text on regular background \x1b[0m  \n");
	printf("\x1b[32;40m green text on black background \x1b[0m  \n");
	printf("\x1b[42m regular text on green background \x1b[0m  \n");
	return(0);
}
/*
 * +---------+------------+------------+
 * |  color  | foreground | background |
 * |         |    code    |    code    |
 * +---------+------------+------------+
 * | black   |     30     |     40     |
 * | red     |     31     |     41     |
 * | green   |     32     |     42     |
 * | yellow  |     33     |     43     |
 * | blue    |     34     |     44     |
 * | magenta |     35     |     45     |
 * | cyan    |     36     |     46     |
 * | white   |     37     |     47     |
 * +---------+------------+------------+
/*
 * Yalnızca ön plan rengini ayarlamak için:
 *
 * "\x1b[30m"
 * Yalnızca arka plan rengini ayarlamak için:
 * 
 * "\x1b[40m"
 * Ön plan ve arka plan rengini ayarlamak için:
 * 
 * "\x1b[30;40m"
 * Tüm renk özelliklerini normale döndürmek için:
 *
 * "\x1b[0m"
*/
