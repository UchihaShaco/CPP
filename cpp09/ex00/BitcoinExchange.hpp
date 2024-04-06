#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <cstdlib>

#define DATABASE_FILENAME "data.csv"

class BitcoinExchange
{
public:
    BitcoinExchange();
    ~BitcoinExchange();

    double getExchangeRate(const std::string &date) const;

private:
    std::ifstream _databaseFile;
    std::map<unsigned int, double> _database;
};
