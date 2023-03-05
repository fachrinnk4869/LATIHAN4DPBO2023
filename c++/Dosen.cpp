class Dosen : public SivitasAkademik {
  private:
    string nip; // atribut NIP
    ProgramStudi prodi; // atribut prodi
    string fakultas; // atribut fakultas
    string pendTerakhir; // atribut pendTerakhir
    string keahlian; // atribut keahlian

  public:
    Dosen(){
      this->nip = "";
      this->prodi = ProgramStudi();
      this->fakultas = "";
      this->pendTerakhir = "";
      this->keahlian = "";
    }
    Dosen(string nik, string nama, string gender, string nip, string fakultas, ProgramStudi prodi, string pendTerakhir, string keahlian, string asalUniv, string emailEdu): SivitasAkademik(nik, nama, gender, asalUniv, emailEdu){
      this->nip = nip;
      this->prodi = prodi;
      this->fakultas = fakultas;
      this->pendTerakhir = pendTerakhir;
      this->keahlian = keahlian;
    }

    string getNip() {
        // return NIP dosen
        return this->nip;
    }

    ProgramStudi getProdi() {
        // return prodi
        return this->prodi;
    }

    string getFakultas() {
        // return fakultas
        return this->fakultas;
    }

    string getPendTerakhir() {
        // return pendTerakhir
        return this->pendTerakhir;
    }

    string getKeahlian() {
        // return keahlian
        return this->keahlian;
    }

    void setNip(string nip) {
        // mengganti value NIP
        this->nip = nip;
    }

    void setProdi(ProgramStudi prodi) {
        // mengganti value prodi
        this->prodi = prodi;
    }

    void setFakultas(string fakultas) {
        // mengganti value fakultas
        this->fakultas = fakultas;
    }

    void setPendTerakhir(string pendTerakhir) {
        // mengganti value pendTerakhir
        this->pendTerakhir = pendTerakhir;
    }

    void setKeahlian(string keahlian) {
        // mengganti value keahlian
        this->keahlian = keahlian;
    }
};
