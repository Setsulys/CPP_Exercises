#pragma once
#include <string>
class Kid
{
    private:
        std::string _name;
        int _money;
    
    public:
        Kid(const std::string& name, int money):
        _name {name},
        _money {money}
        {

        }
        std::string get_name() const
        {
            return _name;
        }
        
        int get_money() const
        {
            return _money;
        }


};

std::ostream& operator<<(std::ostream& stream, const Kid& kid)
{
    return stream << kid.get_name() + " has " + std::to_string(kid.get_money()) + " euros.";
}