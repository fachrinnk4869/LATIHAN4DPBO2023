#include <bits/stdc++.h>
using namespace std;

#include "Human.cpp"
#include "Course.cpp"
#include "ProgramStudi.cpp"
#include "SivitasAkademik.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"


int main() {
// create instances of Course
Course course1("Mathematics");
Course course2("Computer Science");
// create instances of ProgramStudi and add courses to them
ProgramStudi prodi1("Information Technology", "IF", course2);
// prodi1.addCourse(course2);

ProgramStudi prodi2("Mathematics", "MA", course1);
// prodi2.addCourse(course1);

// create instances of SivitasAkademik
SivitasAkademik sivitas_akademik1("00001", "John Doe", "Male", "Harvard University", "johndoe@harvard.edu");
SivitasAkademik sivitas_akademik2("00002", "Jane Doe", "Female", "Stanford University", "janedoe@stanford.edu");

// create instances of Mahasiswa and Dosen
Mahasiswa mahasiswa1("00003", "John Smith", "Male", "11111", "Faculty of Information Technology", prodi1, "Harvard University", "johnsmith@harvard.edu", course2);
Dosen dosen1("00004", "Jane Smith", "Female", "22222", "Faculty of Mathematics", prodi2, "PhD in Mathematics", "Algebra", "Stanford University", "janesmith@stanford.edu");

// print out the information of the created objects
cout << "Nama Mahasiswa: " << mahasiswa1.getNama() << endl;
cout << "Program Studi: " << mahasiswa1.getProdi().getNamaProdi() << " (" << mahasiswa1.getProdi().getKode() << ")" << endl;
cout << "Email Sivitas Akademik: " << sivitas_akademik1.getEmailEdu() << endl;
cout << "Nama Matakuliah: " << mahasiswa1.getCourse()[0].getNamaMatkul() << endl << endl;

cout << "Nama Dosen: " << dosen1.getNama() << endl;
cout << "Keahlian: " << dosen1.getKeahlian() << endl;
cout << "Nama Program Studi: " << dosen1.getProdi().getNamaProdi() << endl;

return 0;
}