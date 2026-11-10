/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004994d0; name: FUN_004994d0
 */


void FUN_004994d0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  
  puVar9 = PTR_DAT_02712d38;
  puVar8 = PTR_DAT_02712d18;
  puVar7 = PTR_DAT_02712a90;
  lVar15 = *(long *)(PTR_DAT_02713320 + 0x10);
  if (lVar15 != 0) {
    puVar1 = PTR_DAT_02712d28 + 0x10;
    puVar2 = PTR_DAT_02712d30 + 0x10;
    do {
      if (((*(uint *)(*(long *)(lVar15 + 8) + 0x40) < 2) ||
          (plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 8) + 0x38) + 8), plVar11 == (long *)0x0
          )) && (plVar11 = *(long **)puVar8, plVar11 == (long *)0x0)) {
        plVar11 = (long *)FUN_00404690(*(undefined4 *)puVar7,0xc0);
        if (plVar11 == (long *)0x0) {
          *(undefined8 *)puVar8 = 0;
          uVar6 = *(uint *)(param_2 + 0x10);
        }
        else {
          *plVar11 = (long)puVar1;
          plVar11[1] = 0;
          lVar14 = *(long *)(puVar9 + 8);
          plVar11[2] = 0;
          plVar11[3] = lVar14;
          plVar5 = (long *)(puVar9 + 0x10);
          if (*(long *)(puVar9 + 0x10) != 0) {
            plVar5 = (long *)(lVar14 + 0x10);
          }
          *plVar5 = (long)plVar11;
          *(long **)(puVar9 + 8) = plVar11;
          *(int *)puVar9 = *(int *)puVar9 + 1;
          *plVar11 = (long)puVar2;
          plVar11[7] = 0;
          plVar11[8] = 0;
          plVar11[10] = 0;
          plVar11[0xb] = 0;
          plVar11[0xf] = 0;
          plVar11[0x10] = 0;
          plVar11[0x12] = 0;
          plVar11[0x13] = 0;
          plVar11[0x15] = 0;
          plVar11[0x16] = 0;
          *(long **)puVar8 = plVar11;
          *(undefined2 *)(plVar11 + 0x17) = 0x101;
          uVar6 = *(uint *)(param_2 + 0x10);
        }
      }
      else {
        uVar6 = *(uint *)(param_2 + 0x10);
      }
      if (uVar6 != 0) {
        puVar12 = *(ulong **)(param_2 + 8);
        puVar13 = (ulong *)plVar11[0x15];
        puVar3 = puVar12 + uVar6;
        puVar4 = puVar13 + *(uint *)(plVar11 + 0x16);
        do {
          if (puVar13 == puVar4) break;
          if (*puVar12 == *puVar13) {
            *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
            lVar15 = *(long *)(lVar15 + 0x10);
            goto joined_r0x00499544;
          }
          puVar10 = puVar12 + 1;
          if (*puVar13 <= *puVar12) {
            puVar13 = puVar13 + 1;
            puVar10 = puVar12;
          }
          puVar12 = puVar10;
        } while (puVar12 != puVar3);
      }
      lVar15 = *(long *)(lVar15 + 0x10);
joined_r0x00499544:
    } while (lVar15 != 0);
  }
  return;
}


