/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498a30; name: FUN_00498a30
 */


void FUN_00498a30(undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 == 0) {
    return;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (uint)param_3 / uVar1;
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x30) + (ulong)((uint)param_3 - uVar3 * uVar1) * 8);
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return;
    }
    if (plVar7[1] == param_3) break;
    plVar7 = (long *)*plVar7;
  }
  lVar4 = FUN_00498330(plVar7[2]);
  if (lVar4 == 0) {
    return;
  }
  if (param_4 == -1) {
    FUN_0045a840(param_1,lVar4);
    lVar6 = plVar7[2];
    iVar2 = *(int *)(lVar6 + 0x40);
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x38);
    if (uVar1 != 0) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uint)param_4 / uVar1;
      }
      for (plVar5 = *(long **)(*(long *)(param_2 + 0x30) +
                              (ulong)((uint)param_4 - uVar3 * uVar1) * 8); plVar5 != (long *)0x0;
          plVar5 = (long *)*plVar5) {
        if (plVar5[1] == param_4) {
          FUN_0045b180(plVar5[2]);
          break;
        }
      }
    }
    FUN_0045a240(param_1,lVar4,param_4);
    lVar6 = plVar7[2];
    iVar2 = *(int *)(lVar6 + 0x40);
  }
  if ((iVar2 == 0) || (lVar6 = **(long **)(lVar6 + 0x38), lVar6 == 0)) {
    return;
  }
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  FUN_00498470(lVar6 + 0x20,lVar4 + 0xa0);
  return;
}


