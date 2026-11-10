/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008830d0; name: FUN_008830d0
 */


undefined8
FUN_008830d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0087a5f0(param_2);
  if (*(byte *)(param_5 + 3) <= uVar2) {
    uVar3 = FUN_0087d080(param_2,param_4 + 0x10);
    if ((uVar3 & 1) == 0) {
      FUN_0087d510(param_2);
      iVar1 = *param_5;
    }
    else {
      FUN_0087d3e0(param_2);
      iVar1 = *param_5;
    }
    if (iVar1 - 1U < 0x2f) {
                    /* WARNING: Could not recover jumptable at 0x0088316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&DAT_02144244 + *(int *)(&DAT_02144244 + (ulong)(iVar1 - 1U) * 4)))();
      return uVar4;
    }
  }
  return 0;
}


