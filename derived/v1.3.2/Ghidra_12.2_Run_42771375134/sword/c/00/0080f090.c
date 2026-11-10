/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080f090; name: FUN_0080f090
 */


long * FUN_0080f090(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 == (long *)0x0) {
LAB_0080f0e4:
    if (plVar1 != (long *)0x0) {
      if (param_2 <= (ulong)(plVar1[3] - plVar1[2])) {
        lVar4 = tpidr_el0;
        *(long **)(lVar4 + 0x18) = plVar1;
        *(undefined8 *)(lVar4 + 0x10) = *param_1;
        param_1[2] = plVar1;
        lVar4 = plVar1[2];
        plVar1[2] = lVar4 + param_2;
        return (long *)((long)plVar1 + lVar4);
      }
      uVar3 = plVar1[3] * 2;
      uVar2 = param_1[8];
      if (uVar3 <= (ulong)param_1[8]) {
        uVar2 = uVar3;
      }
      goto LAB_0080f110;
    }
  }
  else {
    lVar4 = tpidr_el0;
    do {
      if (*plVar1 == lVar4 + 0x10) goto LAB_0080f0e4;
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != (long *)0x0);
  }
  uVar2 = param_1[7];
LAB_0080f110:
  uVar3 = param_2 + 0x20;
  if (param_2 <= uVar2 - 0x20) {
    uVar3 = uVar2;
  }
  plVar1 = (long *)(*(code *)param_1[0xb])(uVar3);
  plVar1[2] = param_2 + 0x20;
  plVar1[3] = uVar3;
  lVar4 = tpidr_el0;
  *plVar1 = lVar4 + 0x10;
  FUN_00801420(param_1 + 5);
  plVar1[1] = param_1[1];
  param_1[1] = plVar1;
  if (plVar1[3] != plVar1[2]) {
    param_1[2] = plVar1;
  }
  FUN_008014c0(param_1 + 5);
  *(long **)(lVar4 + 0x18) = plVar1;
  *(undefined8 *)(lVar4 + 0x10) = *param_1;
  return plVar1 + 4;
}


