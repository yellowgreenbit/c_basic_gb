//1. Создать и инициализировать переменные пройденных типов данных (short int, int, long long, char, bool, float, double).
//2. Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.
//3. Создать массив, способный содержать значения такого перечисления и инициализировать его.
//4. * Создать структуру (struct) данных «Поле для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами (подумайте что может понадобиться).
//5. ** Создать структуру (struct MyVariant) объединяющую: union MyData (int, float, char) и 3-и битовых поля (флага)
// указывающими какого типа значение в данный момент содержится в объединении (isInt, isFloat, isChar).
// Продемонстрировать пример использования в коде этой структуры.

#include <iostream>
#include <iomanip>


int main(int argc, const char** argv) {


//  PART #1
    bool myBool = true;
    short int myShortInt = 12122;
    int myInt = 213123123;
    char mySymbol = 'N';
    unsigned long myLong = 4'294'967'295;
    unsigned long long myLongLong = 8'446'744'073'709'551'615; // 256 ^ 8
    float myFloat = 12.345;
    double myDouble = 3.3333333333333333333333333333333333333;

    std::cout << std::setfill(' ') << std::left
        << std::setw(24) << "type double"
        << std::setw(24) << "value:"
        << std::setw(24) << std::setprecision(16) << myDouble << sizeof(myDouble) << " bytes" << std::endl;


//  PART #2
    enum crossZeroChars: char{
        VALUE_NULL = '_',
        VALUE_ZERO = '0',
        VALUE_CROSS = 'X'
    };


//  PART #3
    const short int CZ_LENGTH = 3;

    uint8_t crossZeroArray[CZ_LENGTH][CZ_LENGTH];

    for (int i = 0; i < CZ_LENGTH; ++i) {
        for (int j = 0; j < CZ_LENGTH; ++j) {
            crossZeroArray[i][j] = VALUE_NULL;
        }
    }


//  PART #4
    struct FieldCZ{
        FieldCZ(){
            fillField();
        }
        uint8_t defaultValues = VALUE_NULL;
        short int fieldValues[CZ_LENGTH][CZ_LENGTH];

        void fillField(){
            for (int i = 0; i < CZ_LENGTH; ++i) {
                for (int j = 0; j < CZ_LENGTH; ++j) {
                    fieldValues[i][j] = defaultValues;
                }
            }
        };
    };

    FieldCZ gameField;


//  PART #5

    union MyData{
        int i;
        char c;
        float f;
    };

    struct MyVariant{
        int IS_CHAR : 1;
        int IS_FLOAT : 1;
        int IS_INT : 1;
        MyData data;
        void setValue(int val){
            IS_CHAR = IS_FLOAT = false;
            IS_INT = true;
        }
        void setValue(char val){
            IS_INT = IS_FLOAT = false;
            IS_CHAR = true;
        }
        void setValue(float val){
            IS_INT = IS_CHAR = false;
            IS_FLOAT = true;
        }
    };

    MyVariant myVar;

    myVar.setValue(121.123f);
    myVar.setValue(121);

    return 0;
}
