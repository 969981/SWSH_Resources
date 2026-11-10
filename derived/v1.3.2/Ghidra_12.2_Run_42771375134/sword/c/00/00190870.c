/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190870; name: FUN_00190870
 */


void FUN_00190870(uint *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = (ulong)param_1[2];
  if (param_1[2] != 0) {
    uVar3 = (ulong)*param_1;
    uVar5 = 0;
    do {
      if ((int)uVar3 != 0) {
        uVar2 = 0;
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 8) + uVar5 * 8);
        do {
          (**(code **)*puVar4)(puVar4);
          uVar3 = (ulong)*param_1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 9;
        } while (uVar2 < uVar3);
        uVar2 = (ulong)param_1[2];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
    if ((int)uVar2 != 0) {
      lVar7 = 0;
      uVar5 = 0;
      do {
        lVar6 = *(long *)(*(long *)(param_1 + 8) + lVar7);
        if (lVar6 == 0) {
          puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + uVar5 * 8);
        }
        else {
          plVar1 = (long *)FUN_00400d30();
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar6);
          uVar2 = (ulong)param_1[2];
          puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + lVar7);
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 8;
        *puVar4 = 0;
      } while (uVar5 < uVar2);
    }
  }
  lVar7 = *(long *)(param_1 + 4);
  param_1[2] = 0;
  if (lVar7 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7);
  }
  lVar7 = *(long *)(param_1 + 8);
  param_1[4] = 0;
  param_1[5] = 0;
  if (lVar7 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}


