#include <map>

class ProductsClass {
  private:
    int serial = 0;
    std::map<int, Product_struct> db;
  public:
    int create (
        Product_struct input_
    ){
        return id;
    };
    Product_struct get (
        int id
    ){
        if(this->db.contains(id))
            return this->db[id];
        Product_struct out;
        return out;
    };
    int masses (
        std::map<int, int> list
    ){
        int out = 0;
        for (const auto& [key, value] : list) {
            out += this->db[key].mass * value;
        }
        return out;
    };
};
