class Decoder:
    def __init__(self):
        UpperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        LowerCase = "abcdefghijklmnopqrstuvwxyz"
        NumericCase = "0123456789"
        OperationCase = "+/"
        self.__B64idx = UpperCase\
            + LowerCase\
            + NumericCase\
            + OperationCase
        
    def __bits6(self, text: str)-> str:
        Bits6 = ""
        for ch in text:
            Bits6+= "{:0>6b}".format(
                self.__B64idx.index(ch)
            )
        return Bits6
    
    def __bits8(self, text: str)-> list:
        Bits6:  str = self.__bits6(text)
        Length: int = len(Bits6)
        Start:  int = 0
        Step:   int = 8
        Bits8arr = []   
        for i in range(Start, Length, Step):
            Bits8arr.append(Bits6[i: i+Step])
        return Bits8arr
    
    def decode(self, text: str)-> str:
        Texts = b""
        for bit8 in self.__bits8(text):
            asciiForm = [int(bit8,2)]
            asciiDecode = bytes(asciiForm)
            Texts += asciiDecode
        return Texts
        
if __name__ == "__main__":

    print("================================= Start ====================================")

    Secret   = "aWFuZ25vVzpOQU06RU5JTDp0YTpzdTpuaW9K"
    myDecode = Decoder().decode(Secret).decode("utf-8")
    myResult = myDecode[::-1].replace(":"," ")
    
    print("The Result is : ",myResult)

    print("\nThank for consider\nMy full name: Thanatthuch Kamseng\nRole: Machine Learning Engineer\n*ContractMe*\nLine: thanatthuch38\nCall: 085-115-4196\nEmail: thanatthuchkamseng@gmail.com")
    print("================================= ENDL ====================================")
