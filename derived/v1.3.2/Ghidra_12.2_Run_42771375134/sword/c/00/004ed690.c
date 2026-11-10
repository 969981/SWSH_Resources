/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ed690; name: FUN_004ed690
 */


void FUN_004ed690(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2[0xe] != 0) {
    *(undefined4 *)(param_2 + 0xf) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    param_2[0xe] = 0;
    *(undefined4 *)((long)param_2 + 0x7c) = 0;
  }
  FUN_004e8660(param_2);
  if ((long *)*param_1 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)0x0;
    plVar2 = (long *)*param_1;
    do {
      plVar3 = plVar2;
      if ((plVar3 <= param_2) && (param_2 < plVar3 + 0x500)) goto LAB_004ed714;
      plVar4 = plVar3;
      plVar2 = (long *)plVar3[0x500];
    } while ((long *)plVar3[0x500] != (long *)0x0);
  }
  plVar3 = (long *)0x0;
LAB_004ed714:
  if (plVar3[0x502] == 0) {
    plVar3[0x502] = (long)param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = plVar3[0x502];
    plVar3[0x502] = (long)param_2;
  }
  iVar1 = (int)plVar3[0x501] + 1;
  *(int *)(plVar3 + 0x501) = iVar1;
  if (iVar1 != 0x40) {
    return;
  }
  if ((long *)*param_1 != plVar3) {
    param_1 = plVar4 + 0x500;
  }
  *param_1 = plVar3[0x500];
  FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
  return;
}


