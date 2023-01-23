# pipe

Kavramsal olarak Pipe, iki süreç arasındaki bir bağlantıdır, 
öyle ki bir sürecin standart çıktısı diğer sürecin standart girdisi olur. 
UNIX İşletim Sisteminde, Pipelar ilgili süreçler arasındaki iletişim 
(işlemler arası iletişim) için kullanışlıdır.


Kanal, oluşturma işlemi ve onun tüm alt işlemleri tarafından okuma ve 
yazma için kullanılabilir. Bir proses bu "sanal dosyaya" veya 
kanala yazabilir ve diğer ilgili proses ondan okuyabilir

fd[0], için fd(dosya tanıtıcı) olacaktır. borunun ucunu oku.
fd[1], borunun yazma ucu için fd olacaktır.

Borular FIFO (İlk Giren İlk Çıkar) gibi davranır, Boru bir kuyruk veri yapısı gibi davranır. 
Okuma ve yazma boyutunun burada eşleşmesi gerekmez. 
Bir seferde 512 bayt yazabiliriz ama bir boruda bir seferde sadece 1 bayt okuyabiliriz.

Herhangi bir işlemde çatal kullandığımızda, dosya tanımlayıcıları alt süreçte ve ayrıca üst süreçte açık kalır. 
Pipe oluşturduktan sonra fork çağırırsak ebeveyn ve çocuk pipe üzerinden haberleşebilir.

![pipe](https://media.geeksforgeeks.org/wp-content/uploads/sharing-pipe.jpg)
