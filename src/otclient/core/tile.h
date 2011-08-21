#ifndef TILE_H
#define TILE_H

#include "declarations.h"
#include <framework/luascript/luaobject.h>

class Tile : public LuaObject
{
public:
    Tile();

    void draw(int x, int y);

    void addThing(ThingPtr thing, uint8 stackpos);
    ThingPtr getThing(uint8 stackpos);
    void removeThing(uint8 stackpos);
    void removeThingByPtr(ThingPtr thing);

    void clean();

    bool hasGround() { return (!!m_ground); }

    int getStackSize();

    std::deque<ThingPtr> getCreatures() { return m_creatures; }
    int getDrawNextOffset() { return m_drawNextOffset; }

private:
    ThingPtr m_ground;
    std::deque<ThingPtr> m_itemsBottom;
    std::deque<ThingPtr> m_creatures;
    std::deque<ThingPtr> m_itemsTop;
    std::deque<ThingPtr> m_effects;

    int m_drawNextOffset;
};

#endif