/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4b00; name: FUN_004f4b00
 */


undefined8 FUN_004f4b00(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  
  puVar8 = PTR_DAT_02712d38;
  puVar7 = PTR_DAT_02712d18;
  puVar6 = PTR_DAT_02712a90;
  lVar10 = *(long *)(param_1 + 8);
  if ((1 < *(uint *)(lVar10 + 0x40)) &&
     (plVar9 = *(long **)(*(long *)(lVar10 + 0x38) + 8), plVar9 != (long *)0x0)) {
    if (*(char *)((long)plVar9 + 0xb9) == '\0') {
      plVar9 = *(long **)PTR_DAT_02712d18;
      puVar1 = PTR_DAT_02712d28 + 0x10;
      puVar2 = PTR_DAT_02712d30 + 0x10;
      do {
        while (plVar9 == (long *)0x0) {
          plVar9 = (long *)FUN_00404690(*(undefined4 *)puVar6,0xc0);
          *plVar9 = (long)puVar1;
          plVar9[1] = 0;
          lVar10 = *(long *)(puVar8 + 8);
          plVar9[2] = 0;
          plVar9[3] = lVar10;
          plVar3 = (long *)(puVar8 + 0x10);
          if (*(long *)(puVar8 + 0x10) != 0) {
            plVar3 = (long *)(lVar10 + 0x10);
          }
          *plVar3 = (long)plVar9;
          *(long **)(puVar8 + 8) = plVar9;
          *(int *)puVar8 = *(int *)puVar8 + 1;
          *plVar9 = (long)puVar2;
          plVar9[7] = 0;
          plVar9[8] = 0;
          plVar9[10] = 0;
          plVar9[0xb] = 0;
          plVar9[0xf] = 0;
          plVar9[0x10] = 0;
          plVar9[0x12] = 0;
          plVar9[0x13] = 0;
          plVar9[0x15] = 0;
          plVar9[0x16] = 0;
          *(long **)puVar7 = plVar9;
          *(undefined2 *)(plVar9 + 0x17) = 0x101;
          if (*(char *)((long)plVar9 + 0xb9) != '\0') goto LAB_004f4bf4;
        }
      } while (*(char *)((long)plVar9 + 0xb9) == '\0');
LAB_004f4bf4:
      lVar10 = *(long *)(param_1 + 8);
    }
    FUN_00458f50(plVar9 + 0xc,*(undefined8 *)(lVar10 + 0x48),param_2);
    lVar10 = *(long *)(param_1 + 8);
  }
  FUN_00468bd0(param_2,*(undefined8 *)(lVar10 + 0x48),3,0,0xab,0,0,0);
  iVar11 = *(uint *)(param_1 + 0xe8) - 1;
  if (-1 < iVar11) {
    lVar10 = *(long *)(param_1 + 0xe0);
    iVar12 = 0;
    do {
      while( true ) {
        iVar5 = iVar11 - iVar12;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar12 + (iVar5 >> 1);
        uVar4 = *(uint *)(lVar10 + (long)iVar5 * 0x18);
        if (param_2 > uVar4 || uVar4 == param_2) break;
        iVar11 = iVar5 + -1;
        if (iVar11 < iVar12) {
          return 0;
        }
      }
      if (param_2 <= uVar4) {
        puVar14 = (undefined4 *)(lVar10 + (long)iVar5 * 0x18);
        puVar13 = (undefined4 *)(lVar10 + (ulong)*(uint *)(param_1 + 0xe8) * 0x18 + -0x18);
        if (puVar14 < puVar13) {
          do {
            FUN_004e7d20(puVar14);
            puVar15 = puVar14 + 6;
            *puVar14 = *puVar15;
            *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar14 + 10);
            puVar14[2] = puVar14[8];
            *puVar15 = 0;
            *(undefined8 *)(puVar14 + 10) = 0;
            puVar14[8] = 0;
            puVar14 = puVar15;
          } while (puVar15 < puVar13);
        }
        FUN_004e7ce0(puVar13);
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
        return 1;
      }
      iVar12 = iVar5 + 1;
    } while (iVar12 <= iVar11);
  }
  return 0;
}


