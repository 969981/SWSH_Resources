/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044aa40; name: FUN_0044aa40
 */


void FUN_0044aa40(long *param_1,int param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar3 = (int)param_3 + param_2;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar3 / uVar4;
    }
    plVar2 = (long *)(*param_1 + (ulong)(uVar3 - uVar5 * uVar4) * 8);
    lVar7 = *plVar2;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        if ((*(int *)(lVar7 + 0x10) == param_2) && (*(long *)(lVar7 + 0x18) == param_3)) {
          if (lVar6 != 0) {
            plVar2 = (long *)(lVar6 + 0x20);
          }
          *plVar2 = *(long *)(lVar7 + 0x20);
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          break;
        }
        plVar1 = (long *)(lVar7 + 0x20);
        lVar6 = lVar7;
        lVar7 = *plVar1;
      } while (*plVar1 != 0);
    }
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  return;
}


