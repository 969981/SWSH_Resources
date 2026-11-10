/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e44a30; name: FUN_00e44a30
 */


void FUN_00e44a30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN_00e47b10(param_1 + 0x3c);
  if ((lVar3 != 0) && (*(undefined1 *)(lVar3 + 0x69) = 1, *(char *)((long)param_1 + 0x219) != '\0'))
  {
    plVar1 = (long *)param_1[0x3e];
    plVar2 = (long *)param_1[0x3d];
    do {
      if (plVar2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00e44a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1d8))(param_1);
        return;
      }
      uVar4 = FUN_00e47d30(*plVar2 + 0x50);
      plVar2 = plVar2 + 1;
    } while ((uVar4 & 1) == 0);
  }
  return;
}


