import base64



def LineManDecoder(CODE: str)-> str:
    # Decode from Base64
    DecB64 = base64.b64decode(CODE) # The result of DecB64 is >> b'iangnoW:NAM:ENIL:ta:su:nioJ' this is byte form<< 
    
    # Reform Byte form to STR form
    STRform = DecB64.decode("utf-8") # The result of STRform is >> 'iangnoW:NAM:ENIL:ta:su:nioJ'
    
    # Reverse text
    Result = STRform[::-1].replace(":"," ")

    print(
        f"The Result is : {Result}"
    )
    return Result;

if __name__ == "__main__":
    print("================================= Start ====================================")
    CODE = "aWFuZ25vVzpOQU06RU5JTDp0YTpzdTpuaW9K";
    LineManDecoder(CODE);

    print("\nThank for consider\nMy full name: Thanatthuch Kamseng\nRole: Machine Learning Engineer\n*ContractMe*\nLine: thanatthuch38\nCall: 085-115-4196\nEmail: thanatthuchkamseng@gmail.com")
    print("================================= ENDL ====================================")
