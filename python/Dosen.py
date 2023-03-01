from SivitasAkademik import SivitasAkademik
from ProgramStudi import ProgramStudi

class Dosen (SivitasAkademik):
  __nip = ''# atribut NIP
  __prodi = ProgramStudi()# atribut prodi
  __fakultas = ''# atribut fakultas
  __pendTerakhir = ''# atribut fakultas
  __keahlian = ''# atribut fakultas


  def __init__(self, nik = '', nama = '', gender = '', nip = '',fakultas = '', prodi = ProgramStudi(),  pendTerakhir = '', keahlian = '', asalUniv = '', emailEdu = ''):
    # inisiasi dengan value awal
    super().__init__(nik, nama, gender, asalUniv, emailEdu)
    self.__nip = nip
    self.__prodi = prodi
    self.__fakultas = fakultas
    self.__pendTerakhir = pendTerakhir
    self.__keahlian = keahlian
  

  def getNip(self):
    # return NIP mahasiswa
    return self.__nip
  
  def getProdi(self):
    # return prodi
    return self.__prodi
  
  def getFakultas(self):
    #return fakultas
    return self.__fakultas
  
  def getPendTerakhir(self):
    #return pendTerakhir
    return self.__pendTerakhir
  
  def getKeahlian(self):
    #return keahlian
    return self.__keahlian
  
  def setNip(self, nip):
    # menggati value NIP
    self.__nip = nip
  
  def setProdi(self,prodi):
    # mengganti value prodi
    self.__prodi = prodi
  
  def setFakultas(self, fakultas):
    # mengganti value fakultas
    self.__fakultas = fakultas
    
  def setPendTerakhir(self, pendTerakhir):
    # mengganti value penTerakhir
    self.__pendTerakhir = pendTerakhir
    
  def setKeahlian(self, keahlian):
    # mengganti value keahlian
    self.__keahlian = keahlian

  