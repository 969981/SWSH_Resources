/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546080; name: FUN_00546080
 */


undefined4 FUN_00546080(long param_1,long param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffa;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    return 0xfffffffc;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    return 0xfffffffc;
  }
  if ((param_4 != 0 || param_3 != 0) && (*(int *)(param_1 + 0x10) == 1)) {
    return 0xfffffffa;
  }
  uVar1 = 0xfffffffa;
  if (*(int *)(param_1 + 0x48) != 3 || param_4 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


