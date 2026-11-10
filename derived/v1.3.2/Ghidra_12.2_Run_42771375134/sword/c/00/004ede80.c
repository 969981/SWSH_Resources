/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ede80; name: FUN_004ede80
 */


undefined8 FUN_004ede80(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    return 0xf;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)param_2 / uVar2;
  }
  uVar2 = (uint)param_2 - uVar3 * uVar2;
  plVar6 = *(long **)(*param_1 + (ulong)uVar2 * 8);
  if (plVar6 == (long *)0x0) {
    return 0xf;
  }
  plVar5 = (long *)0x0;
  while (plVar7 = plVar6, plVar7[7] != param_2) {
    plVar6 = (long *)plVar7[8];
    plVar5 = plVar7;
    if ((long *)plVar7[8] == (long *)0x0) {
      return 0xf;
    }
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(*param_1 + (ulong)uVar2 * 8);
  }
  else {
    plVar5 = plVar5 + 8;
  }
  *plVar5 = plVar7[8];
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  FUN_004e83f0(plVar7);
  param_1 = param_1 + 0xe;
  if ((long *)*param_1 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)0x0;
    plVar5 = (long *)*param_1;
    do {
      plVar4 = plVar5;
      if ((plVar4 <= plVar7) && (plVar7 < plVar4 + 0x340)) goto LAB_004edf70;
      plVar6 = plVar4;
      plVar5 = (long *)plVar4[0x340];
    } while ((long *)plVar4[0x340] != (long *)0x0);
  }
  plVar4 = (long *)0x0;
LAB_004edf70:
  if (plVar4[0x342] == 0) {
    plVar4[0x342] = (long)plVar7;
    *plVar7 = 0;
  }
  else {
    *plVar7 = plVar4[0x342];
    plVar4[0x342] = (long)plVar7;
  }
  iVar1 = (int)plVar4[0x341] + 1;
  *(int *)(plVar4 + 0x341) = iVar1;
  if (iVar1 == 0x40) {
    if ((long *)*param_1 != plVar4) {
      param_1 = plVar6 + 0x340;
    }
    *param_1 = plVar4[0x340];
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
  }
  return 1;
}


