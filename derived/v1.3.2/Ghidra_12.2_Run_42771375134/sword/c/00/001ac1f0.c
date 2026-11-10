/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ac1f0; name: FUN_001ac1f0
 */


void FUN_001ac1f0(float param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  ulong uVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = DAT_01d4c5a8;
  if (param_3 != 0) {
    uVar7 = (ulong)param_3;
    puVar8 = (undefined4 *)(param_2 + 0xc0);
    do {
      while( true ) {
        fVar9 = (float)puVar8[-0xe];
        fVar10 = (float)puVar8[-0x12];
        fVar11 = fVar6;
        if (fVar9 <= param_1) break;
        bVar1 = false;
        if (fVar10 <= 0.0) {
LAB_001ac24c:
          bVar5 = false;
          if (fVar9 - fVar10 == 0.0) goto LAB_001ac25c;
LAB_001ac2f0:
          if (0.0 <= fVar9 - fVar10) goto LAB_001ac30c;
          fVar11 = -fVar10 / (fVar9 - fVar10);
          bVar4 = 0;
joined_r0x001ac270:
          if (0.0 < fVar10) goto LAB_001ac274;
LAB_001ac31c:
          puVar8[-0xf] = puVar8[-0xf] | 8;
          puVar8[-0x25] = 0;
          *(undefined8 *)(puVar8 + -8) = 0x3f800000;
          puVar8[-6] = 0;
          puVar8[-1] = puVar8[-0x11];
          *puVar8 = puVar8[-0x10];
          fVar9 = fVar10 + ((float)puVar8[-0x19] - fVar10);
LAB_001ac348:
          puVar8[-2] = fVar9;
        }
LAB_001ac34c:
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + 0x32;
        if (uVar7 == 0) {
          return;
        }
      }
      bVar1 = 0.0 < fVar9;
      if ((float)puVar8[-0x19] < fVar9) {
        if (fVar10 <= 0.0 || 0.0 < fVar9) goto LAB_001ac24c;
        goto LAB_001ac34c;
      }
      bVar5 = true;
      if (fVar9 - fVar10 != 0.0) goto LAB_001ac2f0;
LAB_001ac25c:
      if (0.0 < fVar9) {
        bVar4 = 1;
        goto joined_r0x001ac270;
      }
LAB_001ac30c:
      bVar4 = 0;
      if (fVar10 <= 0.0) goto LAB_001ac31c;
LAB_001ac274:
      if ((fVar11 < 0.0) || ((bool)(bVar4 | (float)puVar8[-0x25] <= fVar11))) {
        uVar3 = puVar8[-0xf];
        if ((uVar3 >> 1 & 1) != 0) goto LAB_001ac34c;
        uVar2 = uVar3 | 0x20;
        if (!bVar1) {
          uVar2 = uVar3;
        }
        if ((bool)(bVar5 | bVar1)) {
          uVar3 = uVar2 | 0x10;
          if (!bVar5) {
            uVar3 = uVar2;
          }
          puVar8[-0xf] = uVar3;
        }
        fVar9 = fVar9 + ((float)puVar8[-0x19] - fVar9);
        *(undefined8 *)(puVar8 + -8) = 0x3f800000;
        puVar8[-6] = 0;
        puVar8[-1] = puVar8[-0xd];
        *puVar8 = puVar8[-0xc];
        goto LAB_001ac348;
      }
      puVar8[-1] = puVar8[-0x11];
      *puVar8 = puVar8[-0x10];
      *(undefined8 *)(puVar8 + -8) = 0x3f800000;
      puVar8[-6] = 0;
      puVar8[-2] = fVar10;
      puVar8[-0x25] = fVar11;
      puVar8[-0xf] = puVar8[-0xf] | 8;
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 0x32;
    } while (uVar7 != 0);
  }
  return;
}


