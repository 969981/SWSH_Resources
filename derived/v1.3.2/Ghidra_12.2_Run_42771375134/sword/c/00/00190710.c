/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190710; name: FUN_00190710
 */


void FUN_00190710(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = (ulong)param_1[2];
  if (param_1[2] != 0) {
    uVar2 = (ulong)*param_1;
    uVar6 = 0;
    do {
      if ((int)uVar2 != 0) {
        plVar4 = *(long **)(*(long *)(param_1 + 8) + uVar6 * 8);
        uVar1 = 0;
        do {
          (**(code **)(*plVar4 + 0x70))(plVar4);
          uVar2 = (ulong)*param_1;
          uVar1 = uVar1 + 1;
          plVar4 = plVar4 + 0x10a;
        } while (uVar1 < uVar2);
        uVar1 = (ulong)param_1[2];
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
    if ((int)uVar1 != 0) {
      lVar7 = 0;
      uVar6 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 8) + lVar7);
        if (lVar5 == 0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + uVar6 * 8);
        }
        else {
          plVar4 = (long *)FUN_00400d30();
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
          uVar1 = (ulong)param_1[2];
          puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
        *puVar3 = 0;
      } while (uVar6 < uVar1);
    }
  }
  lVar7 = *(long *)(param_1 + 4);
  param_1[2] = 0;
  if (lVar7 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar7);
  }
  lVar7 = *(long *)(param_1 + 8);
  param_1[4] = 0;
  param_1[5] = 0;
  if (lVar7 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar7);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}


