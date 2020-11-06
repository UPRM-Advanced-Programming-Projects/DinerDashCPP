 //
// Created by joshu on 11/3/2020.
//

#ifndef APGAMEENGINE_BASECOUNTER_H
#define APGAMEENGINE_BASECOUNTER_H
#include "Item.h"
#include "Entity.h"

class BaseCounter: public Entity {
    private:
        Item *item;

    public:
        BaseCounter(int x, int y, int width, int height, Item* item, ofImage sprite);
        Item* getItem();
        void showItem();

};
#endif //APGAMEENGINE_BASECOUNTER_H
