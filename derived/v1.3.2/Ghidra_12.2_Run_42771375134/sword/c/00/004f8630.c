/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8630; name: FUN_004f8630
 */


void FUN_004f8630(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_027137e8;
  uVar4 = (ulong)*(uint *)(PTR_DAT_027137e8 + 8);
  if (*(uint *)(PTR_DAT_027137e8 + 8) != 0) {
    puVar5 = *(undefined8 **)PTR_DAT_027137e8;
    puVar8 = puVar5 + uVar4 * 2;
    puVar6 = puVar5;
    do {
      while (iVar3 = (int)uVar4, puVar6[1] == param_1) {
        if (puVar6 < puVar8 + -2) {
          uVar4 = (long)puVar8 + (-0x11 - (long)puVar6);
          uVar1 = ((uint)(uVar4 >> 4) & 0xfffffff) + 1;
          puVar5 = puVar6;
          if ((uVar1 & 7) != 0) {
            lVar9 = -((ulong)uVar1 & 7);
            puVar7 = puVar6;
            do {
              puVar5 = puVar7 + 2;
              *puVar7 = *puVar5;
              puVar7[1] = puVar7[3];
              lVar9 = lVar9 + 1;
              puVar7 = puVar5;
            } while (lVar9 != 0);
          }
          if (0x6f < uVar4) {
            do {
              *puVar5 = puVar5[2];
              puVar5[1] = puVar5[3];
              puVar5[2] = puVar5[4];
              puVar5[3] = puVar5[5];
              puVar5[4] = puVar5[6];
              puVar5[5] = puVar5[7];
              puVar5[6] = puVar5[8];
              puVar5[7] = puVar5[9];
              puVar5[8] = puVar5[10];
              puVar5[9] = puVar5[0xb];
              puVar5[10] = puVar5[0xc];
              puVar5[0xb] = puVar5[0xd];
              puVar5[0xc] = puVar5[0xe];
              puVar5[0xd] = puVar5[0xf];
              puVar7 = puVar5 + 0x10;
              puVar5[0xe] = *puVar7;
              puVar5[0xf] = puVar5[0x11];
              puVar5 = puVar7;
            } while (puVar7 < puVar8 + -2);
          }
          iVar3 = *(int *)(puVar2 + 8);
          puVar5 = *(undefined8 **)puVar2;
        }
        uVar1 = iVar3 - 1;
        uVar4 = (ulong)uVar1;
        *(uint *)(puVar2 + 8) = uVar1;
        puVar8 = puVar5 + (ulong)uVar1 * 2;
        if (puVar8 == puVar6) {
          return;
        }
      }
      puVar6 = puVar6 + 2;
      puVar8 = puVar5 + uVar4 * 2;
    } while (puVar8 != puVar6);
  }
  return;
}


