/**
 * @file       Denominations.h
 *
 * @brief      Denomination info for the Zerocoin library.
 *
 * @copyright  Copyright 2017 Delectrum Developers
 * @license    This project is released under the MIT license.
 **/

#ifndef DENOMINATIONS_H_
#define DENOMINATIONS_H_

#include <cstdint>
#include <string>
#include <vector>

namespace libzerocoin {

enum  CoinDenomination {
    ZQ_ERROR = 0,
    ZQ_ONE = 1,
    ZQ_TEN = 10,
    ZQ_ONE_HUNDRED = 100,
    ZQ_ONE_THOUSAND = 1000,
    ZQ_TEN_THOUSAND = 10000,
    ZQ_ONE_HUNDRED_THOUSAND = 100000,
    ZQ_ONE_MILLION = 1000000,
    ZQ_TEN_MILLION = 10000000
};

// Order is with the Smallest Denomination first and is important for a particular routine that this order is maintained
const std::vector<CoinDenomination> zerocoinDenomList = {ZQ_ONE, ZQ_TEN, ZQ_ONE_HUNDRED, ZQ_ONE_THOUSAND, ZQ_TEN_THOUSAND, ZQ_ONE_HUNDRED_THOUSAND, ZQ_ONE_MILLION, ZQ_TEN_MILLION};
// These are the max number you'd need at any one Denomination before moving to the higher denomination. Last number is 4, since it's the max number of
// possible spends at the moment    /
const std::vector<int> maxCoinsAtDenom   = {4, 1, 4, 1, 4, 1, 4, 4};

int64_t ZerocoinDenominationToInt(const CoinDenomination& denomination);
int64_t ZerocoinDenominationToAmount(const CoinDenomination& denomination);
CoinDenomination IntToZerocoinDenomination(int64_t amount);
CoinDenomination AmountToZerocoinDenomination(int64_t amount);
CoinDenomination AmountToClosestDenomination(int64_t nAmount, int64_t& nRemaining);
CoinDenomination get_denomination(std::string denomAmount);
int64_t get_amount(std::string denomAmount);

} /* namespace libzerocoin */
#endif /* DENOMINATIONS_H_ */
