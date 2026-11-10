/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd6a0; name: FUN_003dd6a0
 */


void FUN_003dd6a0(long param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = param_3;
  if (param_3 < 0x41) {
    uVar1 = 0x40;
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) < uVar1) {
    FUN_003f23c0(param_1 + 0x20);
  }
  FUN_003f2520(*(undefined8 *)(param_1 + 0x1140),param_2);
  FUN_003f2520(*(undefined8 *)(param_1 + 0x1148),param_3);
  FUN_003f2520(*(undefined8 *)(param_1 + 0x1138),param_5 + param_4);
  return;
}


