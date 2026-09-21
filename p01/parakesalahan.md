

| Berkas | Jenis kesalahan | Pesan yang muncul (salin baris pertamanya) | Cara kamu mengetahuinya |
|---|---|---|---|
| k1_sintaks.cpp | Sintaks,Ada satu tanda titik koma yang hilang. Program ini gagal pada tahap compile, |k1sintaks.cpp:6:1: error: expected ',' or ';' before 'std'  | berkas .exe tidak terbentuk. |
| k2_nama.cpp | Nama yang belum dikenal | k1sintaks.cpp:7:27: error: 'Nilai' was not declared in this scope; did you mean 'nilai'? | di C++ ditolak compiler sebelum program pernah berjalan. |
| k3_runtime.cpp | Runtime,Kode ini lolos compile tanpa error dan tanpa warning, | Jumlah mahasiswa: 0 | tetapi berhenti mendadak saat pengguna memasukkan 0 sebagai jumlah mahasiswa. |
| k4_logika.cpp | Logika,Program berjalan mulus, tidak ada pesan apa pun,tetapi hasilnya salah. | Rata-rata: 81 | Rata-rata 80, 75, dan 90 seharusnya 81.67, bukan 81. |



Menurut saya, kesalahan logika dan sintaks paling berbahaya karena program tetap berjalan tanpa menampilkan pesan error, tetapi hasil yang diberikan salah, dan juga dari awal kodingan yang salah juga akan memberikan hasil yang kurang baik untuk seorang programmer nantinya jadi di harapkan dari awal untuk memahami cara kerjanya terlebih dahulu.