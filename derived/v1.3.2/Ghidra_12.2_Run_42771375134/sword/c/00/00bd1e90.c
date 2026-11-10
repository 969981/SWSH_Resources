/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd1e90; name: FUN_00bd1e90
 */


undefined8 FUN_00bd1e90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(uint *)(param_1 + 0x300c) >> 0x14 & 0x3f) * (*(uint *)(param_1 + 0x300c) >> 0x1a) == 0) {
    return 1;
  }
  uVar2 = 0;
  do {
    uVar1 = FUN_0167bc20(*(undefined8 *)(param_1 + 0x58),
                         param_1 + (ulong)*(byte *)(param_1 + 0x2d86 + uVar2) * 0x78 + 0xa8);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < ((ulong)(*(uint *)(param_1 + 0x300c) >> 0x14) & 0x3f) *
                   (ulong)(*(uint *)(param_1 + 0x300c) >> 0x1a));
  return 1;
}


