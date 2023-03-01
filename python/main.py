# create instances of Course
from Course import Course
from ProgramStudi import ProgramStudi
from SivitasAkademik import SivitasAkademik
from Mahasiswa import Mahasiswa
from Dosen import Dosen

course1 = Course("Mathematics")
course2 = Course("Computer Science")

# create instances of ProgramStudi and add courses to them
prodi1 = ProgramStudi("Information Technology", "IF", course2)
# prodi1.addCourse(course2)

prodi2 = ProgramStudi("Mathematics", "MA", course1)
# prodi2.addCourse(course1)

# create instances of SivitasAkademik
sivitas_akademik1 = SivitasAkademik("00001", "John Doe", "Male", "Harvard University", "johndoe@harvard.edu")
sivitas_akademik2 = SivitasAkademik("00002", "Jane Doe", "Female", "Stanford University", "janedoe@stanford.edu")

# create instances of Mahasiswa and Dosen
mahasiswa1 = Mahasiswa("00003", "John Smith", "Male", "11111", "Faculty of Information Technology", prodi1, "Harvard University", "johnsmith@harvard.edu", course2)
dosen1 = Dosen("00004", "Jane Smith", "Female", "22222", "Faculty of Mathematics", prodi2, "PhD in Mathematics", "Algebra", "Stanford University", "janesmith@stanford.edu")

# print out the information of the created objects
print(f"Nama Mahasiswa: {mahasiswa1.getNama()}")
print(f"Program Studi: {mahasiswa1.getProdi().getNamaProdi()} ({mahasiswa1.getProdi().getKode()})")
print(f"Email Sivitas Akademik: {sivitas_akademik1.getEmailEdu()}")
print(f"Nama Matakuliah: {mahasiswa1.getCourse()[0].getNamaMatkul()}")
print()

print(f"Nama Dosen: {dosen1.getNama()}")
print(f"Keahlian: {dosen1.getKeahlian()}")
print(f"Nama Program Studi: {dosen1.getProdi().getNamaProdi()}")