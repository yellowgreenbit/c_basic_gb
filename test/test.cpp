int sum(const int a, const int b)
{
    return a + b;
}

void swap_variables(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//void helloFunction(char* name, char* out){
//    char welcome[255] = "Hello, ";
//
//    if(strcmp("Ivan", name) == 0) //string equals
//    {
//        name = "Master";
//    }
//    strcat(welcome, name);
//    strcpy(out, welcome);
//}

//#include <string>
// MIN MAX
//
//#include <string>
//#include <sstream>
//#include <limits>
//
//std::string highAndLow(const std::string& numbers){
//    std::stringstream ss(numbers);
//    int temp, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
//    while (ss >> temp) {
//        min = (temp < min) ? temp : min;
//        max = (temp > max) ? temp : max;
//    };
//    return std::to_string(max) + " " + std::to_string(min);
//}
//
//std::string highAndLow(const std::string& numbers){
//    std::istringstream in(numbers);
//    auto minmax = std::minmax_element(
//            std::istream_iterator<int>(in),
//            std::istream_iterator<int>()
//    );
//    std::stringstream out;
//    out << *minmax.second << ' ' << *minmax.first;
//    return out.str();
//}
//
//std::string highAndLow(const std::string& numbers){
//    int from = 0;
//    int max = INT32_MIN;
//    int min = INT32_MAX;
//    int num;
//    std::string strNum;
//
//    for (int i = 0; i < numbers.length(); i++) {
//        if (numbers[i] == ' ' || i+1 == numbers.length()){
//            strNum = numbers.substr(from, i+1 == numbers.length() ? numbers.length() : i);
//            from = i;
//
//            num = stoi(strNum);
//            max = max < num ? num : max;
//            min = min < num ? min : num;
//        }
//    }
//
//    return(std::to_string(min) + ' ' + std::to_string(max));
//}