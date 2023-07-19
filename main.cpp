#include "stdafx.h"
#include "log_process.h"
#include "chazuo.h"

extern "C" int chazuo__(const char* ip_addr, const char* token_ascii_cstr, int i) {
	chazuo___ hd;
	int ret = hd.Init(ip_addr, token_ascii_cstr);
	if(ret == 0)
		return ret;
	return hd.c__(i);
}
