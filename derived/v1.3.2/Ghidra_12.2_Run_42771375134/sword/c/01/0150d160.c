/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150d160; name: FUN_0150d160
 */


void FUN_0150d160(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x60) = 1;
  uVar1 = FUN_008d3750();
  uVar2 = FUN_008d3fc0(uVar1,0);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xf | (uVar2 & 0xf) << 4 | 0x33111100;
  return;
}


