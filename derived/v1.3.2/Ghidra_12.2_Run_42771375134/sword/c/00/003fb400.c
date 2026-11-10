/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fb400; name: FUN_003fb400
 */


void FUN_003fb400(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  
  uVar4 = (uint)*(byte *)((long)param_1 + 0x26) | param_2 & 0xff;
  uVar1 = *(uint *)(param_1 + 8);
  lVar10 = *(long *)(param_1[1] + 0x48);
  if ((uVar4 & 0x21) == 0) goto LAB_003fb550;
  lVar6 = FUN_003fc7b0(param_1[5]);
  lVar7 = FUN_003fc7b0(param_1[6]);
  uVar2 = *(uint *)(param_1 + 8);
  if ((*(byte *)(*(long *)(lVar6 + 0x50) + 0x2c) & 1) == 0) {
    if ((uVar1 & 1) != 0) goto LAB_003fb47c;
LAB_003fb494:
    *(uint *)(param_1 + 8) = uVar2 | 0x40000;
    if ((uVar1 & 0x202) == 0) goto LAB_003fb4a8;
LAB_003fb4f8:
    uVar3 = *(uint *)(param_1 + 8) | 0x20000;
    *(uint *)(param_1 + 8) = uVar3;
  }
  else {
    if (((lVar7 == 0) || ((uVar1 & 1) == 0)) ||
       ((*(byte *)(*(long *)(lVar7 + 0x50) + 0x2c) & 1) != 0)) goto LAB_003fb494;
LAB_003fb47c:
    *(uint *)(param_1 + 8) = uVar2 & 0xfffbffff;
    if ((uVar1 & 0x202) != 0) goto LAB_003fb4f8;
LAB_003fb4a8:
    fVar12 = (float)FUN_003e6620(lVar10,7);
    if (((fVar12 != 0.0) || (fVar12 = (float)FUN_003e6620(lVar10,8), fVar12 != 0.0)) ||
       ((fVar12 = (float)FUN_003e6620(lVar10,9), fVar12 != 0.0 ||
        (fVar12 = (float)FUN_003e6620(lVar10,10), fVar12 != 0.0)))) goto LAB_003fb4f8;
    uVar3 = *(uint *)(param_1 + 8) & 0xfffdffff;
    *(uint *)(param_1 + 8) = uVar3;
  }
  if (((uVar2 >> 0x12 & 1) == 0) && ((uVar3 >> 0x12 & 1) != 0)) {
    FUN_00114490(*(undefined8 *)(lVar10 + 0x748),(int)param_1[0xc]);
  }
  else if (((uVar2 >> 0x12 & 1) != 0) && ((uVar3 & 0x48000) == 0x8000)) {
    FUN_00114380(*(undefined8 *)(lVar10 + 0x748),(int)param_1[0xc]);
  }
LAB_003fb550:
  if ((((*(uint *)(param_1 + 8) ^ uVar1) & 0x601de) == 0) && (lVar6 = param_1[0xb], lVar6 != 0)) {
    lVar10 = param_1[5];
    lVar7 = param_1[6];
    if ((uVar4 >> 3 & 1) != 0) {
      lVar6 = FUN_003fc7b0(lVar10);
      lVar11 = FUN_003fc7b0(lVar7);
      if (lVar11 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined1 *)(*(long *)(lVar11 + 0x50) + 0xf);
      }
      uVar5 = FUN_003e9320(*(undefined8 *)(param_1[1] + 0x48),
                           *(undefined1 *)(*(long *)(lVar6 + 0x50) + 0xf),uVar9);
      lVar6 = param_1[0xb];
      *(char *)(lVar6 + 0x54) = (char)uVar5;
      *(char *)(lVar6 + 0x55) = (char)((ushort)uVar5 >> 8);
    }
    if ((uVar4 >> 4 & 1) != 0) {
      *(float *)(lVar6 + 0x5c) =
           *(float *)(*(long *)(lVar10 + 0x40) + 0xa0) + *(float *)(*(long *)(lVar7 + 0x40) + 0xa0);
    }
    FUN_001203a0(lVar6,*(uint *)(param_1 + 8) >> 0xb & 1);
    return;
  }
  if ((*(byte *)((long)param_1 + 0x25) >> 6 & 1) == 0) {
    return;
  }
  if ((uVar4 & 5) != 0) {
    lVar11 = *(long *)(*(long *)(param_1[1] + 0x48) + 0x748);
    lVar6 = FUN_003fc7b0(param_1[5]);
    lVar7 = FUN_003fc7b0(param_1[6]);
    lVar11 = *(long *)(lVar11 + 0x328);
    if (((*(byte *)(lVar11 + (ulong)(*(uint *)(lVar6 + 0xb0) >> 6) * 0x20 + 4) & 0x22) == 0) &&
       ((lVar7 == 0 ||
        ((*(byte *)(lVar11 + (ulong)(*(uint *)(lVar7 + 0xb0) >> 6) * 0x20 + 4) & 0x22) == 0)))) {
      (**(code **)(*param_1 + 0x18))(param_1,0);
      FUN_003ddb00(lVar10,param_1);
      return;
    }
  }
  if ((int)param_1[0xc] != -1) {
    FUN_00114500(*(undefined8 *)(lVar10 + 0x748));
  }
  lVar10 = *(long *)(param_1[1] + 0x48);
  plVar8 = *(long **)(*(long *)(lVar10 + 0x720) + 0x6e8);
  (**(code **)(*plVar8 + 0x48))(plVar8,param_1[0xb]);
  FUN_0011da90(*(undefined8 *)(lVar10 + 0x720),param_1[0xb]);
  param_1[0xb] = 0;
  FUN_003fb710(param_1,0);
  return;
}


