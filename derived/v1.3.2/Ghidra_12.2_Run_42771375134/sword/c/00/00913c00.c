/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913c00; name: FUN_00913c00
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00913c00(byte *param_1,byte param_2,undefined1 *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*param_1;
  if (*param_1 != 0) {
    if (param_1[1] == param_2) {
      if (param_1[2] == 0x1f) {
        uVar2 = 1;
        *param_3 = 0;
        bVar1 = param_1[3];
      }
      else {
        uVar2 = 0;
        bVar1 = param_1[3];
      }
      goto joined_r0x00913c2c;
    }
    uVar2 = 0;
  }
  bVar1 = param_1[3];
joined_r0x00913c2c:
  if (((bVar1 == 0) || (param_1[4] != param_2)) || (param_1[5] != 0x1f)) {
    bVar1 = param_1[6];
  }
  else {
    param_3[uVar2] = 1;
    uVar2 = (ulong)((int)uVar2 + 1);
    bVar1 = param_1[6];
  }
  if (((bVar1 != 0) && (param_1[7] == param_2)) && (param_1[8] == 0x1f)) {
    param_3[uVar2] = 2;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  if (((param_1[9] != 0) && (param_1[10] == param_2)) && (param_1[0xb] == 0x1f)) {
    param_3[uVar2] = 3;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  if (((param_1[0xc] != 0) && (param_1[0xd] == param_2)) && (param_1[0xe] == 0x1f)) {
    param_3[uVar2] = 4;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  return uVar2;
}


