//
// Created by Home on 06.02.2022.
//

//    printf("Summ a and b = %d", sum(50, 60));

//    char answer;
//    printf("Do you want to salute you (y/n)? ");
//    scanf("%s", &answer);
//
//    if (answer == 'y'){
//        printf("Hello user");
//    }
//    else if (answer == 'n'){
//        printf("Fuck you!");
//    } else {
//        printf("Double Fuck YOU!");
//    }
//    int a = 10;
//    int b = 6;
//    int c;
//
//    c = a > b ? a : b;
//
//    printf("c = %d\n", c);
//
//    printf("%s", (a > b) ? "true" : "false");
//

//
//std::string seriesSum(int n){
//    if (n == 0) return "0.00";
//    float result = 0.0;
//    char buffer[100];
//    for (int i = 1; i < n; i++) {
//        result += 1 / (3.0 * i + 1.0);
//    }
//    sprintf(buffer, "%.2f", ++result);
//    return buffer;
//}
//    int a = 4;
//    int b = 50;
//    float d = 99.33;
//
//    printf("%i\n", a);
//    printf("%05d\n", b);
//    printf("%f\n", d);
//    printf("%.1f\n", d);
//
//    unsigned char symbol = 44;
//    printf("%c", symbol);
//    int a = 10;
//
//    printf("Value a - %d \n", a);
//    printf("Address a - %p \n", &a);
//
//    int * pointer;
//    pointer = &a;
//    printf("Pointer value a - %p \n", pointer);
//    printf("Pointer address a - %p \n", &pointer);
//
//    *pointer = 20;
//
//    printf("Pointer indicates value - %d \n", *pointer);
//    printf("Pointer indicates value a - %d \n", a);
//
//    int a = 10;
//    int b = 20;
//    printf("a = %d, b = %d\n", a, b);
//    swap_variables(&a, &b);
//    printf("a = %d, b = %d", a, b);

//    int num;
//    printf("Print number: ");
//    scanf("%d", &num);
//
//    printf("You printed num: %d, double num: %d", num, num*2);
//    int num = 70;
//
//    num += 50;
//    printf("%d\n", num);
//
//    num /= 2;
//    num /= 8;
//    printf("%d\n", num);
//
//    printf("%d", 5 % 3);
//
//    int num = 7;
//    num++;
//
//    printf("%d\n", num);

// XOR
//
//    char a = 11;
//    char b = 15;
//
//    printf("a = %d, b = %d \n", a, b);
//
//    a = a ^ b;
//    b = b ^ a;
//    a = a ^ b;
//
//    printf("a = %d, b = %d \n", a, b);

//    x << n = x * 2 ** n
//    b = 00001111 << 1
//    b = 00011110
//    x >> n = x / 2 ** n
//    b = 00011110 >> 3
//    b = 00000011
//
//
//    int num = 3;
//    while (num < 5){
//        printf("Number %d\n", num++);
//    }
//
//    int num = 3;
//    while (num < 5){
//        printf("Number %d\n", ++num);
//    }
//
//    int num = 0;
//    int even = 0;
//    while (num < 15){
//        if (num % 2 == 0)
//        {
//            even++;
//            printf("Number %d\n", num);
//        };
//        num++;
//        if (num > 10)
//          break;
//    }
//
//    int i;
//    for (i = 0; i < 5; i++){
//        printf("%d ", i);
//    }
//    float first;
//    float second;
//    float result;
//
//    unsigned char sign;
//
//    printf("Input first num");
//    scanf("%f", &first);
//    fseek(stdin, 0, SEEK_END);
//    printf("Input operator");
//    scanf("%c", &sign);
//
//    if (sign == '/'){
//        do {
//            printf("Input second num");
//            scanf("%f", &second);
//        } while (second == 0);
//    } else {
//        printf("Input second num");
//        scanf("%f", &second);
//    }
//
//    switch (sign) {
//        case '*':
//            result = first * second;
//            printf("%f %c %f = %f \n", first, sign, second, result);
//            break;
//        case '/':
//            result = first / second;
//            printf("%f %c %f = %f \n", first, sign, second, result);
//            break;
//        case '-':
//            result = first - second;
//            printf("%f %c %f = %f \n", first, sign, second, result);
//            break;
//        case '+':
//            result = first + second;
//            printf("%f %c %f = %f \n", first, sign, second, result);
//            break;
//        default:
//            printf("Unknown operator: %c", sign);
//            break;
//    }

//    char string[251] = "12 124 -5";
//
//    printf("%s\n", string);
//
//    char name[255];
//    char result[255];
//    gets(name);
//    puts(name);
//
//    helloFunction(name, result);
//
//    printf("%s\n", result);
//
//    char num[64];
//    puts("Input number");
//    gets(num);
//
//    int number = atoi(num);
//    number *= number;
//
//    printf("Square number = %d\n", number);
//
//    char name[64] = "project";
//    name[0] = toupper(name[0]);
//    printf("%s\n", name);
//    char string[256] = "1 2 3 54 -3 4 6";
//    char i;
//
//    for (i in string){
//
//    }