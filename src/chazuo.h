//
// Created by zzzzzzzzzzz on 2022/10/26.
//

#ifndef ANZUOWANJU_CHAZUO_H
#define ANZUOWANJU_CHAZUO_H

#include "mi_home_device.h"

class chazuo___ : public MiHomeDevice {
	MiHomeDevice::PropertyId p_[1];
public:
	chazuo___() {
		p_[0].did = "493823631";
		p_[0].siid = 2;
		p_[0].piid = 1;
		property_list_ = p_;
	}
	int c__(int i) {
		bool b;
		switch (i) {
			case 0:
			case 1:
				b = i;
				break;
			default: {
				bool b2;
				GetProperty(0, &b2);
				b = !b2;
				break; }
		}
		return SetProperty(0, &b);
	}
};
#endif //ANZUOWANJU_CHAZUO_H

