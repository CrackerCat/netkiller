#ifndef _NETKILLER_PROCESS_H
#define _NETKILLER_PROCESS_H

#include "util.h"

/**
 * PsSetCreateProcessNotifyRoutine ע��Ļص�����
 */
VOID CreateProcessNotifyRoutine(
		IN HANDLE ParentId,
		IN HANDLE ProcessId,
		IN BOOLEAN Create
		);

#endif	// _NETKILLER_PROCESS_H