# Fork

Fork sistem çağrısı, fork() çağrısını (ana süreç) yapan süreçle eşzamanlı olarak çalışan, alt süreç adı verilen yeni bir süreç oluşturmak için kullanılır. Yeni bir alt süreç oluşturulduktan sonra, her iki süreç de fork() sistem çağrısını izleyen bir sonraki talimatı yürütür. Bir alt süreç, ana süreçte kullanılan aynı bilgisayarı (program sayacı), aynı CPU kayıtlarını, aynı açık dosyaları kullanır.

Hiçbir parametre almaz ve bir tamsayı değeri döndürür. Aşağıda fork() tarafından döndürülen farklı değerler bulunmaktadır. Negatif Değer: Alt sürecin oluşturulması başarısız oldu. Sıfır: Yeni oluşturulan alt sürece geri döndü. Pozitif değer: Ebeveyne veya arayana iade edilir. Değer, yeni oluşturulan alt sürecin işlem kimliğini içerir.

Processes = 2^n 
