/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8470; name: FUN_004f8470
 */


undefined8 FUN_004f8470(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  puVar6 = PTR_DAT_027137e8;
  puVar5 = PTR_DAT_027137c8;
  uVar3 = *(uint *)(PTR_DAT_027137e8 + 8);
  uVar12 = *(uint *)(PTR_DAT_027137e8 + 0xc);
  if (uVar12 <= uVar3) {
    uVar12 = uVar12 + 1;
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,(ulong)uVar12 << 4);
    if (puVar7 == (undefined8 *)0x0) {
      return 2;
    }
    puVar8 = *(undefined8 **)puVar6;
    if (puVar8 != (undefined8 *)0x0 && puVar8 != puVar7) {
      uVar4 = *(uint *)(puVar6 + 8);
      if (uVar4 != 0) {
        puVar7[1] = puVar8[1];
        *puVar7 = *puVar8;
        if (uVar4 != 1) {
          uVar2 = uVar4 + 3 & 3;
          if ((ulong)uVar4 - 2 < 3) {
            lVar10 = 1;
          }
          else {
            lVar10 = 1;
            lVar9 = 0x40;
            do {
              lVar11 = *(long *)puVar6;
              puVar8 = (undefined8 *)((long)puVar7 + lVar9);
              puVar8[-5] = *(undefined8 *)(lVar11 + lVar9 + -0x28);
              puVar8[-6] = *(undefined8 *)(lVar11 + lVar9 + -0x30);
              lVar11 = *(long *)puVar6;
              puVar8[-3] = *(undefined8 *)(lVar11 + lVar9 + -0x18);
              puVar8[-4] = *(undefined8 *)(lVar11 + lVar9 + -0x20);
              lVar11 = *(long *)puVar6;
              puVar8[-1] = *(undefined8 *)(lVar11 + lVar9 + -8);
              puVar8[-2] = *(undefined8 *)(lVar11 + lVar9 + -0x10);
              puVar1 = (undefined8 *)(*(long *)puVar6 + lVar9);
              lVar9 = lVar9 + 0x40;
              *puVar8 = *puVar1;
              lVar10 = lVar10 + 4;
              puVar8[1] = puVar1[1];
            } while ((ulong)uVar4 - (ulong)uVar2 != lVar10);
          }
          if (uVar2 != 0) {
            lVar10 = lVar10 << 4;
            lVar9 = -(ulong)uVar2;
            do {
              puVar8 = (undefined8 *)(*(long *)puVar6 + lVar10);
              puVar1 = (undefined8 *)((long)puVar7 + lVar10);
              lVar10 = lVar10 + 0x10;
              puVar1[1] = puVar8[1];
              lVar9 = lVar9 + 1;
              *puVar1 = *puVar8;
            } while (lVar9 != 0);
          }
        }
        puVar8 = *(undefined8 **)puVar6;
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar8);
    }
    *(undefined8 **)puVar6 = puVar7;
    *(uint *)(puVar6 + 0xc) = uVar12;
  }
  if (uVar3 < uVar12) {
    uVar12 = *(uint *)(puVar6 + 8);
    lVar9 = *(long *)puVar6;
    *(uint *)(puVar6 + 8) = uVar12 + 1;
    puVar7 = (undefined8 *)(lVar9 + (ulong)uVar12 * 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = param_1;
      *(undefined8 *)(lVar9 + (ulong)uVar12 * 0x10 + 8) = param_2;
      return 1;
    }
  }
  return 2;
}


