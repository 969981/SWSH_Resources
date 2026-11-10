/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e260; name: FUN_0090e260
 */


void FUN_0090e260(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
  uVar1 = FUN_008df3b0(uVar1,param_2 & 0xffffffff);
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}


