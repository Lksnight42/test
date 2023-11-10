from abc import ABCMeta, abstractmethod

class Pet(object, metaclass=ABCMeta):
    
    def __init__(self, nickname):
        self_nickname = self.nickname;
        
    @abstractmethod 
    def make_voice(self):
        """make noise"""
        pass    
    
    def calculation(a,b):
        a + b
    
    
    
class dog(Pet):
    
    def make_voice(self):
        print('%s dog noise',self.nickname)
   
    def calculation(a,b):
        total = a - b   
        return total     
        
class cat(Pet):
    def make_noise(self):
        print('cat noise')
    def calculation(a,b):
        total = a / b  
        return total  
        
        
def main():
    
    dog1 = dog('wangchai')
    print(dog)
    print(dog1.make_noise())

        
        
if __name__ == '__main__':

    main()       
        
        
        
