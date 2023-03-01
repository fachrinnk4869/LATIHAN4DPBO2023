from Course import Course

class ProgramStudi ():
  __kode = ''# atribut KODE
  __namaProdi =""# atribut namaProdi
  __course = []# atribut fakultas


  def __init__(self, kode = '', namaProdi ="", course = Course()):
    # inisiasi dengan value awal
    self.__kode = kode
    self.__namaProdi = namaProdi
    self.__course.append(course)
  

  def getKode(self):
    # return KODE mahasiswa
    return self.__kode
  
  def getNamaProdi(self):
    # return namaProdi
    return self.__namaProdi
  
  def getCourse(self):
    #return course
    return self.__course
  
  def setKode(self, kode):
    # menggati value KODE
    self.__kode = kode
  
  def setNamaProdi(self,namaProdi):
    # mengganti value namaProdi
    self.__namaProdi = namaProdi
    
  def addCourse(self, course):
    self.__course.append(course)
  