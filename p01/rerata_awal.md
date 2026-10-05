Bagian yang perlu di rubah berada dibagian untuk memasukkan nama data/beserta tipe datanya yang awal nya int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;
 menjadi
 int main() {
    int mingguan = 65;
    int kehadiran = 86;
    int tugas = 80;
    int uts = 75;
    int uas = 90;

    dan juga kemudian mengubah di bagian yang akan menghasilkan output yang dimana mnejumahkan total keseluruhan dari nilai nilai tersebut
    int jumlah = 0;
    jumlah = tugas + uts + uas;

    menjadi...
    int jumlah = 0;
    jumlah = mingguan + kehadiran + tugas + uts + uas;

    dan saya juga mencoba untuk menghilangkan ";" untuk di nama data serta tipe datanya hingga di akhirnya supaya lebih simpel dan ternyata tidak berjalan sesuai yang di harapkan alias error