/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776cc0; name: FUN_00776cc0
 */


undefined4 FUN_00776cc0(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x22));
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
    uVar2 = (ulong)param_2;
    if ((uVar6 & uVar4) == 0) {
      uVar3 = uVar6 & uVar2;
      plVar5 = *(long **)(*param_1 + uVar3 * 8);
    }
    else {
      uVar3 = uVar2;
      if (uVar4 <= uVar2) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar2 / uVar4;
        }
        uVar3 = uVar2 - uVar3 * uVar4;
      }
      plVar5 = *(long **)(*param_1 + uVar3 * 8);
    }
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((uVar6 & uVar4) == 0) {
        do {
          uVar4 = plVar5[1];
          if (uVar4 != uVar2 && (uVar4 & uVar6) != uVar3) break;
          if ((uVar4 == uVar2) && (*(uint *)(plVar5 + 2) == param_2)) goto LAB_00776dcc;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar2) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_00776dcc;
          }
          else {
            if (uVar4 <= uVar6) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar1 * uVar4;
            }
            if (uVar6 != uVar3) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  uVar7 = 0;
LAB_00776db0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x22));
  return uVar7;
LAB_00776dcc:
  uVar7 = *(undefined4 *)((long)plVar5 + 0x14);
  goto LAB_00776db0;
}


