#pragma once
class Plush
{
    private:
        int _cost;
    public:
        Plush()
        : _cost {10}
        {

        }
        Plush(int plush_cost)
        :_cost {plush_cost}
        {

        }
        int get_cost() const
        {
            return _cost;
        }
        
        void set_cost(int value)
        {
            _cost = value;
        }
};