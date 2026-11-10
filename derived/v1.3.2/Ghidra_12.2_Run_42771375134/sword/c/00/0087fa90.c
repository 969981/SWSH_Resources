/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087fa90; name: FUN_0087fa90
 */


bool FUN_0087fa90(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0087f680(param_1,(param_2 >> 5) + 0x28);
  return (uVar1 & 1 << (ulong)(param_2 & 0x1f)) != 0;
}


