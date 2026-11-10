/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c09f0; name: FUN_003c09f0
 */


void FUN_003c09f0(float param_1,long param_2,long param_3,long param_4,uint *param_5,float *param_6,
                 uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  
  bVar8 = *(byte *)(param_2 + 0xb6);
  if (((((bVar8 & 6) != 0) && (lVar13 = *(long *)(param_2 + 0x50), *(long *)(lVar13 + 0xb0) != 0))
      && (uVar9 = FUN_003be9f0(lVar13,0), (uVar9 & 1) != 0)) &&
     (pfVar10 = *(float **)(lVar13 + 0xb0), pfVar10 != (float *)0x0)) {
    if (param_3 != 0) {
      uVar4 = *param_5;
      *(long *)(param_3 + (ulong)uVar4 * 8) = param_2 + 0x60;
      uVar5 = *(uint *)(param_2 + 0xb0);
      *param_5 = uVar4 + 1;
      *(uint *)(param_4 + (ulong)uVar4 * 4) = uVar5 >> 6;
    }
    if ((bVar8 >> 2 & 1) != 0) {
      lVar13 = *(long *)(param_2 + 0x50);
      *(float *)(lVar13 + 0x50) = pfVar10[8] + *(float *)(lVar13 + 0x50);
      *(float *)(lVar13 + 0x54) = pfVar10[9] + *(float *)(lVar13 + 0x54);
      *(float *)(lVar13 + 0x58) = pfVar10[10] + *(float *)(lVar13 + 0x58);
      *(float *)(lVar13 + 0x60) = pfVar10[0xc] + *(float *)(lVar13 + 0x60);
      *(float *)(lVar13 + 100) = pfVar10[0xd] + *(float *)(lVar13 + 100);
      *(float *)(lVar13 + 0x68) = pfVar10[0xe] + *(float *)(lVar13 + 0x68);
    }
    if ((bVar8 >> 1 & 1) != 0) {
      fVar2 = pfVar10[1];
      fVar6 = pfVar10[2];
      fVar1 = pfVar10[4];
      fVar3 = pfVar10[5];
      fVar7 = pfVar10[6];
      if (param_6 == (float *)0x0) {
        if (((param_7 & 1) != 0) &&
           (lVar13 = *(long *)(*(long *)(param_2 + 0x48) + 0x748),
           *(int *)(*(long *)(lVar13 + 0x118) +
                   (ulong)*(uint *)(*(long *)(lVar13 + 0x1a0) +
                                   (ulong)(*(uint *)(param_2 + 0xb0) >> 6) * 4) * 4) != 0)) {
          param_1 = *(float *)(param_2 + 0xac) * param_1;
        }
        lVar13 = *(long *)(param_2 + 0x50);
        *(float *)(lVar13 + 0x50) = param_1 * *pfVar10 + *(float *)(lVar13 + 0x50);
        *(float *)(lVar13 + 0x54) = param_1 * fVar2 + *(float *)(lVar13 + 0x54);
        *(float *)(lVar13 + 0x58) = param_1 * fVar6 + *(float *)(lVar13 + 0x58);
        *(float *)(lVar13 + 0x60) = param_1 * fVar1 + *(float *)(lVar13 + 0x60);
        *(float *)(lVar13 + 100) = param_1 * fVar3 + *(float *)(lVar13 + 100);
        *(float *)(lVar13 + 0x68) = param_1 * fVar7 + *(float *)(lVar13 + 0x68);
        lVar13 = *(long *)(param_2 + 0x50);
        bVar8 = *(byte *)(param_2 + 0xb6);
        lVar11 = *(long *)(lVar13 + 0xb0);
        goto joined_r0x003c0b10;
      }
      *param_6 = *pfVar10;
      param_6[1] = fVar2;
      param_6[2] = fVar6;
      param_6[4] = fVar1;
      param_6[5] = fVar3;
      param_6[6] = fVar7;
    }
  }
  lVar13 = *(long *)(param_2 + 0x50);
  bVar8 = *(byte *)(param_2 + 0xb6);
  lVar11 = *(long *)(lVar13 + 0xb0);
joined_r0x003c0b10:
  if (((lVar11 != 0) && (uVar9 = FUN_003be9f0(lVar13,0), (uVar9 & 1) != 0)) &&
     (puVar12 = *(undefined8 **)(lVar13 + 0xb0), puVar12 != (undefined8 *)0x0)) {
    puVar12[6] = 0;
    *(undefined4 *)(puVar12 + 7) = 0;
    puVar12[4] = 0;
    *(undefined4 *)(puVar12 + 5) = 0;
    puVar12[2] = 0;
    *(undefined4 *)(puVar12 + 3) = 0;
    *puVar12 = 0;
    *(undefined4 *)(puVar12 + 1) = 0;
  }
  *(byte *)(param_2 + 0xb6) = bVar8 >> 1 & 1;
  return;
}


