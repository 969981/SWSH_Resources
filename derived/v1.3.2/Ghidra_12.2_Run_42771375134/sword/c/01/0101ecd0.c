/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101ecd0; name: FUN_0101ecd0
 */


void FUN_0101ecd0(long param_1,int param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 != 6) {
    if (*param_3 == 0x20) {
      if (param_2 != 0) {
        plVar2 = (long *)FUN_010203c0(param_1 + 0x70,0);
        iVar1 = (**(code **)(*plVar2 + 0x40))();
        if (iVar1 == 0) goto LAB_0101ed98;
      }
    }
    else {
      if (param_2 != 0) {
        FUN_01024500(param_1 + 0x390,*param_3);
                    /* WARNING: Could not recover jumptable at 0x0101ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x370) + 0x80))(*(long **)(param_1 + 0x370),param_3);
        return;
      }
      plVar2 = (long *)FUN_010203c0(param_1 + 0x70);
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      if (((uVar3 & 1) != 0) &&
         (lVar4 = FUN_010203c0(param_1 + 0x70,0), *(int *)(lVar4 + 0x28) == *param_3)) {
LAB_0101ed98:
        FUN_01024500(param_1 + 0x390,0x20);
                    /* WARNING: Could not recover jumptable at 0x0101edc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x370) + 0x80))
                  (*(long **)(param_1 + 0x370),PTR_Handheld_027236e8);
        return;
      }
    }
  }
  return;
}


