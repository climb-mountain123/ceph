#ifndef __MOSDREAD_H
#define __MOSDREAD_H

#include "Message.h"

class MOSDRead : public Message {
 public:
  long tid;
  size_t len;
  off_t offset;
  object_t oid;
  MOSDRead(long tid, object_t oid, size_t len, off_t offset) :
	Message(MSG_OSD_READ) {
	this->tid = tid;
	this->oid = oid;
	this->len = len;
	this->offset = offset;
  }
};

#endif
