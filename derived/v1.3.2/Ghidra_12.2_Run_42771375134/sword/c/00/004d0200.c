/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d0200; name: FUN_004d0200
 */


void FUN_004d0200(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 local_68;
  
  lVar17 = *(long *)(param_1 + 0x20);
  if (DAT_01d4c2ec <= *(float *)(lVar17 + 0x60) * DAT_01d4c158) {
    uVar13 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * *(float *)(lVar17 + 0x60));
    fVar18 = (float)(uVar13 & 0x7fffff | 0x3f800000);
    fVar18 = (DAT_01d4c23c + fVar18 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar18)) *
             (float)(uVar13 & 0xff800000);
  }
  else {
    fVar18 = 0.0;
  }
  *(float *)(param_1 + 0x38) = *(float *)(lVar17 + 100) * fVar18;
  iVar9 = FUN_00451600(lVar17);
  if (iVar9 != 0) {
    iVar9 = FUN_004500e0(lVar17,param_1 + 0x28);
    if (iVar9 == 0) {
      return;
    }
    FUN_0042c660(lVar17,param_1 + 0x28);
    return;
  }
  local_68 = *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x48);
  if (*(char *)(lVar17 + 0x11d) == '\0') {
    uVar13 = 1;
    puVar16 = &local_68;
    uVar5 = *(uint *)(param_1 + 0x30);
    puVar6 = (undefined4 *)PTR_DAT_02712a90;
    puVar7 = (undefined8 *)PTR_DAT_02712d18;
    piVar8 = (int *)PTR_DAT_02712d38;
    if (uVar5 == 1) goto joined_r0x004d03ac;
  }
  else {
    lVar10 = FUN_004959d0();
    uVar13 = *(uint *)(lVar10 + 0x10);
    puVar16 = *(undefined8 **)(lVar10 + 8);
    uVar5 = *(uint *)(param_1 + 0x30);
    puVar6 = (undefined4 *)PTR_DAT_02712a90;
    puVar7 = (undefined8 *)PTR_DAT_02712d18;
    piVar8 = (int *)PTR_DAT_02712d38;
    if (uVar13 == uVar5) goto joined_r0x004d03ac;
  }
  if (uVar5 <= uVar13) {
    if ((*(uint *)(param_1 + 0x34) < uVar13) &&
       (uVar11 = FUN_00450d00((long *)(param_1 + 0x28),uVar13 - uVar5), (uVar11 & 1) == 0)) {
      return;
    }
    if (uVar5 < uVar13) {
      lVar14 = (ulong)uVar13 - (ulong)uVar5;
      lVar10 = (ulong)uVar5 * 0x60 + 0x5c;
      do {
        lVar3 = *(long *)(param_1 + 0x28) + lVar10;
        if (lVar3 != 0x5c) {
          *(undefined8 *)(lVar3 + -0x38) = 0;
          *(undefined8 *)(lVar3 + -0x30) = 0x3f80000000000000;
          *(undefined8 *)(lVar3 + -0x28) = 0x3f8000003f800000;
          *(undefined4 *)(lVar3 + -0x10) = 0xffffffff;
          *(undefined8 *)(lVar3 + -0xc) = 0;
          *(undefined8 *)(lVar3 + -4) = 0x3f8000003f800000;
          *(undefined8 *)(lVar3 + -0x20) = 0;
          *(undefined8 *)(lVar3 + -0x18) = 0;
        }
        lVar14 = lVar14 + -1;
        lVar10 = lVar10 + 0x60;
      } while (lVar14 != 0);
    }
  }
  *(uint *)(param_1 + 0x30) = uVar13;
  puVar6 = (undefined4 *)PTR_DAT_02712a90;
  puVar7 = (undefined8 *)PTR_DAT_02712d18;
  piVar8 = (int *)PTR_DAT_02712d38;
joined_r0x004d03ac:
  PTR_DAT_02712a90 = (undefined *)puVar6;
  PTR_DAT_02712d18 = (undefined *)puVar7;
  PTR_DAT_02712d38 = (undefined *)piVar8;
  if (uVar13 != 0) {
    uVar11 = 0;
    puVar1 = PTR_DAT_02712d28 + 0x10;
    puVar2 = PTR_DAT_02712d30 + 0x10;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar11 * 0x60 + 0x50) = puVar16[uVar11];
      uVar15 = puVar16[uVar11];
      plVar12 = (long *)FUN_004958e0(*(undefined8 *)(lVar17 + 0x10));
      if ((char)plVar12[0x17] == '\0') {
        plVar12 = (long *)*puVar7;
        do {
          while (plVar12 != (long *)0x0) {
            if ((char)plVar12[0x17] != '\0') goto LAB_004d04c0;
          }
          plVar12 = (long *)FUN_00404690(*puVar6,0xc0);
          *plVar12 = (long)puVar1;
          plVar12[1] = 0;
          lVar10 = *(long *)(piVar8 + 2);
          plVar12[2] = 0;
          plVar12[3] = lVar10;
          plVar4 = (long *)(piVar8 + 4);
          if (*(long *)(piVar8 + 4) != 0) {
            plVar4 = (long *)(lVar10 + 0x10);
          }
          *plVar4 = (long)plVar12;
          *(long **)(piVar8 + 2) = plVar12;
          *piVar8 = *piVar8 + 1;
          *plVar12 = (long)puVar2;
          plVar12[7] = 0;
          plVar12[8] = 0;
          plVar12[10] = 0;
          plVar12[0xb] = 0;
          plVar12[0xf] = 0;
          plVar12[0x10] = 0;
          plVar12[0x12] = 0;
          plVar12[0x13] = 0;
          plVar12[0x15] = 0;
          plVar12[0x16] = 0;
          *puVar7 = plVar12;
          *(undefined2 *)(plVar12 + 0x17) = 0x101;
        } while ((char)plVar12[0x17] == '\0');
      }
LAB_004d04c0:
      uVar19 = FUN_00459930(plVar12 + 4,uVar15,0);
      lVar10 = uVar11 * 0x60;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar10 + 0x30) = uVar19;
    } while (uVar11 != uVar13);
  }
  return;
}


