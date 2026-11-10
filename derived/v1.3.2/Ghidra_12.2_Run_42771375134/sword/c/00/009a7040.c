/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a7040; name: FUN_009a7040
 */


void FUN_009a7040(undefined2 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((char)param_2[5] == '\0') {
    lVar8 = *param_2;
    lVar9 = param_2[4];
    uVar4 = FUN_008f35c0(lVar8,0x1000);
    if ((((short)lVar9 != 1) && ((uVar4 & 1) == 0)) &&
       (*(char *)(*(long *)(lVar8 + 0x88) + 0xa83) == '\0')) {
      uVar1 = FUN_009a7340(*param_2,param_2[1],param_2[2],param_2[3],(short)param_2[4],
                           *(undefined4 *)((long)param_2 + 0x24));
      if (*(char *)((long)param_2 + 0x29) != '\0') {
        lVar9 = *param_2;
        uVar2 = FUN_008f9050(lVar9);
        if (uVar2 < 0x259) {
          if (0x1c2 < uVar2) {
            iVar10 = 0x2000;
            goto LAB_009a7134;
          }
          if (300 < uVar2) {
            iVar10 = 0x1800;
            goto LAB_009a7134;
          }
          if (0x96 < uVar2) {
            iVar10 = 0x1000;
            goto LAB_009a7134;
          }
          if (0x1e < uVar2) {
            iVar10 = 0x800;
            goto LAB_009a7134;
          }
          bVar7 = false;
        }
        else {
          iVar10 = 0x2800;
LAB_009a7134:
          uVar5 = FUN_008f9090(lVar9);
          uVar4 = FUN_009a7a80(uVar5,0x4f3);
          uVar2 = uVar1;
          if (0xfefff < (int)uVar1) {
            uVar2 = 0xff000;
          }
          iVar3 = FUN_008ebfa0(0x100);
          bVar7 = iVar3 < (int)((ulong)(uint)(iVar10 << (uVar4 & 1)) * (long)(int)uVar2 + 0x800 >>
                               0xc) / 6 >> 0xc;
        }
        *(bool *)((long)param_1 + 1) = bVar7;
      }
      dVar15 = DAT_01cd5200;
      if ((int)uVar1 < 0xff000) {
        dVar13 = 0.0;
        if ((uVar1 & 0xfff) != 0) {
          dVar13 = (double)(uVar1 & 0xfff) * DAT_01cd5200;
        }
        dVar13 = dVar13 + (double)((int)uVar1 >> 0xc);
        if (dVar13 == 0.0) {
          uVar1 = 0;
        }
        else {
          dVar13 = DAT_01cd5018 / dVar13;
          dVar14 = 0.5;
          if (dVar13 <= 0.0) {
            dVar14 = -0.5;
          }
          uVar1 = (uint)(dVar13 * DAT_01cd5438 + dVar14);
        }
        dVar13 = 0.0;
        if ((uVar1 & 0xfff) != 0) {
          dVar13 = (double)(uVar1 & 0xfff) * DAT_01cd5200;
        }
        fVar11 = powf((float)(dVar13 + (double)((int)uVar1 >> 0xc)),0.1875);
        fVar12 = 0.5;
        if (fVar11 <= 0.0) {
          fVar12 = -0.5;
        }
        uVar1 = (uint)(fVar11 * DAT_01d4bbec + fVar12);
        dVar13 = 0.0;
        if ((uVar1 & 0xfff) != 0) {
          dVar13 = (double)(uVar1 & 0xfff) * dVar15;
        }
        dVar13 = dVar13 + (double)((int)uVar1 >> 0xc);
        if (dVar13 == 0.0) {
          iVar10 = 0;
        }
        else {
          dVar13 = DAT_01cd52d0 / dVar13;
          dVar15 = 0.5;
          if (dVar13 <= 0.0) {
            dVar15 = -0.5;
          }
          iVar10 = (int)(dVar13 * DAT_01cd5438 + dVar15) >> 0xc;
        }
        uVar1 = 0;
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        uVar2 = 4;
        if (*(char *)((long)param_1 + 1) != '\0') {
          uVar2 = 1;
        }
        do {
          iVar3 = FUN_008ebfa0(0x10000);
          if (iVar10 <= iVar3) {
            return;
          }
          if (*(byte *)(param_1 + 1) < 3) {
            *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
        *(undefined1 *)param_1 = 1;
        return;
      }
      *(undefined1 *)param_1 = 1;
      uVar6 = 3;
      if (*(char *)((long)param_1 + 1) != '\0') {
        uVar6 = 1;
      }
      goto LAB_009a7074;
    }
  }
  *(undefined1 *)param_1 = 1;
  uVar6 = 3;
LAB_009a7074:
  *(undefined1 *)(param_1 + 1) = uVar6;
  return;
}


