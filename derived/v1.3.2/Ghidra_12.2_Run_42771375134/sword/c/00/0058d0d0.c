/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058d0d0; name: FUN_0058d0d0
 */


ulong FUN_0058d0d0(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8,byte param_9,
                  uint param_10,byte param_11)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_2b8 [536];
  
  if ((param_11 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
  }
  if (0 < (int)param_10) {
    param_10 = 1;
  }
  fVar9 = *(float *)(param_2 + 0x88);
  fVar11 = *(float *)(param_2 + 0x8c);
  fVar13 = *(float *)(param_2 + 0x90);
  fVar10 = *(float *)(param_2 + 0x94);
  param_10 = param_10 & ((int)param_10 >> 0x1f ^ 0xffffffffU);
  uVar18 = *(undefined4 *)(param_2 + 0x54);
  uVar17 = *(undefined4 *)(param_2 + 0x58);
  uVar16 = *(undefined4 *)(param_3 + 0x54);
  uVar15 = *(undefined4 *)(param_3 + 0x58);
  uVar12 = *(undefined4 *)(*(long *)(param_2 + 0x80) + 8);
  uVar14 = *(undefined4 *)(*(long *)(param_2 + 0x80) + 0xc);
  uVar1 = 0x21;
  if (param_10 != 1) {
    uVar1 = 0x11;
  }
  uVar3 = FUN_00542d00(0x11,*(undefined8 *)(param_1 + 0x20));
  if ((uVar3 & 1) == 0) {
    param_10 = 0;
    uVar1 = 9;
  }
  uVar1 = FUN_00513210(0x3f800000,uVar12,uVar14,param_5,auStack_2b8,uVar1,param_10);
  FUN_00542d00(*(undefined8 *)(param_1 + 0x20));
  uVar3 = FUN_0059d300(param_3,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    fVar7 = (float)NEON_ucvtf(uVar18);
    fVar8 = (float)NEON_ucvtf(uVar17);
    uVar12 = NEON_ucvtf(uVar16);
    uVar14 = NEON_ucvtf(uVar15);
    FUN_0059d000(0,0);
    do {
      lVar6 = param_2;
      param_2 = *(long *)(lVar6 + 0x120);
    } while (param_2 != 0);
    if (param_4 == 0) {
      uVar4 = 0;
    }
    else {
      do {
        lVar5 = param_4;
        param_4 = *(long *)(lVar5 + 0x120);
      } while (param_4 != 0);
      uVar4 = *(undefined8 *)(lVar5 + 0xa8);
    }
    uVar2 = FUN_0057b610(0,0,uVar12,uVar14,0,0,fVar9 * fVar7 + fVar13,fVar11 * fVar8 + fVar10,
                         param_1,param_9 & 1,uVar1,auStack_2b8,param_6,*(undefined8 *)(lVar6 + 0xa8)
                         ,uVar4,param_7,param_8,param_10,0);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}


