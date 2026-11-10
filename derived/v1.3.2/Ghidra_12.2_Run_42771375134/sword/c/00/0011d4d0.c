/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d4d0; name: FUN_0011d4d0
 */


void FUN_0011d4d0(uint *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = (ulong)param_1[2];
  if (param_1[2] != 0) {
    uVar3 = (ulong)*param_1;
    uVar7 = 0;
    do {
      if ((int)uVar3 != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 8) + uVar7 * 8);
        uVar2 = 0;
        do {
          FUN_00120390(lVar5);
          uVar3 = (ulong)*param_1;
          uVar2 = uVar2 + 1;
          lVar5 = lVar5 + 0x70;
        } while (uVar2 < uVar3);
        uVar2 = (ulong)param_1[2];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
    if ((int)uVar2 != 0) {
      lVar5 = 0;
      uVar7 = 0;
      do {
        lVar6 = *(long *)(*(long *)(param_1 + 8) + lVar5);
        if (lVar6 == 0) {
          puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + uVar7 * 8);
        }
        else {
          plVar1 = (long *)FUN_00400d30();
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar6);
          uVar2 = (ulong)param_1[2];
          puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + lVar5);
        }
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 8;
        *puVar4 = 0;
      } while (uVar7 < uVar2);
    }
  }
  lVar5 = *(long *)(param_1 + 4);
  param_1[2] = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5);
  }
  lVar5 = *(long *)(param_1 + 8);
  param_1[4] = 0;
  param_1[5] = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}


