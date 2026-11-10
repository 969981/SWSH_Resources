/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015362c0; name: FUN_015362c0
 */


undefined4 FUN_015362c0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 4) {
    uVar1 = param_2;
  }
  return *(undefined4 *)(param_1 + (ulong)uVar1 * 0x20 + 0x9a74);
}


