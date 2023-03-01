from SivitasAkademik import SivitasAkademik
from ProgramStudi import ProgramStudi
from Course import Course

class Mahasiswa (SivitasAkademik):
  __nim = ''# atribut NIM
  __prodi = ProgramStudi()# atribut prodi
  __fakultas = ''# atribut fakultas
  __course = []# atribut fakultas


  def __init__(self, nik = '', nama = '', gender = '', nim = '', fakultas = '', prodi = ProgramStudi(), asalUniv = '', emailEdu = '', course = Course()):
    # inisiasi dengan value awal
    super().__init__(nik, nama, gender, asalUniv, emailEdu)
    self.__nim = nim
    self.__prodi = prodi
    self.__fakultas = fakultas
    self.__course.append(course)
  

  def getNim(self):
    # return NIM mahasiswa
    return self.__nim
  
  def getProdi(self):
    # return prodi
    return self.__prodi
  
  def getFakultas(self):
    #return fakultas
    return self.__fakultas
  
  def getCourse(self):
    #return course
    return self.__course
  
  def setNim(self, nim):
    # menggati value NIM
    self.__nim = nim
  
  def setProdi(self,prodi):
    # mengganti value prodi
    self.__prodi = prodi
  
  def setFakultas(self, fakultas):
    # mengganti value fakultas
    self.__fakultas = fakultas
    
  def addCourse(self, course):
    self.__course.append(course)
  