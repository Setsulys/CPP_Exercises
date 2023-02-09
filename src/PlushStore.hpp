#pragma once
#include<string>
#include <optional>
#include "Plush.hpp"
class PlushStore
{
    private:
        std::string _name;
        int _wealth_amount;
        int _stock_size;
        int _debt_amount;
        int _experience;
    public:
        PlushStore(const std::string& name):
        _name {name},
        _wealth_amount {0},
        _stock_size {0},
        _debt_amount{0},
        _experience{0}
        {

        }
        std::string get_name() const
        {
            return _name;
        }

        int get_wealth_amount() const
        {
            return _wealth_amount;
        }

        int get_stock_size() const
        {
            return _stock_size;
        }

        void loan(int loans)
        {
            _wealth_amount += loans;
            _debt_amount += loans*1.1;
        }

        int get_debt_amount() const
        {
            return _debt_amount;
        }

        int make_plush(int amount)
        {
            if(_wealth_amount > 0)
            {
                _stock_size++;
                _experience++;
                _wealth_amount = amount > _wealth_amount ? 0 :  _wealth_amount - amount;
                
            }
            return amount + std::max(_experience,_experience*amount);
        }

        int get_experience() const
        {
            return _experience;
        }

        std::optional<Plush> buy(int value)
        {
            _wealth_amount+= value;
            return std::nullopt;
        }

};