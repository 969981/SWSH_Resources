/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d3ca0; name: FUN_014d3ca0
 */


void FUN_014d3ca0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  ushort *puVar17;
  long lVar18;
  
  uVar7 = *(uint *)(param_1 + 0x1898);
  if (uVar7 != 1) {
    uVar14 = 0;
    puVar16 = (ushort *)(param_1 + 0x600);
    do {
      if (uVar14 < uVar7) {
        lVar9 = param_1 + uVar14 * 0x30;
        plVar1 = (long *)(lVar9 + 0x5e0);
        plVar2 = (long *)(lVar9 + 0x5e8);
        uVar15 = uVar14;
        puVar17 = puVar16;
        do {
          if (*puVar17 < *(ushort *)(lVar9 + 0x600)) {
            uVar11 = *(undefined8 *)(lVar9 + 0x5d8);
            lVar12 = *plVar1;
            if (lVar12 != 0) {
              (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
            }
            lVar13 = *plVar2;
            if (lVar13 != 0) {
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
            }
            uVar3 = *(undefined8 *)(lVar9 + 0x5f0);
            uVar4 = *(undefined8 *)(lVar9 + 0x5f8);
            uVar5 = *(ushort *)(lVar9 + 0x600);
            *(undefined8 *)(lVar9 + 0x5d8) = *(undefined8 *)(puVar17 + -0x14);
            lVar18 = *(long *)(puVar17 + -0x10);
            if (lVar18 != 0) {
              (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
            }
            lVar6 = *plVar1;
            *plVar1 = lVar18;
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
            }
            lVar18 = *(long *)(puVar17 + -0xc);
            if (lVar18 != 0) {
              (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
            }
            lVar6 = *plVar2;
            *plVar2 = lVar18;
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
            }
            uVar8 = *(undefined8 *)(puVar17 + -8);
            uVar10 = *(undefined8 *)(puVar17 + -4);
            *(ushort *)(lVar9 + 0x600) = *puVar17;
            *(undefined8 *)(lVar9 + 0x5f0) = uVar8;
            *(undefined8 *)(lVar9 + 0x5f8) = uVar10;
            *(undefined8 *)(puVar17 + -0x14) = uVar11;
            if (lVar12 != 0) {
              (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
            }
            lVar18 = *(long *)(puVar17 + -0x10);
            *(long *)(puVar17 + -0x10) = lVar12;
            if (lVar18 != 0) {
              (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
            }
            if (lVar13 != 0) {
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
            }
            lVar18 = *(long *)(puVar17 + -0xc);
            *(long *)(puVar17 + -0xc) = lVar13;
            if (lVar18 != 0) {
              (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
            }
            *puVar17 = uVar5;
            *(undefined8 *)(puVar17 + -8) = uVar3;
            *(undefined8 *)(puVar17 + -4) = uVar4;
            if (lVar13 != 0) {
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
            }
            if (lVar12 != 0) {
              (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
            }
            uVar7 = *(uint *)(param_1 + 0x1898);
          }
          uVar15 = uVar15 + 1;
          puVar17 = puVar17 + 0x18;
        } while (uVar15 < uVar7);
      }
      uVar14 = uVar14 + 1;
      puVar16 = puVar16 + 0x18;
    } while (uVar14 < uVar7 - 1);
  }
  return;
}


