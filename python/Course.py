class Course():
  __namaMatkul = ''# atribut namaMatkul


  def __init__(self, namaMatkul = ''):
    # inisiasi dengan value awal
    self.__namaMatkul = namaMatkul
  
  def getNamaMatkul(self):
    # return namaMatkul
    return self.__namaMatkul
  
  def setNamaMatkul(self,namaMatkul):
    # mengganti value namaMatkul
    self.__namaMatkul = namaMatkul