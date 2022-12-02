#include <iostream>
#include <string>

using namespace std;

string NumberToString(string number) {
    string result;
    string i;
    bool x = false;
    int indicator = static_cast<int>(number.size());
    switch (indicator) {
    case 1:
        goto one;
    case 2:
        goto two;
    case 3:
        goto three;
    case 4:
        goto four;
    case 5:
        goto five;
    case 6:
        goto six;
    case 7:
        goto seven;
    case 8:
        goto eight;
    case 9:
        goto nine;
    default:
        break;
    }
nine:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        break;
    case 1:
        number.erase(number.begin());
        result += "сто "s;
        break;
    case 2:
        number.erase(number.begin());
        result += "двести "s;
        break;
    case 3:
        number.erase(number.begin());
        result += "триста "s;
        break;
    case 4:
        number.erase(number.begin());
        result += "четыреста "s;
        break;
    case 5:
        number.erase(number.begin());
        result += "пятьсот "s;
        break;
    case 6:
        number.erase(number.begin());
        result += "шестьсот "s;
        break;
    case 7:
        number.erase(number.begin());
        result += "семьсот "s;
        break;
    case 8:
        number.erase(number.begin());
        result += "восемьсот "s;
        break;
    case 9:
        number.erase(number.begin());
        result += "девятьсот "s;
        break;
    default:
        break;
    }
eight:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        break;
    case 1:
        number.erase(number.begin());
        if (number[0] == '0') {
            number.erase(number.begin());
            result += "десть миллионов "s;
            goto six;
        }
        else if (number[0] == '1') {
            number.erase(number.begin());
            result += "одинадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '2') {
            number.erase(number.begin());
            result += "двенадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '3') {
            number.erase(number.begin());
            result += "тринадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '4') {
            number.erase(number.begin());
            result += "четырнадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '5') {
            number.erase(number.begin());
            result += "пятнадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '6') {
            number.erase(number.begin());
            result += "шестнадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '7') {
            number.erase(number.begin());
            result += "семнадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '8') {
            number.erase(number.begin());
            result += "восемнадцать миллионов "s;
            goto six;
        }
        else if (number[0] == '9') {
            number.erase(number.begin());
            result += "девятнадцать миллионов "s;
            goto six;
        }
        break;
    case 2:
        number.erase(number.begin());
        result += "двадцать "s;
        break;
    case 3:
        number.erase(number.begin());
        result += "тридцать "s;
        break;
    case 4:
        number.erase(number.begin());
        result += "сорок "s;
        break;
    case 5:
        number.erase(number.begin());
        result += "пятьдесят "s;
        break;
    case 6:
        number.erase(number.begin());
        result += "шестьдесят "s;
        break;
    case 7:
        number.erase(number.begin());
        result += "семьдесят "s;
        break;
    case 8:
        number.erase(number.begin());
        result += "восемьдесят "s;
        break;
    case 9:
        number.erase(number.begin());
        result += "девяносто "s;
        break;
    default:
        break;
    }
seven:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        result += "миллионов "s;
        break;
    case 1:
        number.erase(number.begin());
        result += "один миллион "s;
        break;
    case 2:
        number.erase(number.begin());
        result += "два миллиона "s;
        break;
    case 3:
        number.erase(number.begin());
        result += "три миллиона "s;
        break;
    case 4:
        number.erase(number.begin());
        result += "четыре миллиона "s;
        break;
    case 5:
        number.erase(number.begin());
        result += "пять миллионов "s;
        break;
    case 6:
        number.erase(number.begin());
        result += "шесть миллионов "s;
        break;
    case 7:
        number.erase(number.begin());
        result += "семь миллионов "s;
        break;
    case 8:
        number.erase(number.begin());
        result += "восемь миллионов "s;
        break;
    case 9:
        number.erase(number.begin());
        result += "девять миллионов "s;
        break;
    default:
        break;
    }
six:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        break;
    case 1:
        number.erase(number.begin());
        x = true;
        result += "сто "s;
        break;
    case 2:
        number.erase(number.begin());
        x = true;
        result += "двести "s;
        break;
    case 3:
        number.erase(number.begin());
        x = true;
        result += "триста "s;
        break;
    case 4:
        number.erase(number.begin());
        x = true;
        result += "четыреста "s;
        break;
    case 5:
        number.erase(number.begin());
        x = true;
        result += "пятьсот "s;
        break;
    case 6:
        number.erase(number.begin());
        x = true;
        result += "шестьсот "s;
        break;
    case 7:
        number.erase(number.begin());
        x = true;
        result += "семьсот "s;
        break;
    case 8:
        number.erase(number.begin());
        x = true;
        result += "восемьсот "s;
        break;
    case 9:
        number.erase(number.begin());
        x = true;
        result += "девятьсот "s;
        break;
    default:
        break;
    }
five:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        break;
    case 1:
        number.erase(number.begin());
        if (number[0] == '0') {
            number.erase(number.begin());
            result += "десть тысяч "s;
            goto three;
        }
        else if (number[0] == '1') {
            number.erase(number.begin());
            result += "одинадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '2') {
            number.erase(number.begin());
            result += "двенадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '3') {
            number.erase(number.begin());
            result += "тринадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '4') {
            number.erase(number.begin());
            result += "четырнадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '5') {
            number.erase(number.begin());
            result += "пятнадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '6') {
            number.erase(number.begin());
            result += "шестнадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '7') {
            number.erase(number.begin());
            result += "семнадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '8') {
            number.erase(number.begin());
            result += "восемнадцать тысяч "s;
            goto three;
        }
        else if (number[0] == '9') {
            number.erase(number.begin());
            result += "девятнадцать тысяч "s;
            goto three;
        }
        break;
    case 2:
        number.erase(number.begin());
        x = true;
        result += "двадцать "s;
        break;
    case 3:
        number.erase(number.begin());
        x = true;
        result += "тридцать "s;
        break;
    case 4:
        number.erase(number.begin());
        x = true;
        result += "сорок "s;
        break;
    case 5:
        number.erase(number.begin());
        x = true;
        result += "пятьдесят "s;
        break;
    case 6:
        number.erase(number.begin());
        x = true;
        result += "шестьдесят "s;
        break;
    case 7:
        number.erase(number.begin());
        x = true;
        result += "семьдесят "s;
        break;
    case 8:
        number.erase(number.begin());
        x = true;
        result += "восемьдесят "s;
        break;
    case 9:
        number.erase(number.begin());
        x = true;
        result += "девяносто "s;
        break;
    default:
        break;
    }
four:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        if (x) {
            result += "тысяч "s;
        }
        break;
    case 1:
        number.erase(number.begin());
        result += "одна тысяча "s;
        break;
    case 2:
        number.erase(number.begin());
        result += "две тысячи "s;
        break;
    case 3:
        number.erase(number.begin());
        result += "три тысячи "s;
        break;
    case 4:
        number.erase(number.begin());
        result += "четыре тысячи "s;
        break;
    case 5:
        number.erase(number.begin());
        result += "пять тысяч "s;
        break;
    case 6:
        number.erase(number.begin());
        result += "шесть тысяч "s;
        break;
    case 7:
        number.erase(number.begin());
        result += "семь тысяч "s;
        break;
    case 8:
        number.erase(number.begin());
        result += "восемь тысяч "s;
        break;
    case 9:
        number.erase(number.begin());
        result += "девять тысяч "s;
        break;
    default:
        break;
    }
three:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        break;
    case 1:
        number.erase(number.begin());
        result += "сто "s;
        break;
    case 2:
        number.erase(number.begin());
        result += "двести "s;
        break;
    case 3:
        number.erase(number.begin());
        result += "триста "s;
        break;
    case 4:
        number.erase(number.begin());
        result += "четыреста "s;
        break;
    case 5:
        number.erase(number.begin());
        result += "пятьсот "s;
        break;
    case 6:
        number.erase(number.begin());
        result += "шестьсот "s;
        break;
    case 7:
        number.erase(number.begin());
        result += "семьсот "s;
        break;
    case 8:
        number.erase(number.begin());
        result += "восемьсот "s;
        break;
    case 9:
        number.erase(number.begin());
        result += "девятьсот "s;
        break;
    default:
        break;
    }
two:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        break;
    case 1:
        number.erase(number.begin());
        if (number[0] == '0') {
            number.erase(number.begin());
            result += "десть рублей"s;
            goto end;
        }
        else if (number[0] == '1') {
            number.erase(number.begin());
            result += "одинадцать рублей"s;
            goto end;
        }
        else if (number[0] == '2') {
            number.erase(number.begin());
            result += "двенадцать рублей"s;
            goto end;
        }
        else if (number[0] == '3') {
            number.erase(number.begin());
            result += "тринадцать рублей"s;
            goto end;
        }
        else if (number[0] == '4') {
            number.erase(number.begin());
            result += "четырнадцать рублей"s;
            goto end;
        }
        else if (number[0] == '5') {
            number.erase(number.begin());
            result += "пятнадцать рублей"s;
            goto end;
        }
        else if (number[0] == '6') {
            number.erase(number.begin());
            result += "шестнадцать рублей"s;
            goto end;
        }
        else if (number[0] == '7') {
            number.erase(number.begin());
            result += "семнадцать рублей"s;
            goto end;
        }
        else if (number[0] == '8') {
            number.erase(number.begin());
            result += "восемнадцать рублей"s;
            goto end;
        }
        else if (number[0] == '9') {
            number.erase(number.begin());
            result += "девятнадцать рублей"s;
            goto end;
        }
        break;
    case 2:
        number.erase(number.begin());
        result += "двадцать "s;
        break;
    case 3:
        number.erase(number.begin());
        result += "тридцать "s;
        break;
    case 4:
        number.erase(number.begin());
        result += "сорок "s;
        break;
    case 5:
        number.erase(number.begin());
        result += "пятьдесят "s;
        break;
    case 6:
        number.erase(number.begin());
        result += "шестьдесят "s;
        break;
    case 7:
        number.erase(number.begin());
        result += "семьдесят "s;
        break;
    case 8:
        number.erase(number.begin());
        result += "восемьдесят "s;
        break;
    case 9:
        number.erase(number.begin());
        result += "девяносто "s;
        break;
    default:
        break;
    }
one:
    i = number[0];
    switch (stoi(i)) {
    case 0:
        number.erase(number.begin());
        result += "рублей"s;
        break;
    case 1:
        number.erase(number.begin());
        result += "один рубль"s;
        break;
    case 2:
        number.erase(number.begin());
        result += "два рубля"s;
        break;
    case 3:
        number.erase(number.begin());
        result += "три рубля"s;
        break;
    case 4:
        number.erase(number.begin());
        result += "четыре рубля"s;
        break;
    case 5:
        number.erase(number.begin());
        result += "пять рублей"s;
        break;
    case 6:
        number.erase(number.begin());
        result += "шесть рублей"s;
        break;
    case 7:
        number.erase(number.begin());
        result += "семь рублей"s;
        break;
    case 8:
        number.erase(number.begin());
        result += "восемь рублей"s;
        break;
    case 9:
        number.erase(number.begin());
        result += "девять рублей"s;
        break;
    default:
        break;
    }
end:
    return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите число, либо exit для выхода"s << endl;

    for (;;) {
        string number;
        cin >> number;
        if (number == "exit"s) {
            break;
        }
        cout << NumberToString(number) << endl;
    }
    return 0;
}