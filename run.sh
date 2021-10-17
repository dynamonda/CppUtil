#!/bin/sh

TEST="test"

if [[ $# = 0 ]] ; then
    echo === main.cc実行 ==========
    g++ -std=c++17 main.cc
    ./a.out
elif [[ $1 = "test" ]] ; then
    echo === test実行 =============
    g++ -std=c++17 cpputil_test.cc
    ./a.out
else
    echo === run.sh 使用方法 =======
    echo "引数なし: main.ccをビルド&実行"
    echo "test : cpputil_test.ccをビルド&実行"
fi
