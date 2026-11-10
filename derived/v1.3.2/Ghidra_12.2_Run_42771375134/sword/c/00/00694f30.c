/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00694f30; name: FUN_00694f30
 */


void FUN_00694f30(ulong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar3 = *param_2;
  uVar6 = uVar3 >> 0x17 & 0xff;
  uVar1 = uVar3 >> 0x10 & 0x8000;
  if (uVar6 == 0) {
    uVar2 = 0;
    uVar3 = 0;
LAB_00694f6c:
    uVar1 = uVar3 | uVar1 | (uVar2 & 0x1f) << 10;
  }
  else {
    uVar2 = uVar6 - 0x70;
    if (0x6f < uVar6) {
      if (uVar6 < 0xf0) {
        uVar3 = uVar3 >> 0xd & 0x3ff;
        goto LAB_00694f6c;
      }
      uVar1 = 0x7c00;
    }
  }
  uVar6 = param_2[1];
  uVar2 = uVar6 >> 0x17 & 0xff;
  uVar3 = uVar6 >> 0x10 & 0x8000;
  if (uVar2 == 0) {
    uVar4 = 0;
    uVar6 = 0;
LAB_00694fb4:
    uVar3 = uVar6 | uVar3 | (uVar4 & 0x1f) << 10;
  }
  else {
    uVar4 = uVar2 - 0x70;
    if (0x6f < uVar2) {
      if (uVar2 < 0xf0) {
        uVar6 = uVar6 >> 0xd & 0x3ff;
        goto LAB_00694fb4;
      }
      uVar3 = 0x7c00;
    }
  }
  uVar2 = param_2[2];
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = uVar2 >> 0x10 & 0x8000;
  uVar5 = (ulong)uVar6;
  if (uVar4 == 0) {
    uVar7 = 0;
    uVar2 = 0;
LAB_00694ffc:
    uVar5 = (ulong)(uVar2 | uVar6 | (uVar7 & 0x1f) << 10);
  }
  else {
    uVar7 = uVar4 - 0x70;
    if (0x6f < uVar4) {
      if (uVar4 < 0xf0) {
        uVar2 = uVar2 >> 0xd & 0x3ff;
        goto LAB_00694ffc;
      }
      uVar5 = 0x7c00;
    }
  }
  uVar2 = param_2[3];
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = uVar2 >> 0x10 & 0x8000;
  uVar8 = (ulong)uVar6;
  if (uVar4 == 0) {
    uVar7 = 0;
    uVar2 = 0;
  }
  else {
    uVar7 = uVar4 - 0x70;
    if (uVar4 < 0x70) goto LAB_00695050;
    if (0xef < uVar4) {
      uVar8 = 0x7c00;
      goto LAB_00695050;
    }
    uVar2 = uVar2 >> 0xd & 0x3ff;
  }
  uVar8 = (ulong)(uVar2 | uVar6 | (uVar7 & 0x1f) << 10);
LAB_00695050:
  *param_1 = (ulong)(uVar1 | uVar3 << 0x10) | uVar5 << 0x20 | uVar8 << 0x30;
  return;
}


