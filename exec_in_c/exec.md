# Exec()

exec işlev ailesi, mevcut çalışan işlemi yeni bir işlemle değiştirir. Başka bir C programını kullanarak bir C programını çalıştırmak için kullanılabilir. unistd.h başlık dosyası altında gelir.

execv : Bu, sözdizimi açısından da execvp() işlevine çok benzer. execv() sözdizimi aşağıda gösterildiği gibidir:
```
int execv(const char *path, char *const argv[]);
```

Path: yürütülmekte olan dosyanın yolunu göstermelidir. 
argv[]: boş sonlandırılmış karakter işaretçileri dizisidir.

k1m22s01:exec_in_c isalgar$ gcc exec.c -o exec
k1m22s01:exec_in_c isalgar$ gcc exec2.c -o exec2
k1m22s01:exec_in_c isalgar$ ./exec2
I am exec.c called by execv() 

çıktı bu şekilde alınır

