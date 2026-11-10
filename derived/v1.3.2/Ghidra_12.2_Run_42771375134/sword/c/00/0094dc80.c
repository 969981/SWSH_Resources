/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094dc80; name: FUN_0094dc80
 */


void FUN_0094dc80(undefined8 param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_008f89e0();
  if ((param_2 == 1) && ((uVar1 & 1) != 0)) {
    FUN_008fa270(param_1,0x31,param_3);
    return;
  }
  return;
}


