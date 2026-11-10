/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d3900; name: FUN_004d3900
 */


undefined8
FUN_004d3900(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5,long param_6,uint param_7,undefined4 param_8,uint param_9,
            undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  
  lVar7 = FUN_0047d760(param_4 + 0x70);
  if (lVar7 == 0) {
    return 2;
  }
  if ((param_9 & 0xf00) != 0x100) goto LAB_004d3a88;
  uVar3 = param_9 >> 0xc;
  uVar1 = uVar3 & 0xffff7;
  uVar4 = param_9 - (uVar3 - uVar1 >> 3);
  if ((uVar4 & 0xfe) == 0) goto LAB_004d3a88;
  puVar8 = *(uint **)(lVar7 + 0x78);
  uVar2 = *(uint *)(lVar7 + 0x80);
  puVar9 = puVar8;
  if (uVar2 == 0) {
LAB_004d39e0:
    if (puVar9 == puVar8 + (ulong)uVar2 * 4) goto LAB_004d3a48;
    bVar6 = true;
  }
  else {
    lVar10 = (ulong)uVar2 << 4;
    do {
      if (*puVar9 == (uVar4 & 0xff | uVar1 << 0xc | 0x100)) goto LAB_004d39e0;
      lVar10 = lVar10 + -0x10;
      puVar9 = puVar9 + 4;
    } while (lVar10 != 0);
LAB_004d3a48:
    lVar10 = FUN_0047b520(lVar7);
    bVar6 = lVar10 != 0;
  }
  bVar5 = bVar6;
  if (((param_9 >> 0xe & 1) == 0) || (bVar5 = false, !bVar6)) {
    if (!bVar5) {
      return 1;
    }
  }
  else {
    puVar8 = *(uint **)(lVar7 + 0x78);
    uVar2 = *(uint *)(lVar7 + 0x80);
    puVar9 = puVar8;
    if (uVar2 == 0) {
LAB_004d3a70:
      if (puVar9 != puVar8 + (ulong)uVar2 * 4) goto LAB_004d3a88;
    }
    else {
      lVar10 = (ulong)uVar2 << 4;
      do {
        if (*puVar9 ==
            (uVar4 - (uVar1 - (uVar3 & 0xffff3) >> 2) & 0xff | (uVar3 & 0xffff3) << 0xc | 0x100))
        goto LAB_004d3a70;
        lVar10 = lVar10 + -0x10;
        puVar9 = puVar9 + 4;
      } while (lVar10 != 0);
    }
    lVar10 = FUN_0047b520(lVar7);
    if (lVar10 == 0) {
      return 1;
    }
  }
LAB_004d3a88:
  uVar1 = param_7 >> 0xc & 0x637;
  if (uVar1 != 0) {
    uVar3 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    FUN_004a93b0(param_1,param_2,param_3,param_5,param_6,
                 (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar1 << 0xc | 0x100,
                 param_8,param_9,param_10,param_11,lVar7);
  }
  if (((param_7 & param_9) >> 0xf & 1) != 0) {
    *(undefined4 *)
     (param_6 + (ulong)(((param_9 & 0xff) + 3 & 0x1fc) * ((param_7 & 0xff) - 1)) * 4 +
     (long)(int)((param_9 & 0xff) - 1) * 4) = 0x3f800000;
  }
  return 1;
}


