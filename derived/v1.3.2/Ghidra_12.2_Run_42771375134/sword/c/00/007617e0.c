/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007617e0; name: FUN_007617e0
 */


int FUN_007617e0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0xff;
  }
  param_1 = param_1 | param_1 << 1;
  param_1 = param_1 | param_1 << 2;
  param_1 = param_1 | param_1 << 4;
  param_1 = param_1 | param_1 << 8;
  param_1 = param_1 | param_1 << 0x10;
  param_1 = param_1 | param_1 << 0x20;
  uVar1 = (param_1 >> 1 & 0x5555555555555555) + (param_1 & 0x5555555555555555);
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
  uVar1 = (uVar1 >> 4 & 0x707070707070707) + (uVar1 & 0x707070707070707);
  uVar1 = (uVar1 >> 8 & 0xf000f000f000f) + (uVar1 & 0xf000f000f000f);
  lVar2 = (uVar1 >> 0x10 & 0x1f0000001f) + (uVar1 & 0x1f0000001f);
  return 0x40 - ((int)((ulong)lVar2 >> 0x20) + (int)lVar2);
}


