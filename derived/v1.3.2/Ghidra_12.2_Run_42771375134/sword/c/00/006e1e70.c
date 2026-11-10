/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e1e70; name: FUN_006e1e70
 */


void FUN_006e1e70(long param_1,long *param_2,int param_3)

{
  size_t sVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *__dest;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *local_68;
  
  local_68 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x110));
  plVar3 = *(long **)(param_1 + 0xe0);
  plVar6 = *(long **)(param_1 + 0xe8);
  if (plVar3 == plVar6) {
    plVar8 = *(long **)(param_1 + 0xb8);
    *(long **)(param_1 + 0xe8) = plVar3;
    plVar3 = *(long **)(param_1 + 0xb0);
    if (plVar3 != plVar8) goto LAB_006e1f44;
LAB_006e1f90:
    if (plVar3 != plVar8) goto LAB_006e20cc;
  }
  else {
    plVar8 = *(long **)(param_1 + 0xb8);
    do {
      plVar7 = *(long **)(param_1 + 0xb0);
      if (plVar7 != plVar8) {
        if (*plVar7 != *plVar3) {
          do {
            plVar7 = plVar7 + 1;
            if (plVar8 == plVar7) goto LAB_006e1f24;
          } while (*plVar7 != *plVar3);
        }
        if (plVar7 != plVar8) {
          sVar1 = (long)plVar8 - (long)(plVar7 + 1);
          if (sVar1 != 0) {
            memmove(plVar7,plVar7 + 1,sVar1);
          }
          plVar8 = plVar7 + ((long)sVar1 >> 3);
          *(long **)(param_1 + 0xb8) = plVar8;
        }
      }
LAB_006e1f24:
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar6);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
    plVar3 = *(long **)(param_1 + 0xb0);
    if (plVar3 == plVar8) goto LAB_006e1f90;
LAB_006e1f44:
    if ((long *)*plVar3 == param_2) goto LAB_006e1f90;
    do {
      plVar3 = plVar3 + 1;
      if (plVar8 == plVar3) goto LAB_006e1f98;
    } while ((long *)*plVar3 != param_2);
    if (plVar3 != plVar8) goto LAB_006e20cc;
  }
LAB_006e1f98:
  plVar3 = (long *)(param_1 + 0xb8);
  if (plVar8 == *(long **)(param_1 + 0xc0)) {
    FUN_006e2bf0((undefined8 *)(param_1 + 0xb0),&local_68);
    if (param_3 == 2) goto LAB_006e1ffc;
LAB_006e2028:
    if ((param_3 == 1) && (*(char *)(param_1 + 0x170) != '\0')) {
      pcVar4 = *(code **)*local_68;
      goto LAB_006e2044;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 200);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *plVar8 = (long)local_68;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *plVar3 = *plVar3 + 8;
    if (param_3 != 2) goto LAB_006e2028;
LAB_006e1ffc:
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_006e2028;
    pcVar4 = *(code **)(*local_68 + 8);
LAB_006e2044:
    (*pcVar4)();
  }
  plVar6 = *(long **)(param_1 + 0xe0);
  plVar8 = *(long **)(param_1 + 0xe8);
  if (plVar6 != plVar8) {
    plVar7 = (long *)*plVar3;
    do {
      __dest = *(long **)(param_1 + 0xb0);
      if (__dest != plVar7) {
        if (*__dest != *plVar6) {
          do {
            __dest = __dest + 1;
            if (plVar7 == __dest) goto LAB_006e20b8;
          } while (*__dest != *plVar6);
        }
        if (__dest != plVar7) {
          sVar1 = (long)plVar7 - (long)(__dest + 1);
          if (sVar1 != 0) {
            memmove(__dest,__dest + 1,sVar1);
          }
          plVar7 = __dest + ((long)sVar1 >> 3);
          *plVar3 = (long)plVar7;
        }
      }
LAB_006e20b8:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar8);
    plVar6 = *(long **)(param_1 + 0xe0);
  }
  *(long **)(param_1 + 0xe8) = plVar6;
LAB_006e20cc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x110));
  return;
}


