#pragma once
#include <string>
#include <hiredis/hiredis.h>
class DistLock
{
public:
	static DistLock& Inst();
	~DistLock() = default;
	std::string acquireLock(redisContext* context, const std::string& lockName,
		int lockTimeout, int acquireTimeout);

	bool releaseLock(redisContext* context, const std::string& lockName,
		const std::string& identifier);
private:
	DistLock() = default;
};

