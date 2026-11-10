/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00893b80; name: FUN_00893b80
 */


long FUN_00893b80(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long local_40;
  ulong local_38;
  
  local_38 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  uVar6 = *(ulong *)(param_1 + 0x60);
  plVar2 = (long *)(param_1 + 0x58);
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar7 & uVar6) == 0) {
      uVar4 = uVar7 & param_2;
      plVar5 = *(long **)(*plVar2 + uVar4 * 8);
    }
    else {
      uVar4 = param_2;
      if (uVar6 <= param_2) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_2 / uVar6;
        }
        uVar4 = param_2 - uVar4 * uVar6;
      }
      plVar5 = *(long **)(*plVar2 + uVar4 * 8);
    }
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((uVar7 & uVar6) == 0) {
        do {
          uVar6 = plVar5[1];
          if (uVar6 != param_2 && (uVar6 & uVar7) != uVar4) break;
          if ((uVar6 == param_2) && (plVar5[2] == param_2)) goto LAB_00893ce0;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar5[1];
          if (uVar7 == param_2) {
            if (plVar5[2] == param_2) goto LAB_00893ce0;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar4) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  if ((param_3 & 1) == 0) {
    lVar8 = -1;
  }
  else {
    lVar8 = *(long *)PTR_DAT_027175b0;
    *(long *)PTR_DAT_027175b0 = lVar8 + 1;
    local_40 = lVar8;
    plVar2 = (long *)FUN_00893f40(plVar2,&local_38);
    uVar6 = local_38;
    *plVar2 = lVar8;
    puVar3 = (ulong *)FUN_008941e0(param_1 + 0xb0,&local_40);
    *puVar3 = uVar6;
    lVar8 = local_40;
  }
LAB_00893cc0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  return lVar8;
LAB_00893ce0:
  lVar8 = plVar5[3];
  goto LAB_00893cc0;
}


