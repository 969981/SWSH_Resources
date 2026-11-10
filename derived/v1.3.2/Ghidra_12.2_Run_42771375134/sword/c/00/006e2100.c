/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e2100; name: FUN_006e2100
 */


void FUN_006e2100(long param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *__dest;
  long *plVar8;
  long local_48;
  
  pMVar1 = (MutexType *)(param_1 + 0x110);
  local_48 = param_2;
  uVar4 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
  if ((uVar4 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0xe8);
    if (plVar6 == *(long **)(param_1 + 0xf0)) {
      FUN_006e2bf0(param_1 + 0xe0,&local_48);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0xf8);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *plVar6 = local_48;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 8;
    }
    return;
  }
  nn::os::LockMutex(pMVar1);
  plVar8 = *(long **)(param_1 + 0xb0);
  plVar6 = *(long **)(param_1 + 0xb8);
  if ((plVar8 != plVar6) && (*plVar8 != param_2)) {
    do {
      plVar8 = plVar8 + 1;
      if (plVar6 == plVar8) goto LAB_006e21f8;
    } while (*plVar8 != param_2);
  }
  if (plVar8 != plVar6) {
    sVar3 = (long)plVar6 - (long)(plVar8 + 1);
    if (sVar3 != 0) {
      memmove(plVar8,plVar8 + 1,sVar3);
    }
    plVar6 = plVar8 + ((long)sVar3 >> 3);
    *(long **)(param_1 + 0xb8) = plVar6;
  }
LAB_006e21f8:
  plVar8 = *(long **)(param_1 + 0xe0);
  plVar2 = *(long **)(param_1 + 0xe8);
  if (plVar8 != plVar2) {
    do {
      __dest = *(long **)(param_1 + 0xb0);
      if (__dest != plVar6) {
        if (*__dest != *plVar8) {
          do {
            __dest = __dest + 1;
            if (plVar6 == __dest) goto LAB_006e2264;
          } while (*__dest != *plVar8);
        }
        if (__dest != plVar6) {
          sVar3 = (long)plVar6 - (long)(__dest + 1);
          if (sVar3 != 0) {
            memmove(__dest,__dest + 1,sVar3);
          }
          plVar6 = __dest + ((long)sVar3 >> 3);
          *(long **)(param_1 + 0xb8) = plVar6;
        }
      }
LAB_006e2264:
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
    plVar8 = *(long **)(param_1 + 0xe0);
  }
  *(long **)(param_1 + 0xe8) = plVar8;
  nn::os::UnlockMutex(pMVar1);
  return;
}


