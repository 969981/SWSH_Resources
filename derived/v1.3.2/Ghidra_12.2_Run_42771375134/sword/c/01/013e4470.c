/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e4470; name: FUN_013e4470
 */


void FUN_013e4470(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  lVar2 = (long)puVar1 - (long)puVar6;
  if (lVar2 != 0) {
    uVar5 = param_1[7];
    plVar3 = (long *)((long)puVar6 + (uVar5 >> 6 & 0x3fffffffffffff8));
    lVar4 = *plVar3 + (uVar5 & 0x1ff) * 8;
    while (*(long *)((long)puVar6 + (param_1[8] + uVar5 >> 6 & 0x3fffffffffffff8)) +
           (param_1[8] + uVar5 & 0x1ff) * 8 != lVar4) {
      lVar4 = lVar4 + 8;
      if (lVar4 - *plVar3 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar4 = *plVar3;
      }
    }
  }
  param_1[8] = 0;
  while (uVar5 = lVar2 >> 3, 2 < uVar5) {
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],*puVar6,0x1000,8);
    puVar1 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    lVar2 = (long)puVar1 - (long)puVar6;
  }
  if (uVar5 == 1) {
    lVar2 = 0x100;
  }
  else {
    if (uVar5 != 2) goto LAB_013e4560;
    lVar2 = 0x200;
  }
  param_1[7] = lVar2;
LAB_013e4560:
  if (puVar6 != puVar1) {
    do {
      puVar7 = puVar6 + 1;
      (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],*puVar6,0x1000,8);
      puVar6 = puVar7;
    } while (puVar1 != puVar7);
    lVar2 = param_1[2];
    if (lVar2 != param_1[1]) {
      param_1[2] = lVar2 + (~((lVar2 + -8) - param_1[1]) & 0xfffffffffffffff8U);
    }
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013e45d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar2,param_1[3] - lVar2,8);
  return;
}


