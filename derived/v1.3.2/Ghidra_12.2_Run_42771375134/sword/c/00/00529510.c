/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529510; name: FUN_00529510
 */


void FUN_00529510(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_70;
  float fStack_6c;
  
  lVar6 = *(long *)(param_1 + 0x198);
  *(undefined2 *)(param_1 + 0xc6e) = 0;
  if (-1 < *(int *)(lVar6 + 0x114)) {
    *(undefined4 *)(lVar6 + 0x200) = 0;
    lVar6 = *(long *)(param_1 + 0x198);
  }
  fVar16 = *(float *)(param_1 + 0x848);
  fVar11 = *(float *)(lVar6 + 0x224);
  fVar12 = *(float *)(lVar6 + 0x228);
  fVar14 = *(float *)(lVar6 + 0x22c);
  uVar9 = (ulong)*(uint *)(param_1 + 0x524);
  if ((int)*(uint *)(param_1 + 0x524) < 1) {
    iVar10 = 0;
    if (*(int *)(lVar6 + 0x114) < 0) goto LAB_005296f4;
  }
  else {
    lVar6 = 0;
    iVar10 = 0;
    do {
      while (((0.0 < fVar14 || (0.0 < fVar12 || (0.0 < fVar11 || 0.0 < fVar16))) &&
              *(char *)(*(long *)(param_1 + 0x868) + lVar6) != '\0' &&
             (((lVar1 = *(long *)(param_1 + 0x868) + lVar6, 0.0 < *(float *)(lVar1 + 4) ||
               (0.0 < *(float *)(lVar1 + 8))) || (0.0 < *(float *)(lVar1 + 0xc)))))) {
        if (*(int *)(lVar1 + 0x30) == 7) {
          if (*(char *)(param_1 + 0x895) == '\0') {
            fVar17 = *(float *)(param_1 + 0x1064);
          }
          else {
            FUN_005282d0(param_1);
            fVar17 = *(float *)(param_1 + 0x1064);
            if (*(char *)(param_1 + 0x895) != '\0') {
              FUN_005282d0(param_1);
            }
          }
          fVar15 = (*(float *)(lVar1 + 0x2c) - fVar17) / *(float *)(lVar1 + 0x2c);
          fVar17 = *(float *)(param_1 + 0x1058);
          fVar13 = *(float *)(param_1 + 0x1054);
        }
        else {
          FUN_00528d70(0x3f800000,0,param_1,&local_70,*(int *)(lVar1 + 0x30),2);
          fVar15 = *(float *)(lVar1 + 0x2c);
          fVar17 = fStack_6c;
          fVar13 = local_70;
        }
        puVar2 = (undefined1 *)(*(long *)(*(long *)(param_1 + 0x198) + 0x208) + lVar6);
        *puVar2 = 1;
        *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(lVar1 + 0x14);
        *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(lVar1 + 0x1c);
        uVar7 = *(undefined8 *)(lVar1 + 4);
        *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(lVar1 + 0xc);
        *(undefined8 *)(puVar2 + 4) = uVar7;
        iVar3 = *(int *)(lVar1 + 0x24);
        *(int *)(puVar2 + 0x24) = iVar3;
        uVar4 = *(undefined4 *)(lVar1 + 0x28);
        *(float *)(puVar2 + 0x2c) = fVar17 + fVar13 * fVar15;
        *(undefined4 *)(puVar2 + 0x28) = uVar4;
        if (iVar3 == 1) {
          *(undefined1 *)(param_1 + 0xc6f) = 1;
        }
        iVar10 = iVar10 + 1;
        lVar6 = lVar6 + 0x34;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_005296e0;
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x198) + 0x208) + lVar6) = 0;
      lVar6 = lVar6 + 0x34;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
LAB_005296e0:
    lVar6 = *(long *)(param_1 + 0x198);
    if (*(int *)(lVar6 + 0x114) < iVar10) goto LAB_005296f4;
  }
  *(int *)(lVar6 + 0x200) = iVar10;
LAB_005296f4:
  if ((DAT_0275cc3c & 1) == 0) {
    DAT_0275cc3c = 1;
    DAT_0275cf28 = 0x100000000;
    DAT_0275cf30 = 0x300000002;
    DAT_0275cf38 = 0x500000004;
    DAT_0275cf40 = 0x700000006;
    DAT_0275cf48 = 0x900000008;
    DAT_0275cf50 = 0xb0000000a;
    DAT_0275cf58 = 0xd0000000c;
    DAT_0275cf60 = 0xf0000000e;
    DAT_0275cf68 = 0x1100000010;
    DAT_0275cf70 = 0x1300000012;
  }
  if (*(int *)(param_1 + 0x874) == -1) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(uint *)((long)&DAT_0275cf28 + (long)*(int *)(param_1 + 0x874) * 4);
  }
  FUN_00553590(*(undefined8 *)(param_1 + 0x198),uVar8);
  bVar5 = uVar8 < 0x14;
  if (uVar8 == 0xffffffff) {
    FUN_00553580(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x880),
                 *(undefined8 *)(param_1 + 0x878));
    bVar5 = 0 < *(int *)(param_1 + 0x880);
  }
  *(char *)(param_1 + 0xc6e) = 0 < iVar10 & bVar5;
  return;
}


