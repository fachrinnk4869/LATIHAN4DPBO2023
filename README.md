## Janji
Saya Fachri Najm Noer Kartiman NIM 2106515 mengerjakan soal Latihan 3
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.

# Tugas LATIHAN2DPBO2023
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

_Semua Class diatas dilengkapi dengan setter dan getternya_


Pada Class class diatas dilakukan multi-level inheritance dari 

`Class Human` -> `Class SivitasAkademik` -> `Class Mahasiswa`

`Kenapa?` karena `Mahasiswa` adalah `SivitasAkademik` dan `SivitasAkademik` adalah `Human`

maka pewarisan dilakukan dari `Class Human` ke `Class SivitasAkademik` ke `Class Mahasiswa`


`Class Crud` memiliki total dua atribut:
* **list** -> array untuk menyimpan class Mahasiswa, `array of Mahasiswa`
* **listNim** -> array untuk menyimpan NIM, `array of integer`

dan `Class Crud` memiliki total empat method:
* **tambah** -> menambah data Mahasiswa ke `list` dan NIM nya ke `listNim`
* **tampil** -> menampilkan data Mahasiswa dari `list`
<!-- * **hapus** -> menghapus data Mahasiswa ke `list` dan NIM nya ke `listNim`
* **ganti** -> mengganti data Mahasiswa ke `list` dan NIM nya ke `listNim` -->

Pada `Class Crud` terdapat dua list yaitu `list` dan `listNim`

`Kenapa?` itu dibuat agar library yang ada digunakan dengan semestinya seperti library find pada bahasa c++ dipakai untuk mengecek apakah disuatu data terdapat data NIM yang redundant atau tidak jadi bisa dicek di `listNIM`

## Alur Program
Program ini harcore jadi tidak memerlukan inpuntan sendiri

## Dokumentasi
**Program Python**

![Java program](python/python-program.png)

**UML Program**

![PHP program](UML.png)
