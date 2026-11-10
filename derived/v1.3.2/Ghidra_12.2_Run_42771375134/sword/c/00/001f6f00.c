/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f6f00; name: FUN_001f6f00
 */


undefined8 FUN_001f6f00(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  if ((uVar1 != 0) && ((*(uint *)(param_1 + 0x25f4) & 0x7fffffff) < uVar1)) {
    FUN_001ffeb0(param_1 + 0x25e8);
    uVar1 = *(uint *)(param_2 + 0x60);
  }
  FUN_003dd6a0(param_1 + 0x20,uVar1,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68),
               *(undefined4 *)(param_2 + 0x6c));
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0xc0);
  return 1;
}


