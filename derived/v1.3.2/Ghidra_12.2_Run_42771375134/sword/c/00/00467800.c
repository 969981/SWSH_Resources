/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00467800; name: FUN_00467800
 */


void FUN_00467800(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  
  piVar4 = *(int **)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x20);
  piVar6 = piVar4;
  if (uVar1 == 0) {
LAB_00467854:
    if (((piVar6 != piVar4 + (ulong)uVar1 * 0xc) && (*(long *)(piVar6 + 4) == 0)) &&
       (plVar3 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,piVar6[2],0),
       plVar3 != (long *)0x0)) {
      if (((*(long *)(param_1 + 0x30) != 0) && (plVar3[0xf] != 0)) &&
         (plVar3[0xf] == *(long *)(param_1 + 0x30))) {
        *(long **)(piVar6 + 4) = plVar3;
        iVar2 = FUN_00480880(plVar3,param_1);
        if (iVar2 != 1) {
          piVar6[4] = 0;
          piVar6[5] = 0;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x004678e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  else {
    lVar5 = (ulong)uVar1 * 0x30;
    do {
      if (*piVar6 == param_2) goto LAB_00467854;
      lVar5 = lVar5 + -0x30;
      piVar6 = piVar6 + 0xc;
    } while (lVar5 != 0);
  }
  return;
}


