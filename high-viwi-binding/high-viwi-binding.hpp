#pragma once
#include <cstddef>
#include <systemd/sd-event.h>
extern "C"
{
	#define AFB_BINDING_VERSION 2
	#include <afb/afb-binding.h>
};

	void onEvent(const char *event, struct json_object *object);
	int init_service();
	int ticked(sd_event_source *source, uint64_t t, void *data);
