/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c17c0; name: FUN_007c17c0
 */


void FUN_007c17c0(ushort *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  
  bVar2 = *param_2;
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xfff8 | bVar2 & 7;
  uVar1 = bVar2 & 7 | (*param_3 & 1) << 3;
  *param_1 = uVar3 & 0xfff0 | uVar1;
  uVar1 = uVar1 | (*param_4 & 0xf) << 4;
  *param_1 = uVar3 & 0xff00 | uVar1;
  *param_1 = uVar3 & 0xf000 | uVar1 | (*param_5 & 0xf) << 8;
  return;
}


