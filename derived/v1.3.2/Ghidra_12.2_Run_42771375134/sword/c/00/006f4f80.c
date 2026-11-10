/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f4f80; name: FUN_006f4f80
 */


void FUN_006f4f80(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)param_1[2];
  uVar2 = (long)puVar7 - (long)puVar8 >> 3;
  if ((long)puVar7 - (long)puVar8 == 0) {
    param_1[8] = 0;
  }
  else {
    uVar4 = param_1[7];
    uVar1 = param_1[8] + uVar4;
    lVar3 = puVar8[uVar4 / 0x38] + (uVar4 % 0x38) * 0x48;
    lVar5 = puVar8[uVar1 / 0x38] + (uVar1 % 0x38) * 0x48;
    if (lVar5 != lVar3) {
      plVar6 = puVar8 + uVar4 / 0x38;
      do {
        lVar3 = lVar3 + 0x48;
        if (lVar3 - *plVar6 == 0xfc0) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
        }
      } while (lVar5 != lVar3);
    }
    param_1[8] = 0;
    while (2 < uVar2) {
      (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],*puVar8,0xfc0,8);
      puVar7 = (undefined8 *)param_1[2];
      puVar8 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar8;
      uVar2 = (long)puVar7 - (long)puVar8 >> 3;
    }
  }
  if (uVar2 == 1) {
    lVar3 = 0x1c;
  }
  else {
    if (uVar2 != 2) goto LAB_006f509c;
    lVar3 = 0x38;
  }
  param_1[7] = lVar3;
LAB_006f509c:
  if (puVar8 != puVar7) {
    do {
      puVar9 = puVar8 + 1;
      (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],*puVar8,0xfc0,8);
      puVar8 = puVar9;
    } while (puVar7 != puVar9);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + (~((lVar3 + -8) - param_1[1]) & 0xfffffffffffffff8U);
    }
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f5114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar3,param_1[3] - lVar3,8);
  return;
}


