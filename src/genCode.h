#pragma once
#include "geom.h"
#include <cstdint>



class Player
{
public:
	void* vtable;
	Vector3 o; //0x0004
	Vector3 velocity; //0x0010
	Vector3 N00000055; //0x001C
	Vector3 pos; //0x0028
	float yaw; //0x0034
	float pitch; //0x0038
	float roll; //0x003C
	char pad_0040[172]; //0x0040
	uint32_t health; //0x00EC
	char pad_00F0[236]; //0x00F0
	int32_t kills; //0x01DC
	char pad_01E0[300]; //0x01E0
	int32_t team; //0x030C
	char pad_0310[48]; //0x0310

}; //Size: 0x0240

class EntityList
{
public:
	Player* players[64];
};
