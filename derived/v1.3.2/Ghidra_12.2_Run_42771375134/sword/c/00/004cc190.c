/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc190; name: FUN_004cc190
 */


ulong FUN_004cc190(long *param_1)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  
  lVar11 = param_1[3];
  if ((*(uint *)(lVar11 + 0x26b) >> 0x17 & 1) == 0) {
    uVar8 = (**(code **)(*param_1 + 0xe0))(param_1);
    uVar12 = 0;
    if ((ulong)*(uint *)PTR_DAT_02712b38 != 0) {
      uVar12 = ((ulong)*(uint *)(lVar11 + 0x264) * (uVar8 & 0xffffffff)) /
               (ulong)*(uint *)PTR_DAT_02712b38;
    }
    bVar3 = *(byte *)(lVar11 + 0x26e);
  }
  else {
    if (*(short *)(lVar11 + 0x268) == 0) {
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x24));
      fVar13 = fVar13 * DAT_01d4bec0;
      uVar7 = (**(code **)(*param_1 + 0xe0))(param_1);
      fVar13 = fVar13 / (float)uVar7;
    }
    else {
      fVar13 = (float)(**(code **)(*param_1 + 0x68))(param_1);
    }
    lVar11 = param_1[3];
    uVar7 = (**(code **)(*param_1 + 0xe0))(param_1);
    bVar3 = *(byte *)(lVar11 + 0x26e);
    uVar12 = (ulong)(uint)(int)((float)uVar7 * fVar13 * DAT_01d4c6ac * *(float *)(lVar11 + 0x264));
  }
  uVar4 = *(ushort *)(param_1[3] + 0x268);
  uVar7 = *(uint *)((long)param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 7);
  *(ushort *)((long)param_1 + 0x54) = uVar4;
  if ((uVar4 - 1 != 0) && (uVar10 = (uint)uVar12, uVar2 < uVar10 && uVar7 < uVar2)) {
    uVar2 = (uVar2 - uVar7) + 1;
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = (uVar10 - uVar7) / uVar2;
    }
    uVar9 = (uint)uVar4;
    if ((uVar9 == 0) || (uVar6 < uVar9)) {
      sVar1 = 0;
      if (uVar9 != 0) {
        sVar1 = uVar4 - (short)uVar6;
      }
      *(short *)((long)param_1 + 0x54) = sVar1;
      uVar12 = (ulong)(((uVar10 - uVar7) - uVar6 * uVar2) + uVar7);
    }
    else {
      uVar12 = (ulong)(uVar10 - (uVar4 - 1) * uVar2);
      *(undefined2 *)((long)param_1 + 0x54) = 1;
    }
  }
  if (((bVar3 & 1) != 0) && (lVar11 = FUN_004694e0(param_1 + 8,uVar12 & 0xffffffff), lVar11 != 0)) {
    uVar4 = *(ushort *)((long)param_1 + 0x54);
    uVar7 = *(uint *)(lVar11 + 4);
    uVar12 = (ulong)uVar7;
    iVar5 = uVar4 - 1;
    if (iVar5 != 0) {
      uVar2 = *(uint *)((long)param_1 + 0x34);
      uVar10 = *(uint *)(param_1 + 7);
      if (uVar10 < uVar7 && uVar2 < uVar10) {
        uVar10 = (uVar10 - uVar2) + 1;
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = (uVar7 - uVar2) / uVar10;
        }
        if ((uVar4 == 0) || (uVar6 < uVar4)) {
          sVar1 = 0;
          if (uVar4 != 0) {
            sVar1 = uVar4 - (short)uVar6;
          }
          *(short *)((long)param_1 + 0x54) = sVar1;
          uVar12 = (ulong)(((uVar7 - uVar2) - uVar6 * uVar10) + uVar2);
        }
        else {
          uVar12 = (ulong)(uVar7 - iVar5 * uVar10);
          *(undefined2 *)((long)param_1 + 0x54) = 1;
        }
      }
    }
  }
  return uVar12 & 0xffffffff;
}


