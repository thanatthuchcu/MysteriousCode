# by Thanatthuch Kamseng

class B64Decoder:
    CHARACTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

    def B8(self, text, length):
        Bit8Array = []

        for i in range(0, len(text), length):
            Bit8Array.append(text hi[i:i+length])
        return Bit8Array

    def decode(self, text):
        # if in text is '=' for replace by A
       
        text = text.replace("=", "A")

        # Declare Empty string to prepare character6bit insert
        boxstring = ""
        for char in text:
            boxstring += "{:0>6b}".format(self.CHARACTERS.index(char))
        
        # Transformation B64 to B8
        B8bytes = self.B8(boxstring, 8)
        
        # Transformation B8 to Byte text and insert it. 
        bytesText = b""
        for B8 in B8bytes:
            #Decode Ascii to Base64 index and Decode it
            bytesText += bytes([int(B8, 2)])

        # the result of bytesText is:  b'iangnoW:NAM:ENIL:ta:su:nioJ'
        # Reverse text form byte-type to 'utf-8' and replace ":" by a space 
        textResult = bytesText[::-1].decode('utf-8').replace(":", " ")

        return textResult



if __name__ == "__main__":
    print("================================= Start ====================================")

    Secret = "aWFuZ25vVzpOQU06RU5JTDp0YTpzdTpuaW9K"

    SecretDecoded = B64Decoder().decode(Secret)
    print(f"\nThe result is : {SecretDecoded}")
    
    print("\nThank for consider\nMy full name: Thanatthuch Kamseng\nRole: Machine Learning Engineer\n*ContractMe*\nLine: thanatthuch38\nCall: 085-115-4196\nEmail: thanatthuchkamseng@gmail.com")
    print("================================= ENDL ====================================")
