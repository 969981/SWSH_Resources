/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e5f30; name: FUN_004e5f30
 */


void FUN_004e5f30(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  
  puVar6 = PTR_DAT_02713640;
  if ((*(uint *)(param_1 + 0x108) <= param_3) && (*(uint *)(param_1 + 0x10c) < param_3)) {
    uVar1 = *(uint *)(param_1 + 0x10c) + (param_3 - *(uint *)(param_1 + 0x108));
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar1 << 5);
    if (puVar7 == (undefined8 *)0x0) goto LAB_004e616c;
    puVar8 = *(undefined8 **)(param_1 + 0x100);
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
      uVar5 = *(uint *)(param_1 + 0x108);
      if (uVar5 != 0) {
        *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar8 + 3);
        puVar7[2] = puVar8[2];
        puVar7[1] = puVar8[1];
        *puVar7 = *puVar8;
        if (uVar5 != 1) {
          uVar4 = uVar5 + 3 & 3;
          if ((ulong)uVar5 - 2 < 3) {
            lVar10 = 1;
          }
          else {
            lVar10 = 1;
            lVar9 = 0x80;
            do {
              lVar2 = *(long *)(param_1 + 0x100) + lVar9;
              puVar8 = (undefined8 *)((long)puVar7 + lVar9);
              *(undefined4 *)(puVar8 + -9) = *(undefined4 *)(lVar2 + -0x48);
              puVar8[-10] = *(undefined8 *)(lVar2 + -0x50);
              puVar8[-0xb] = *(undefined8 *)(lVar2 + -0x58);
              puVar8[-0xc] = *(undefined8 *)(lVar2 + -0x60);
              lVar2 = *(long *)(param_1 + 0x100) + lVar9;
              *(undefined4 *)(puVar8 + -5) = *(undefined4 *)(lVar2 + -0x28);
              puVar8[-6] = *(undefined8 *)(lVar2 + -0x30);
              puVar8[-7] = *(undefined8 *)(lVar2 + -0x38);
              puVar8[-8] = *(undefined8 *)(lVar2 + -0x40);
              lVar2 = *(long *)(param_1 + 0x100) + lVar9;
              *(undefined4 *)(puVar8 + -1) = *(undefined4 *)(lVar2 + -8);
              puVar8[-2] = *(undefined8 *)(lVar2 + -0x10);
              puVar8[-3] = *(undefined8 *)(lVar2 + -0x18);
              puVar8[-4] = *(undefined8 *)(lVar2 + -0x20);
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x100) + lVar9);
              lVar9 = lVar9 + 0x80;
              *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar3 + 3);
              puVar8[2] = puVar3[2];
              puVar8[1] = puVar3[1];
              lVar10 = lVar10 + 4;
              *puVar8 = *puVar3;
            } while ((ulong)uVar5 - (ulong)uVar4 != lVar10);
          }
          if (uVar4 != 0) {
            lVar10 = lVar10 << 5;
            lVar9 = -(ulong)uVar4;
            do {
              puVar8 = (undefined8 *)(*(long *)(param_1 + 0x100) + lVar10);
              puVar3 = (undefined8 *)((long)puVar7 + lVar10);
              lVar10 = lVar10 + 0x20;
              *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar8 + 3);
              puVar3[2] = puVar8[2];
              puVar3[1] = puVar8[1];
              lVar9 = lVar9 + 1;
              *puVar3 = *puVar8;
            } while (lVar9 != 0);
          }
        }
        puVar8 = *(undefined8 **)(param_1 + 0x100);
      }
      FUN_00404870(*(undefined4 *)puVar6,puVar8);
    }
    *(undefined8 **)(param_1 + 0x100) = puVar7;
    *(uint *)(param_1 + 0x10c) = uVar1;
  }
  *(uint *)(param_1 + 0x108) = param_3;
  if (param_3 != 0) {
    lVar9 = 0;
    uVar11 = (ulong)param_3;
    puVar12 = (undefined4 *)(param_2 + 8);
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x100) + lVar9 + 8) = *puVar12;
      *(undefined4 *)(*(long *)(param_1 + 0x100) + lVar9 + 0xc) = puVar12[1];
      *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar9) = *(undefined8 *)(puVar12 + -2);
      *(undefined4 *)(*(long *)(param_1 + 0x100) + lVar9 + 0x18) = 0;
      lVar10 = *(long *)(param_1 + 0x100) + lVar9;
      puVar12 = puVar12 + 4;
      lVar9 = lVar9 + 0x20;
      uVar11 = uVar11 - 1;
      *(undefined4 *)(lVar10 + 0x14) = 0;
    } while (uVar11 != 0);
  }
LAB_004e616c:
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}


