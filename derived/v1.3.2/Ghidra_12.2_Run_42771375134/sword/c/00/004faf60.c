/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004faf60; name: FUN_004faf60
 */


void FUN_004faf60(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004fafb0(param_1,param_2 & 1,param_3,param_1 + 0x278);
  FUN_004fafb0(param_1,param_2 & (uVar1 ^ 0xffffffff) & 1,param_3 & 0xffffffff,param_1 + 0x270);
  return;
}


