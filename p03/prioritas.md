# Perbandingan Ekspresi C++ dan Python

Saya mengambil tiga ekspresi dari `prioritas.cpp`, yaitu `2 * 3 / 4`, `2 / 4 * 3`, dan `17 % 5 * 2`, kemudian menerjemahkannya ke Python.

| Ekspresi | Hasil C++ | Hasil Python | Perbedaan |
|---|---:|---:|---|
| `2 * 3 / 4` | 1 | 1.5 | Berbeda |
| `2 / 4 * 3` | 0 | 1.5 | Berbeda |
| `17 % 5 * 2` | 4 | 4 | Tidak berbeda |

Perbedaan pada dua ekspresi pertama terjadi karena di C++ kedua operand pembagian berupa bilangan bulat sehingga menggunakan integer division dan bagian pecahannya dibuang. Sementara itu, operator `/` di Python menghasilkan pembagian pecahan. Ekspresi `17 % 5 * 2` menghasilkan nilai yang sama karena operator `%` memberikan sisa pembagian yang sama pada kedua bahasa.