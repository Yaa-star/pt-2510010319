pesan error yang muncul

hello.cpp:3:14: error: 'Halo' was not declared in this scope
    3 | std::cout << Halo dari C++\n;

yah bisa di bilang kalo hal tesebut bukan lah tipe data ataupun variabel karena itu adalah hal yang akan kita keluarkan atau output yang akans egera keluar setelah kita menjalankan program tersebut karena itu kita perlu menambahkan tanda kutip agar sistem tau yang mana akan di keluarkan/di kelaskan

Untuk error yang satunya saat menghapus #incude <iosteam>

hello.cpp:3:6: error: 'cout' is not a member of 'std'
    3 | std::cout << "Halo dari C++\n";
      |      ^~~~
hello.cpp:1:1: note: 'std::cout' is defined in header '<iostream>'; this is probably fixable by adding '#include <iostream>'
  +++ |+#include <iostream>
    1 | 

    kalau menurut saya hal tersebut di karenakan hal tersebut berfungsi untuk menjadi sebagai header sehingga semua yang ada di bawahnya bisa berjalan sesuai dengan ketentuan di pemrograman bahasa c++, karena bahasa pemrograman c++ bisa menjadi sebuah sistem awal untuk menjalankan serentak seperti program yang di bangun dari awal.

Tanpa menggunakan -wall -Wextra maka akan terjadinya mungkin seperti ini??

    Saya mencoba membangun program tanpa menggunakan opsi -Wall -Wextra dengan perintah g++ rerata_awal.cpp -o rerata_awal. Program tetap dapat dibangun, tetapi compiler tidak memberikan peringatan tambahan yang biasanya muncul ketika opsi warning diaktifkan. Hal ini dapat merugikan karena beberapa masalah pada kode bisa tidak diketahui sejak awal. Namun, pada kode saya yang sekarang semua variabel digunakan, sehingga tidak ada warning yang terlihat meskipun program dijalankan tanpa -Wall -Wextra.