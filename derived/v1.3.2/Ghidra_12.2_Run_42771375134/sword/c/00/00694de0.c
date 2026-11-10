/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00694de0; name: FUN_00694de0
 */


void FUN_00694de0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_2;
  if ((int)uVar4 < 0) {
LAB_00694df8:
    uVar4 = param_2[1];
joined_r0x00694e3c:
    uVar2 = 0;
joined_r0x00694e3c:
    if ((int)uVar4 < 0) goto LAB_00694e40;
LAB_00694e04:
    uVar3 = uVar4 >> 0x17 & 0xff;
    if (uVar3 != 0) {
      if (0x6f < uVar3) {
        if (uVar3 < 0xf0) {
          uVar3 = (uVar4 >> 0x11 & 0x3f | (uVar3 - 0x70) * 0x40 & 0x7c0) << 0xb;
          uVar4 = param_2[2];
        }
        else {
          uVar3 = 0x3e0000;
          uVar4 = param_2[2];
        }
        goto joined_r0x00694e24;
      }
      goto LAB_00694e40;
    }
    uVar4 = param_2[2];
  }
  else {
    uVar2 = uVar4 >> 0x17 & 0xff;
    if (uVar2 == 0) {
      uVar4 = param_2[1];
      goto joined_r0x00694e3c;
    }
    if (uVar2 < 0x70) goto LAB_00694df8;
    if (uVar2 < 0xf0) {
      uVar2 = uVar4 >> 0x11 & 0x3f | (uVar2 - 0x70) * 0x40 & 0x7c0;
      uVar4 = param_2[1];
      goto joined_r0x00694e3c;
    }
    uVar2 = 0x7c0;
    uVar4 = param_2[1];
    if (-1 < (int)uVar4) goto LAB_00694e04;
LAB_00694e40:
    uVar4 = param_2[2];
  }
  uVar3 = 0;
joined_r0x00694e24:
  if ((int)uVar4 < 0) {
    *param_1 = uVar3 | uVar2;
    return;
  }
  uVar1 = uVar4 >> 0x17 & 0xff;
  if (uVar1 == 0) {
    iVar5 = 0;
    uVar4 = 0;
  }
  else {
    iVar5 = uVar1 - 0x70;
    if (uVar1 < 0x70) {
      *param_1 = uVar3 | uVar2;
      return;
    }
    if (0xef < uVar1) {
      *param_1 = uVar3 | uVar2 | 0xf8000000;
      return;
    }
    uVar4 = uVar4 >> 0x12 & 0x1f;
  }
  *param_1 = uVar3 | uVar2 | (uVar4 | iVar5 << 5) << 0x16;
  return;
}


