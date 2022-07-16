#include <iostream>
#include <bitset>
#include <vector> 


using namespace std;


class Decoder {
    private:
        int binaryToDecimal(string n)
        {
            string num = n;
            int dec_value = 0;
            int base = 1;
        
            int len = num.length();
            for (int i = len - 1; i >= 0; i--) {
                if (num[i] == '1')
                    dec_value += base;
                base = base * 2;
            }
            return dec_value;
        }

        string set6bit(string Secret) {
            string s1, s2;
            string Override;
            static char b64table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                     "abcdefghijklmnopqrstuvwxyz"
                                     "0123456789+/";
            for(int i=0; i<Secret.size(); i++){
                s1 = Secret[i];
                for(int j=0; j<sizeof(b64table); j++){
                    s2 = b64table[j];
                    if(s1 == s2){
                        bitset<6> c(j);
                        Override += c.to_string();
                    }
                };
            }
            return Override;
        }

        string set8bit(string Bits) {
            int step = 8;
            string text = "";
            string y;
            for(int i=0; i<Bits.size(); i++){
                if((i%step) == 0) {
                    string ch;
                    for(int j=i; j<i+step; j++){
                        ch +=Bits[j];
                
                    }
                    char x = static_cast<char>(binaryToDecimal(ch));
                    y = x;
                    text += y;
                    // cout << typeid(y).name() << endl;
                }
            }

            return text;
        }
    public:
        string decode(string Secret) {
            string Empty;
            string Override = set8bit(set6bit(Secret));
            int Length = Override.size();
            for(int i=0; Length>i; Length--){
                if (Override[Length] ==58) {
                    Empty += " ";
                } else {
                    Empty += Override[Length];
                }

            }
            return Empty;
        }
};



int main(){

    static string Secret = "aWFuZ25vVzpOQU06RU5JTDp0YTpzdTpuaW9K";

    Decoder step1;

    string MyResutl = step1.decode(Secret);


    cout << "======================================= By Thanatthuch Kamseng =========================================" << endl;
    cout <<"Result: " << MyResutl << endl;

    cout <<"Contrack: \nLine: Thanatthuch38\nTel: 085-115-4196\nEmail: thanatthuchkamseng@gmail.com\nEmail2: thanatthuch.cu@gmail.com"<< endl;
    cout << "================================================ Thank =================================================" << endl;

}#include <iostream>
#include <bitset>
#include <vector> 


using namespace std;


class Decoder {
    private:
        int binaryToDecimal(string n)
        {
            string num = n;
            int dec_value = 0;
            int base = 1;
        
            int len = num.length();
            for (int i = len - 1; i >= 0; i--) {
                if (num[i] == '1')
                    dec_value += base;
                base = base * 2;
            }
            return dec_value;
        }

        string set6bit(string Secret) {
            string s1, s2;
            string Override;
            static char b64table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                     "abcdefghijklmnopqrstuvwxyz"
                                     "0123456789+/";
            for(int i=0; i<Secret.size(); i++){
                s1 = Secret[i];
                for(int j=0; j<sizeof(b64table); j++){
                    s2 = b64table[j];
                    if(s1 == s2){
                        bitset<6> c(j);
                        Override += c.to_string();
                    }
                };
            }
            return Override;
        }

        string set8bit(string Bits) {
            int step = 8;
            string text = "";
            string y;
            for(int i=0; i<Bits.size(); i++){
                if((i%step) == 0) {
                    string ch;
                    for(int j=i; j<i+step; j++){
                        ch +=Bits[j];
                
                    }
                    char x = static_cast<char>(binaryToDecimal(ch));
                    y = x;
                    text += y;
                    // cout << typeid(y).name() << endl;
                }
            }

            return text;
        }
    public:
        string decode(string Secret) {
            string Empty;
            string Override = set8bit(set6bit(Secret));
            int Length = Override.size();
            for(int i=0; Length>i; Length--){
                if (Override[Length] ==58) {
                    Empty += " ";
                } else {
                    Empty += Override[Length];
                }

            }
            return Empty;
        }
};



int main(){

    static string Secret = "aWFuZ25vVzpOQU06RU5JTDp0YTpzdTpuaW9K";

    Decoder step1;

    string MyResutl = step1.decode(Secret);


    cout << "======================================= By Thanatthuch Kamseng =========================================" << endl;
    cout <<"Result: " << MyResutl << endl;

    cout <<"Contrack: \nLine: Thanatthuch38\nTel: 085-115-4196\nEmail: thanatthuchkamseng@gmail.com\nEmail2: thanatthuch.cu@gmail.com"<< endl;
    cout << "================================================ Thank =================================================" << endl;
    return 0;
}
