class Human {
    private:
        string __nik; // atribut NIK
        string __nama; // atribut Nama
        string __jenisKelamin; // Jenis Kelamin

    public:
        Human(string nik = "", string nama = "", string jenisKelamin = "") {
            // inisiasi dengan value awal
            __nik = nik;
            __nama = nama;
            __jenisKelamin = jenisKelamin;
        }

        string getNama() {
            // return nama human
            return __nama;
        }

        string getNik() {
            // return nik human
            return __nik;
        }

        string getJenisKelamin() {
            // return jenis kelamin
            return __jenisKelamin;
        }

        void setNama(string nama) {
            // mengganti value nama
            __nama = nama;
        }

        void setNik(string nik) {
            // mengganti value nik
            __nik = nik;
        }

        void setJenisKelamin(string jenisKelamin) {
            // mengganti value Jenis Kelamin
            __jenisKelamin = jenisKelamin;
        }
};