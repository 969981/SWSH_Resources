/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f0aa0; name: FUN_004f0aa0
 */


void FUN_004f0aa0(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((0 < *(int *)((long)param_2 + 4)) && (0 < (int)*param_2)) {
    lVar6 = 0;
    plVar5 = param_2 + 4;
    do {
      FUN_004f0aa0(param_1,*plVar5);
      lVar6 = lVar6 + 1;
      plVar5 = plVar5 + 5;
    } while (lVar6 < (int)*param_2);
  }
  plVar5 = (long *)(param_1 + 0x18);
  if ((long *)*plVar5 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)0x0;
    plVar2 = (long *)*plVar5;
    do {
      plVar3 = plVar2;
      if ((plVar3 <= param_2) && (param_2 < plVar3 + 0x1ec)) goto LAB_004f0b34;
      plVar4 = plVar3;
      plVar2 = (long *)plVar3[0x1ec];
    } while ((long *)plVar3[0x1ec] != (long *)0x0);
  }
  plVar3 = (long *)0x0;
LAB_004f0b34:
  if (plVar3[0x1ee] == 0) {
    plVar3[0x1ee] = (long)param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = plVar3[0x1ee];
    plVar3[0x1ee] = (long)param_2;
  }
  iVar1 = (int)plVar3[0x1ed] + 1;
  *(int *)(plVar3 + 0x1ed) = iVar1;
  if (iVar1 != 0xc) {
    return;
  }
  if ((long *)*plVar5 != plVar3) {
    plVar5 = plVar4 + 0x1ec;
  }
  *plVar5 = plVar3[0x1ec];
  FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
  return;
}


