#include <iostream>
#include <map>
#include <sstream>

std::string morseToAlphabet(std::string morse) {
    std::map<std::string, char> morseToAlpha = {
        {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'}, {"..-.", 'F'},
        {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'}, {"-.-", 'K'}, {".-..", 'L'},
        {"--", 'M'}, {"-.", 'N'}, {"---", 'O'}, {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'},
        {"...", 'S'}, {"-", 'T'}, {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'},
        {"-.--", 'Y'}, {"--..", 'Z'}, {".----", '1'}, {"..---", '2'}, {"...--", '3'},
        {"....-", '4'}, {".....", '5'}, {"-....", '6'}, {"--...", '7'}, {"---..", '8'},
        {"----.", '9'}, {"-----", '0'}, {".-.-.-", '.'}, {"--..--", ','}, {"..--..", '?'},
        {"-.-.--", '!'}, {"-....-", '-'}, {".----.", '\''}, {"-..-.", '/'}, {"-.--.", '('},
        {"-.--.-", ')'}, {".-...", '&'}, {"---...", ':'}, {"-.-.-.", ';'}, {"-...-", '='},
        {".-.-.", '+'}, {"-....-", '-'}, {"..--.-", '_'}, {".-..-.", '"'}, {".--.-.", '@'}, {"...-..-", '$'}
    };

    std::istringstream iss(morse);
    std::string word, result;

    while (iss >> word) {
        if (morseToAlpha.find(word) != morseToAlpha.end()) {
//				std::cout << char(morseToAlpha[word] - 'A' - 7 + 'T')<< ' ';
				std::cout << char(morseToAlpha[word])<< ' ';
            result += morseToAlpha[word];
        }
    }

    return result;
}

int main() {
    std::string morseCode = ".... .... .. .... .... .. . ..._. . . ... ... . . .. ... .... ....";
    while(std::cin >> morseCode){
    std::string decoded = morseToAlphabet(morseCode);
//    std::cout << decoded;
}
}
