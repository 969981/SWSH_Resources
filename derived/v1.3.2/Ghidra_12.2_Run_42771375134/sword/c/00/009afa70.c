/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009afa70; name: FUN_009afa70
 */


undefined8 FUN_009afa70(byte *param_1,uint *param_2,byte *param_3,byte *param_4,void *param_5)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 == 0) {
    uVar2 = 2;
    *param_2 = 2;
    if (*param_1 < 3) {
      return 0;
    }
  }
  else if (*param_1 <= uVar2) {
    return 0;
  }
  bVar1 = param_1[(ulong)uVar2 + 6];
  *param_3 = bVar1 >> 5;
  *param_4 = bVar1 & 0x1f;
  uVar2 = *param_2;
  *param_2 = uVar2 + 1;
  memcpy(param_5,param_1 + (ulong)(uVar2 + 1) + 6,(ulong)bVar1 << 3 & 0xf8);
  *param_2 = *param_2 + ((uint)((ulong)bVar1 << 3) & 0xf8);
  return 1;
}


