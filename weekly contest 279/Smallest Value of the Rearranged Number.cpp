class Solution {
public:
   long long smallestNumber(long long num) {
    auto s = to_string(num);
    if (s.size() == 1 || s[0] == '-') {
        sort(begin(s) + 1, end(s), greater<int>());
    } else {
        sort(begin(s), end(s));
        swap(s[0], s[s.find_first_not_of('0')]); // find_first_not_of is C++ inbuilt function which return first not equal char
        
    }
    return stoll(s);// here stoll measn stoll convert string to long long
}
};
