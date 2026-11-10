/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6f220; name: FUN_00d6f220
 */


long * FUN_00d6f220(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar3 = *(long **)(param_1 + 0x80);
    lVar4 = *(long *)(param_1 + 0x88) << 5;
    do {
      plVar5 = (long *)*plVar3;
      if ((int)plVar5[5] == (int)param_2[5]) {
        plVar1 = plVar5;
        if (plVar5[3] != 0) {
          plVar1 = plVar5 + 1;
        }
        plVar2 = param_2;
        if (param_2[3] != 0) {
          plVar2 = param_2 + 1;
        }
        if ((param_2[3] == 0) || (plVar5[3] == 0 || *plVar1 != *plVar2)) {
          if (*plVar1 == *plVar2) {
LAB_00d6f2cc:
            return plVar5 + 0xb2;
          }
        }
        else {
          plVar1 = (long *)PTR_DAT_02710920;
          if (*plVar5 != 0) {
            plVar1 = (long *)(*plVar5 + 0x58);
          }
          plVar2 = (long *)PTR_DAT_02710920;
          if (*param_2 != 0) {
            plVar2 = (long *)(*param_2 + 0x58);
          }
          if (*plVar1 == *plVar2) goto LAB_00d6f2cc;
        }
      }
      plVar3 = plVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  return (long *)0x0;
}


