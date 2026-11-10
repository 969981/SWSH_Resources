/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ebaf0; name: FUN_004ebaf0
 */


void FUN_004ebaf0(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    if ((int)param_2[1] != 0) {
      FUN_004e6bc0(lVar3 + 0x68);
      if (1 < *(uint *)(param_2 + 1)) {
        uVar6 = 1;
        lVar3 = 0xd8;
        do {
          FUN_004e6bc0(param_2[2] + lVar3);
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 0x70;
        } while (uVar6 < *(uint *)(param_2 + 1));
      }
      lVar3 = param_2[2];
    }
    FUN_004047f0(*(undefined4 *)PTR_DAT_02713640,lVar3);
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if ((long *)*param_1 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)0x0;
    plVar2 = (long *)*param_1;
    do {
      plVar4 = plVar2;
      if ((plVar4 <= param_2) && (param_2 < plVar4 + 0x100)) goto LAB_004ebbb0;
      plVar5 = plVar4;
      plVar2 = (long *)plVar4[0x100];
    } while ((long *)plVar4[0x100] != (long *)0x0);
  }
  plVar4 = (long *)0x0;
LAB_004ebbb0:
  if (plVar4[0x102] == 0) {
    plVar4[0x102] = (long)param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = plVar4[0x102];
    plVar4[0x102] = (long)param_2;
  }
  iVar1 = (int)plVar4[0x101] + 1;
  *(int *)(plVar4 + 0x101) = iVar1;
  if (iVar1 != 0x40) {
    return;
  }
  if ((long *)*param_1 != plVar4) {
    param_1 = plVar5 + 0x100;
  }
  *param_1 = plVar4[0x100];
  FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
  return;
}


