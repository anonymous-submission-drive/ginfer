//
// Created by henrique on 02/11/2020.
//

#include <catch2/catch.hpp>
#include <gInfer/Grammar.h>

using namespace std;

vector<Symbol::Symbol> terms = {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true,false), Symbol::Symbol("2", 2, true, false)};

vector<vector<Symbol::Symbol>> words = {{Symbol::Symbol("1", 1, true, false), Symbol::Symbol("1", 1, true, false), Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},
                                {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true,false),  Symbol::Symbol("1", 1, true,false),  Symbol::Symbol("1", 1,true,false)},
                                {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1,true,false)}};

vector<vector<Symbol::Symbol>> words2 = {{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},
                                 {},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},
                                 {},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},
                                 {},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},
                                 {},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false), Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},{Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false)},

                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},

                                 {Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("0", 0, true, false)},
                                 {Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("1", 1, true, false),Symbol::Symbol("0", 0, true, false),Symbol::Symbol("1", 1, true, false)}};


SCENARIO( "Training N-Gram", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words2, g.n_gram, make_pair(0, 0));
    g.train(g.n_gram_count, 10, 1.5, 0, 10800);
    g.print_grammar();
}

SCENARIO( "Training BW", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words2, g.pfa, make_pair(0, 0));
    g.train(g.pfa_baum_welch, 10, 1.5, 0, 10800);
    g.print_grammar();
}

SCENARIO( "Training CGS", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words2, g.pfa, make_pair(0, 0));
    g.train(g.pfa_collapsed_gibbs_sample, 10, 1.5, 0, 10800);
    g.print_grammar();
}
SCENARIO( "Training alergia", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words2, g.pfa, make_pair(0, 0));
    g.train(g.pfa_alergia, 10, 1.5, 0, 10800);
    g.print_grammar();
}

SCENARIO( "Training IO", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words, g.pcfg, make_pair(0, 0));
    g.train(g.pcfg_inside_outside, 10, 1.5, 0, 10800);
    g.print_grammar();
}

SCENARIO( "Training MHPCFG", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words, g.pcfg, make_pair(0, 0));
    g.train(g.pcfg_metropolis_hastings, 10, 1.5, 0, 10800);
    g.print_grammar();
}

SCENARIO( "Training GSPCFG", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words, g.pcfg, make_pair(0, 0));
    g.train(g.pcfg_gibbs_sampling, 10, 1.5, 0, 10800);
    g.print_grammar();
}

SCENARIO( "Training MHPCSG", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words, g.pcsg, make_pair(1, 0));
    g.train(g.pcsg_metropolis_hastings, 10, 1.5, 0, 10800);
    g.print_grammar();
}

SCENARIO( "Training GSPCSG", "[testGrammar.cpp]" ) {
    Grammar::Grammar g = Grammar::Grammar(terms, 3, words, g.pcsg, make_pair(1, 0));
    g.train(g.pcsg_gibbs_sampling, 10, 1.5, 0, 10800);
    g.print_grammar();
}