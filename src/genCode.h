#pragma once
class Vector3
{
public:
	float x;
	float z;
	float y;

};

class Player
{
public:
	Vector3 N00000053; //0x0004
	Vector3 velocity; //0x0010
	Vector3 N00000055; //0x001C
	Vector3 pos; //0x0028
	float yaw; //0x0034
	float pitch; //0x0038
	float roll; //0x003C
	char pad_0040[256]; //0x0040

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0140