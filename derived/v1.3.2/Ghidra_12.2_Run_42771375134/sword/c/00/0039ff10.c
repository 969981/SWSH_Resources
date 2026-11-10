/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ff10; name: FUN_0039ff10
 */


undefined8 FUN_0039ff10(uint *param_1,long *param_2,uint *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong *puVar15;
  float fVar16;
  uint local_24;
  
  uVar9 = FUN_003a01a0(param_1 + 0xbe,param_2,&local_24,param_3);
  if ((uVar9 & 1) == 0) {
    if (param_1[0xc] == 0) {
      return 0;
    }
    lVar12 = 0;
    lVar14 = 0xae;
    lVar10 = 0x14c;
    while ((*(long *)((long)param_1 + lVar12 + 0x38) != *param_2 ||
           (*(long *)((long)param_1 + lVar12 + 0x40) != param_2[1]))) {
      uVar9 = lVar14 - 0xad;
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x10;
      lVar10 = lVar10 + 0x18;
      if (param_1[0xc] <= uVar9) {
        return 0;
      }
    }
    *param_3 = param_1[lVar14];
    uVar7 = param_1[0xc] - 1;
    param_1[0xc] = uVar7;
    puVar3 = (uint *)((long)param_1 + lVar10);
    puVar3[-5] = param_1[(ulong)uVar7 * 6 + 0x4e];
    puVar3[-4] = param_1[(ulong)uVar7 * 6 + 0x4f];
    puVar3[-3] = param_1[(ulong)uVar7 * 6 + 0x50];
    puVar3[-2] = param_1[(ulong)uVar7 * 6 + 0x51];
    puVar3[-1] = param_1[(ulong)uVar7 * 6 + 0x52];
    *puVar3 = param_1[(ulong)uVar7 * 6 + 0x53];
    *(undefined8 *)((long)param_1 + lVar12 + 0x40) =
         *(undefined8 *)(param_1 + (ulong)uVar7 * 4 + 0x10);
    *(undefined8 *)((long)param_1 + lVar12 + 0x38) =
         *(undefined8 *)(param_1 + (ulong)uVar7 * 4 + 0xe);
    param_1[lVar14] = param_1[(ulong)uVar7 + 0xae];
  }
  else {
    uVar9 = (ulong)local_24;
    uVar8 = *param_1 - 1;
    uVar7 = *(uint *)(*(long *)(param_1 + 6) + uVar9 * 4);
    *param_1 = uVar8;
    if (local_24 != uVar8) {
      lVar14 = *(long *)(param_1 + 4);
      puVar15 = (ulong *)(lVar14 + (ulong)uVar8 * 0x10);
      puVar11 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar8 * 0x18);
      puVar13 = (undefined4 *)(*(long *)(param_1 + 2) + uVar9 * 0x18);
      *puVar13 = *puVar11;
      puVar13[1] = puVar11[1];
      puVar13[2] = puVar11[2];
      puVar13[3] = puVar11[3];
      uVar4 = puVar11[5];
      puVar13[4] = puVar11[4];
      puVar13[5] = uVar4;
      puVar1 = (ulong *)(lVar14 + uVar9 * 0x10);
      puVar1[1] = puVar15[1];
      *puVar1 = *puVar15;
      *(undefined4 *)(*(long *)(param_1 + 6) + uVar9 * 4) =
           *(undefined4 *)(*(long *)(param_1 + 6) + (ulong)*param_1 * 4);
      uVar5 = *puVar15;
      uVar6 = puVar15[1];
      uVar9 = (uVar5 & 0xffffffff | uVar6 << 0x20) + (uVar5 << 0x20 ^ 0xffffffffffffffff);
      uVar9 = uVar9 ^ uVar9 >> 0x16;
      uVar9 = uVar9 + (uVar9 << 0xd ^ 0xffffffffffffffff);
      uVar9 = (uVar9 ^ uVar9 >> 8) * 9;
      uVar9 = uVar9 ^ uVar9 >> 0xf;
      uVar9 = uVar9 + (uVar9 << 0x1b ^ 0xffffffffffffffff);
      uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xc2) +
                              (ulong)(param_1[0xbf] & ((uint)(uVar9 >> 0x1f) ^ (uint)uVar9)) * 4);
      lVar14 = *(long *)(param_1 + 0xc6);
      puVar15 = (ulong *)(lVar14 + uVar9 * 0x18);
      if (*puVar15 != uVar5 || puVar15[1] != uVar6) {
        do {
          uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xc4) + uVar9 * 4);
          puVar15 = (ulong *)(lVar14 + uVar9 * 0x18);
        } while (*puVar15 != uVar5 || puVar15[1] != uVar6);
      }
      *(uint *)(lVar14 + uVar9 * 0x18 + 0x10) = local_24;
    }
    if ((char)param_1[0x7a0] == '\0') {
      lVar14 = (ulong)uVar7 * 0x20;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + lVar14);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      fVar16 = sqrtf(DAT_01d4c710);
      fVar16 = fVar16 * -2.0;
      lVar14 = *(long *)(param_1 + 8) + lVar14;
      *(float *)(lVar14 + 0x10) = fVar16;
      *(float *)(lVar14 + 0x14) = fVar16;
      *(float *)(lVar14 + 0x18) = fVar16;
    }
  }
  return 1;
}


