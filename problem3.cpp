#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int freq[256] = {0};  // stores count of characters
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        freq[s[right]]++;  // include current character

        // if duplicate found
        while (freq[s[right]] > 1) {
            freq[s[left]]--;  // remove from left
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}