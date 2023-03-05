class ProgramStudi {
private:
  string kode; // atribut KODE
  string namaProdi; // atribut namaProdi
  vector<Course> course; // atribut course

public:
  ProgramStudi(string kode = "", string namaProdi = "", Course course = Course()) {
    // inisiasi dengan value awal
    this->kode = kode;
    this->namaProdi = namaProdi;
    this->course.push_back(course);
  }
  string getKode() {
    // return KODE mahasiswa
    return this->kode;
  }

  string getNamaProdi() {
    // return namaProdi
    return this->namaProdi;
  }

  vector<Course> getCourse() {
    // return course
    return this->course;
  }

  void setKode(string kode) {
    // menggati value KODE
    this->kode = kode;
  }

  void setNamaProdi(string namaProdi) {
    // mengganti value namaProdi
    this->namaProdi = namaProdi;
  }

  void addCourse(Course course) {
    this->course.push_back(course);
  }
};