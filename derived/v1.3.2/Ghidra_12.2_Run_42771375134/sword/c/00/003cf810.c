/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cf810; name: FUN_003cf810
 */


void FUN_003cf810(ushort *param_1)

{
  long in_x3;
  long in_x4;
  uint in_w6;
  ushort uVar1;
  
  FUN_003cce70();
  if (((*param_1 >> 2 & 1) != 0) && ((in_w6 & 1) == 0)) {
    return;
  }
  uVar1 = param_1[1];
  if (((in_x3 != 0) &&
      ((((*param_1 & 3) == 0 && (in_x4 != 0)) &&
       ((*(byte *)(*(long *)(in_x3 + 0x50) + 0x2c) & 1) != 0)))) &&
     (((*(byte *)(*(long *)(in_x4 + 0x50) + 0x2c) & 1) != 0 && ((uVar1 & 1) != 0)))) {
    uVar1 = uVar1 & 0xfffe;
  }
  param_1[1] = uVar1;
  return;
}


