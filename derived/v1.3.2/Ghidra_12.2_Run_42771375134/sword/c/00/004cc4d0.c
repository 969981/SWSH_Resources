/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc4d0; name: FUN_004cc4d0
 */


void FUN_004cc4d0(long param_1,undefined8 param_2)

{
  int iVar1;
  char local_14 [4];
  
  if ((*(byte *)(param_1 + 0x82) >> 2 & 1) != 0) {
LAB_004cc500:
    FUN_005057b0(param_1);
    return;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    iVar1 = FUN_004cc750(param_1,param_2,0);
    if ((((iVar1 == 1) && (iVar1 = FUN_004cc860(param_1,local_14), iVar1 == 1)) &&
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x60))(), iVar1 == 1)) &&
       ((local_14[0] == '\0' && (iVar1 = FUN_004cc580(param_1), iVar1 == 1)))) {
      FUN_005057b0(param_1);
    }
  }
  else {
    iVar1 = FUN_004cc580(param_1);
    if (iVar1 == 1) goto LAB_004cc500;
  }
  return;
}


