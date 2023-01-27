/*You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].

Return the array ans. Answers within 10-5 of the actual answer will be accepted.*/

//Solution here
vector <double> solTemp;
        solTemp.push_back(celsius+273.15);
        solTemp.push_back(9*celsius/5 + 32);
        return solTemp;
