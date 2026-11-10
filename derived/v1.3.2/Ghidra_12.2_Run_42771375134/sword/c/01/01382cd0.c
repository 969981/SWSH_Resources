/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01382cd0; name: FUN_01382cd0
 */


uint FUN_01382cd0(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0xcc) & 0x7fffffff) < 0x7f800001) {
    uVar1 = *(uint *)(param_1 + 0xcc);
  }
  return uVar1;
}


