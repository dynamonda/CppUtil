// Copyright 2021 dynamonda

#ifndef CPPUTIL_HPP_
#define CPPUTIL_HPP_

#include <cmath>
#include <string>
#include <algorithm>

namespace util {
    /*!
     * @brief 素数判定
     */
    bool IsPrime(int num) {
        if (num < 2) return false;
        else if (num == 2) return true;
        else if (num % 2 == 0) return false;    // 偶数はあらかじめ除く

        double sqrtNum = sqrt(num);
        for (int i = 3; i <= sqrtNum; i += 2) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    /*!
     *  @brief  文字列置換
     *          util::Replace("12342345", "234", "b") == "1bb5"
     *  @param str 対象の文字列
     *  @param target 置換対象の文字列
     *  @param to targetから置き換える文字列
     *  @return 置換された文字列実体
     */
    std::string Replace(const std::string &str, const std::string &target,
        const std::string &to) {
        std::string str2(str);
        std::string::iterator itr = str2.begin();

        while (itr != str2.end()) {
            auto find_itr
                = find_end(itr, str2.end(), target.begin(), target.end());
            if (find_itr != str2.end()) {
                str2.replace(find_itr, find_itr+target.size(), to);
            }
            itr++;
        }
        return str2;
    }
};  // namespace util

#endif  // CPPUTIL_HPP_
