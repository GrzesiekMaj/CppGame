#pragma once

#define LOG_ERROR(message) \
printf("ERROR:%s:%d:%s\n", __FILE__, __LINE__, message);