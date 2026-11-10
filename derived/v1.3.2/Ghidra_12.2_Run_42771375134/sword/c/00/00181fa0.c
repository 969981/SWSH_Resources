/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00181fa0; name: FUN_00181fa0
 */


undefined8 FUN_00181fa0(float param_1,long param_2,long param_3,uint param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar7 = *(uint *)(param_2 + 0x1c04);
  if (uVar7 == 0x40) {
    return 0;
  }
  if (param_4 != 0) {
    puVar9 = (undefined4 *)(param_2 + (ulong)uVar7 * 0x2c);
    fVar15 = *(float *)(param_3 + 0x2c);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    uVar4 = *(undefined1 *)(param_3 + 0x30);
    *puVar9 = 0;
    *(undefined1 *)((long)puVar9 + 5) = 1;
    *(undefined1 *)(puVar9 + 1) = uVar4;
    puVar9[3] = uVar2;
    puVar9[4] = uVar3;
    puVar9[2] = fVar15;
    fVar14 = *(float *)(param_3 + 0x10);
    fVar16 = *(float *)(param_3 + 0x14);
    fVar17 = *(float *)(param_3 + 0x18);
    uVar7 = uVar7 + 1;
    uVar8 = (ulong)uVar7;
    fVar13 = fVar14;
    fVar18 = fVar16;
    fVar19 = fVar17;
    if (param_4 != 1) {
      uVar6 = 0;
      pfVar10 = (float *)(param_3 + 0x7c);
      uVar11 = 1;
      cVar5 = '\x01';
      fVar12 = *(float *)(param_3 + 0x6c);
      if (fVar12 == fVar15) goto LAB_00182058;
      do {
        if ((int)uVar8 == 0x40) {
          return 0;
        }
        *(char *)((long)puVar9 + 5) = cVar5;
        puVar9[5] = fVar13;
        puVar9[6] = fVar18;
        cVar5 = '\x01';
        puVar9[7] = fVar19;
        puVar9[8] = fVar14;
        uVar6 = uVar11 & 0xffffffff;
        puVar9[9] = fVar16;
        puVar9[10] = fVar17;
        fVar14 = pfVar10[-1];
        fVar16 = *pfVar10;
        uVar4 = *(undefined1 *)(pfVar10 + -3);
        puVar9 = (undefined4 *)(param_2 + uVar8 * 0x2c);
        *(short *)puVar9 = (short)uVar11;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        *(undefined1 *)((long)puVar9 + 5) = 1;
        *(undefined2 *)((long)puVar9 + 2) = 0;
        *(undefined1 *)(puVar9 + 1) = uVar4;
        puVar9[3] = fVar14;
        puVar9[4] = fVar16;
        puVar9[2] = fVar12;
        fVar17 = pfVar10[-9];
        fVar14 = pfVar10[-0xb];
        fVar16 = pfVar10[-10];
        fVar19 = fVar17;
        fVar13 = fVar14;
        fVar18 = fVar16;
        pfVar1 = pfVar10;
        while( true ) {
          uVar11 = uVar11 + 1;
          if (param_4 <= uVar11) {
            if (cVar5 != '\x01') {
              *(char *)((long)puVar9 + 5) = cVar5;
            }
            goto LAB_001821a0;
          }
          pfVar10 = pfVar1 + 0x10;
          fVar12 = pfVar1[0xc];
          if (fVar12 != *(float *)(param_3 + uVar6 * 0x40 + 0x2c)) break;
LAB_00182058:
          uVar7 = (uint)uVar8;
          pfVar1 = (float *)(param_3 + uVar6 * 0x40);
          if (pfVar10[-1] != pfVar1[0xe]) break;
          if (*pfVar10 != pfVar1[0xf]) break;
          if (pfVar10[-0xf] * *pfVar1 + pfVar10[-0xe] * pfVar1[1] + pfVar10[-0xd] * pfVar1[2] <
              param_1) break;
          fVar15 = pfVar10[-0xb];
          fVar12 = pfVar10[-10];
          if (fVar15 <= fVar13) {
            fVar13 = fVar15;
          }
          fVar20 = pfVar10[-9];
          if (fVar12 <= fVar18) {
            fVar18 = fVar12;
          }
          if (fVar20 <= fVar19) {
            fVar19 = fVar20;
          }
          if (fVar14 <= fVar15) {
            fVar14 = fVar15;
          }
          if (fVar16 <= fVar12) {
            fVar16 = fVar12;
          }
          if (fVar17 <= fVar20) {
            fVar17 = fVar20;
          }
          cVar5 = cVar5 + '\x01';
          pfVar1 = pfVar10;
        }
      } while( true );
    }
LAB_001821a0:
    puVar9[5] = fVar13;
    puVar9[6] = fVar18;
    puVar9[7] = fVar19;
    puVar9[8] = fVar14;
    puVar9[9] = fVar16;
    puVar9[10] = fVar17;
  }
  *(uint *)(param_2 + 0x1c04) = uVar7;
  return 1;
}


