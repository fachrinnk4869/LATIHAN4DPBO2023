## Janji
Saya Fachri Najm Noer Kartiman NIM 2106515 mengerjakan soal Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.

# Tugas LATIHAN4DPBO2023
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
Human: NIK, nama, jenis_kelamin
SivitasAkademik: asal_universitas, email_edu
Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
Course: nama_matakuliah, 
Program Studi: nama_prodi, kode, course

File README berisi desain program, penjelasan alur, dan dokumentasi saat program dijalankan (screenshot/screen record, pilih salah satu bahasa sebagai contoh)

Submit link repository pada form berikut: [Form Pengumpulan](https://forms.gle/rvb1hKxbQVuYNbhKA) 

## Desain Program
Desain yang saya buat menggunakan 4 Class:
* Human
* Sivitas Akademik
* Mahasiswa
* Dosen
* ProgramStudi
* Course

`Class Human` memiliki total tiga atribut:
* **NIK** -> NIK manusia, `string`
* **Nama** -> nama manusia, `string`
* **jenisKelamin** -> jenis kelamin manusia, `string`

`Class SivitasAkademik` memiliki total dua atribut dan atribut dari parentnya `Class Human`:
* **asalUniv** -> asal Universitas sivitas akademik, `string`
* **emailEdu** -> email Edu sivitas akademik, `string`

`Class Mahasiswa` memiliki total empat atribut dan atribut dari parentnya `Class SivitasAkademik` dan meng composite `Class ProgramStudi` dan `Class Course`:
* **NIM** -> NIM mahasiswa, `string`
* **Prodi** -> program studi mahasiswa, `string`
* **Fakultas** -> Fakultas mahasiswa, `string`
* **Course** -> object Course, `Course`

`Class Dosen` memiliki total empat atribut dan atribut dari parentnya `Class SivitasAkademik`:
* **NIP** -> NIP mahasiswa, `string`
* **Prodi** -> program studi mahasiswa, `string`
* **Fakultas** -> Fakultas mahasiswa, `string`
* **PendidikanTrakhir** -> object PendTrakhir, `PendTrakhir`
* **Keahlian** -> object keahlian, `keahlian`

`Class ProgramStudi`:
* **NIP** -> NIP mahasiswa, `string`
* **Prodi** -> program studi mahasiswa, `string`
* **Fakultas** -> Fakultas mahasiswa, `string`
* **PendidikanTrakhir** -> object PendTrakhir, `PendTrakhir`
* **Keahlian** -> object keahlian, `keahlian`

`Class Course`:
* **NamaMatkul** -> Nama Mata Kuliah, `string`

_Semua Class diatas dilengkapi dengan setter dan getternya_

## Penjelasan UML
**UML**

![UML](UML.png)

Berdasarkan gambar diatas Human sebagai parent dari sivitas akademik karena sivitasAkdemik merupakan human, 
dosen dan mahasiswa merupakan sivitasAkademik,

Mahasiswa dan dosen meng composite Program studi karena mereka memiliki program studinya masing

ProgramStudi meng composite Course karena program Studi memiliki Course/MataKuliahnya sendiri

Mahasiswa meng compostite Course karena mahasiswa bisa memilih Course diluar program studinya mahasiswa

## Alur Program
Program ini harcore jadi memerlukan inpuntan sendiri

## Dokumentasi
**Program Python**

![Java program](python/python-program.png)