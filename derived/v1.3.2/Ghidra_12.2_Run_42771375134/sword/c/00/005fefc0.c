/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fefc0; name: FUN_005fefc0
 */


long * FUN_005fefc0(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1[6] == 0 || (ulong)param_1[0x23] <= param_2) {
    uVar2 = param_1[0x23] * 2;
    if (uVar2 < param_2 + 1) {
      uVar2 = param_2 + 1;
    }
    (**(code **)(*param_1 + 0x28))(param_1,uVar2);
    if (param_1[6] == 0) {
      return (long *)0x0;
    }
  }
  uVar3 = param_1[0x22];
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = param_2 / uVar3;
  }
  lVar4 = param_2 - uVar2 * uVar3;
  lVar5 = *(long *)(*(long *)(param_1[0x11] + uVar2 * 8) + 0x38);
  plVar1 = (long *)(lVar5 + lVar4 * 0x28);
  if ((char)plVar1[3] != '\0') {
    return (long *)0x0;
  }
  lVar6 = *plVar1;
  plVar8 = *(long **)(lVar5 + lVar4 * 0x28 + 8);
  if (lVar6 == 0) {
    plVar7 = param_1 + 4;
    if ((long *)*plVar7 != plVar1 || (long *)*plVar7 == (long *)0x0) goto LAB_005ff0d4;
    if (plVar8 == (long *)0x0) {
      *plVar7 = 0;
      param_1[5] = 0;
    }
    else {
      *plVar8 = 0;
      *plVar7 = (long)plVar8;
    }
  }
  else if (plVar8 == (long *)0x0) {
    if ((long *)param_1[5] != plVar1 || (long *)param_1[5] == (long *)0x0) goto LAB_005ff0d4;
    *(undefined8 *)(lVar6 + 8) = 0;
    param_1[5] = lVar6;
  }
  else {
    *plVar8 = lVar6;
    *(long **)(lVar6 + 8) = plVar8;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  param_1[6] = param_1[6] + -1;
LAB_005ff0d4:
  if (param_1[9] == 0) {
    param_1[9] = (long)plVar1;
  }
  else {
    *(long **)(param_1[10] + 8) = plVar1;
    *plVar1 = param_1[10];
  }
  param_1[10] = (long)plVar1;
  param_1[0xb] = param_1[0xb] + 1;
  *(char *)(plVar1 + 3) = '\x01';
  uVar2 = 0;
  if (param_1[0x22] != 0) {
    uVar2 = *(ulong *)(lVar5 + lVar4 * 0x28 + 0x10) / (ulong)param_1[0x22];
  }
  lVar4 = *(long *)(param_1[0x11] + uVar2 * 8);
  *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
  return plVar1;
}


