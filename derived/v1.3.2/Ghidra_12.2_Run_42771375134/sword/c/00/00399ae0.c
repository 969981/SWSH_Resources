/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00399ae0; name: FUN_00399ae0
 */


void FUN_00399ae0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  
  FUN_00399850();
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_00399ae0(lVar1,param_2,param_3,param_4,param_5);
    FUN_00399ae0(lVar1 + 0x28,param_2,param_3,param_4,param_5);
  }
  *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + *(int *)(param_1 + 0x24);
  return;
}


