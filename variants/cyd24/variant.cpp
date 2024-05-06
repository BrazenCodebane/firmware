#include <iostream>
#include <vector>

namespace CYD
{

class t9
{

    std::vector<char> _onButton1{'1', '.', '?', '!', ',', '@'};
    std::vector<char> _onButton2{'2', 'a', 'b', 'c'};
    std::vector<char> _onButton3{'3', 'd', 'e', 'f'};
    std::vector<char> _onButton4{'4', 'g', 'h', 'i'};
    std::vector<char> _onButton5{'5', 'j', 'k', 'l'};
    std::vector<char> _onButton6{'6', 'm', 'n', 'o'};
    std::vector<char> _onButton7{'7', 'p', 'q', 'r', 's'};
    std::vector<char> _onButton8{'8', 't', 'u', 'v'};
    std::vector<char> _onButton9{'9', 'w', 'x', 'y', 'z'};
    std::vector<char> _onButtonStar{'*'};
    std::vector<char> _onButton0{'0', ' '};
    std::vector<char> _onButtonPound{'#'};

    // Function to return the character corresponding to the key pressed
    char _OnKeyPress(int buttonIndex, int pressCount)
    {
        char result = '\0'; // Initialize result with null character

        // Based on the button index, get the corresponding vector
        std::vector<char> *buttonVector = nullptr;
        switch (buttonIndex) {
        case 1:
            buttonVector = &_onButton1;
            break;
        case 2:
            buttonVector = &_onButton2;
            break;
        case 3:
            buttonVector = &_onButton3;
            break;
        case 4:
            buttonVector = &_onButton4;
            break;
        case 5:
            buttonVector = &_onButton5;
            break;
        case 6:
            buttonVector = &_onButton6;
            break;
        case 7:
            buttonVector = &_onButton7;
            break;
        case 8:
            buttonVector = &_onButton8;
            break;
        case 9:
            buttonVector = &_onButton9;
            break;
        case 0:
            buttonVector = &_onButton0;
            break;
        default:
            std::cerr << "Invalid button index\n";
            break;
        }

        // If buttonVector is not nullptr, fetch the character based on press count
        if (buttonVector != nullptr && pressCount >= 1 && pressCount <= buttonVector->size()) {
            result = (*buttonVector)[pressCount - 1];
        }

        return result;
    }

}; // End of class t9

} // End of namespace CYD
