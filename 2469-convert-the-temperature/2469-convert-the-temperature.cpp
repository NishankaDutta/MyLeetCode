class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin = 273.15 + celsius;
        double fahrenheit = (celsius * 9/5) + 32;
        ans.push_back(kelvin);
        ans.push_back(fahrenheit);
        return ans;
    }
};