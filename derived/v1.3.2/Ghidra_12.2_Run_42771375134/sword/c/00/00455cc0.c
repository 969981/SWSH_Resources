/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00455cc0; name: FUN_00455cc0
 */


void FUN_00455cc0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xcc);
  if ((param_2 & 0xf00) == 0x100) {
    uVar1 = param_2 >> 0xc & 0x3ff3f;
    uVar3 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    param_2 = uVar1 << 0xc | (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
  }
  *(uint *)(param_1 + 0xcc) = param_2;
  if (uVar2 == param_2) {
    return;
  }
  FUN_004c5bb0(*(undefined4 *)(param_1 + 0x10));
  return;
}


