class SivitasAkademik : public Human {
    private:
        string asalUniv; // atribut asal Universitas
        string emailEdu; // atribut Email edu

    public:
        SivitasAkademik(string nik = "", string nama = "", string jenisKelamin = "", string asalUniv = "", string emailEdu = "") : Human(nik, nama, jenisKelamin) {
            // inisiasi dengan value awal
            this->asalUniv = asalUniv;
            this->emailEdu = emailEdu;
        }

        string getAsalUniv() {
            // return Asal Universitas
            return this->asalUniv;
        }

        string getEmailEdu() {
            // return Email Edu
            return this->emailEdu;
        }

        void setAsalUniv(string asalUniv) {
            // mengganti value Asal Universitas
            this->asalUniv = asalUniv;
        }

        void setEmailEdu(string emailEdu) {
            // mengganti Email Edu
            this->emailEdu = emailEdu;
        }
};