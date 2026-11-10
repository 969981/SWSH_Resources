/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f330; name: FUN_0045f330
 */


undefined4 FUN_0045f330(undefined8 param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (1 < param_3[1] - 0x7e101U) {
    return 0x2e;
  }
  uVar1 = 0;
  if (*param_3 != param_2) {
    uVar1 = 10;
  }
  return uVar1;
}


