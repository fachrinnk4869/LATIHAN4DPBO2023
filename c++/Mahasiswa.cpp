class Mahasiswa : public SivitasAkademik {
  private:
    string nim; // atribut NIM
    ProgramStudi prodi; // atribut prodi
    string fakultas; // atribut fakultas
    vector<Course> course; // atribut course

  public:
    Mahasiswa(string nik = "", string nama = "", string gender = "", string nim = "", string fakultas = "", ProgramStudi prodi = ProgramStudi(), string asalUniv = "", string emailEdu = "", Course course = Course()) : SivitasAkademik(nik, nama, gender, asalUniv, emailEdu) {
    this->nim = nim;
    this->prodi = prodi;
    this->fakultas = fakultas;
    this->course.push_back(course);
    }
    string getNim() {
    // return NIM mahasiswa
    return this->nim;
  }

  ProgramStudi getProdi() {
    // return prodi
    return this->prodi;
  }

  string getFakultas() {
    // return fakultas
    return this->fakultas;
  }

  vector<Course> getCourse() {
    // return course
    return this->course;
  }

  void setNim(string nim) {
    // mengganti value NIM
    this->nim = nim;
  }

  void setProdi(ProgramStudi prodi) {
    // mengganti value prodi
    this->prodi = prodi;
  }

  void setFakultas(string fakultas) {
    // mengganti value fakultas
    this->fakultas = fakultas;
  }

  void addCourse(Course course) {
    this->course.push_back(course);
  }
};