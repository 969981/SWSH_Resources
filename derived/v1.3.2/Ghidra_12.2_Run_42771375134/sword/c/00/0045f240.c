/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f240; name: FUN_0045f240
 */


undefined8 FUN_0045f240(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  piVar3 = *(int **)PTR_DAT_02712fd8;
  uVar1 = *(uint *)(PTR_DAT_02712fd8 + 8);
  piVar4 = piVar3;
  if (uVar1 == 0) {
LAB_0045f288:
    if (piVar4 != piVar3 + (ulong)uVar1 * 6) {
      if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0045f2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(piVar4 + 2))();
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0045f2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(piVar4 + 4))();
      return uVar2;
    }
  }
  else {
    lVar5 = (ulong)uVar1 * 0x18;
    do {
      if (*piVar4 == param_3) goto LAB_0045f288;
      lVar5 = lVar5 + -0x18;
      piVar4 = piVar4 + 6;
    } while (lVar5 != 0);
  }
  return 0;
}


