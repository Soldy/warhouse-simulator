#include <vector>

class TrunkClass { 
  private: 
      std::map<int, int> db;
      Dimension_struct dimension;
  public:
      int remove(
          int id,
          int quantity
      ){
          if(1 > quantity)
              return 0;
          if(!this->db.contains(id))
              return 0;
          if(this->db[id] >= quantity){
              this->db[id] = this->db[id]-quantity;
              return quantity;
          }
          int out = this->db[id];
          this->db[id] = 0;
          return out;
      };
      void add(
          int id,
          int quantity
      ){
          if(1 > quantity)
              return ;
          if(this->db.contains(id)){
              this->db[id] = this->db[id]+quantity;
          }else{
              this->db[id] = quantity;
          }
      };
      int masses(){
          return productDB->masses(this->db);
      };
}
