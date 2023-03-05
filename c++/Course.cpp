class Course {
  private:
    string namaMatkul;// atribut namaMatkul

  public:
  Course(string namaMatkul = ""){
    // inisiasi dengan value awal
    this->namaMatkul = namaMatkul;
  }
  
  string getNamaMatkul(){
    // return namaMatkul
    return this->namaMatkul;
  }
  
  void setNamaMatkul(string namaMatkul){
    // mengganti value namaMatkul
    this->namaMatkul = namaMatkul;
  };
};