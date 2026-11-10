/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bafd0; name: FUN_005bafd0
 */


void FUN_005bafd0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long in_x5;
  long in_x6;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  puVar5 = PTR_PTR_02713988;
  puVar8 = (undefined8 *)
           FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x18,
                        "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0xc3,0);
  puVar9 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8 + 1;
    *puVar8 = 2;
  }
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar10 = (undefined8 *)
            FUN_005b9a50(*(undefined8 *)puVar5,0x18,
                         "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0xc6,0);
  puVar8 = puVar10;
  if (puVar10 != (undefined8 *)0x0) {
    puVar8 = puVar10 + 1;
    *puVar10 = 2;
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar11 = (long *)FUN_005b9a50(*(undefined8 *)puVar5,0x18,
                                 "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",200,0);
  plVar15 = plVar11;
  if (plVar11 != (long *)0x0) {
    plVar15 = plVar11 + 1;
    *plVar11 = 2;
  }
  *plVar15 = 0;
  plVar15[1] = 0;
  if (in_x6 << 3 != 0) {
    bVar6 = false;
    uVar18 = 0;
    uVar16 = in_x6 << 3;
    do {
      bVar6 = !bVar6;
      uVar2 = uVar16;
      uVar4 = uVar16 - 1;
      if (bVar6) {
        uVar2 = uVar18 + 4;
        uVar4 = uVar18;
      }
      uVar3 = uVar16 - 4;
      if (bVar6) {
        uVar3 = uVar16;
      }
      uVar1 = (uint)uVar2 & 7;
      if (bVar6) {
        uVar18 = uVar18 + 4;
      }
      uVar14 = (uint)*(byte *)(in_x5 + (uVar4 >> 3));
      bVar6 = (uVar14 & 8 << (ulong)uVar1) >> (ulong)(uVar1 + 3) != 0;
      bVar7 = (uVar14 & 4 << (ulong)uVar1) >> (ulong)(uVar1 + 2) != 0;
      uVar16 = puVar9[bVar7];
      puVar9[bVar7] = uVar16 + 1;
      lVar17 = plVar15[bVar7];
      if ((ulong)(lVar17 << 3) <= uVar16) {
        if (lVar17 == 0) {
          plVar11 = (long *)0x0;
          puVar10 = (undefined8 *)PTR_PTR_02713988;
        }
        else {
          plVar13 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,lVar17 + 8,
                                         "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0xf5,0);
          plVar11 = plVar13;
          if (plVar13 != (long *)0x0) {
            plVar11 = plVar13 + 1;
            *plVar13 = lVar17;
          }
          memcpy(plVar11,(void *)puVar8[bVar7],plVar15[bVar7]);
          puVar10 = (undefined8 *)PTR_PTR_02713988;
          if (puVar8[bVar7] == 0) {
          }
          else {
            FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar8[bVar7] + -8);
          }
        }
        lVar17 = plVar15[bVar7];
        plVar12 = (long *)FUN_005b9a50(*puVar10,lVar17 + 9,
                                       "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0xf9,0);
        plVar13 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          *plVar12 = lVar17 + 1;
        }
        puVar8[bVar7] = plVar13;
        if ((plVar15[bVar7] != 0) &&
           (memcpy(plVar13,plVar11,plVar15[bVar7]), plVar11 != (long *)0x0)) {
          FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,plVar11 + -1);
        }
        *(undefined1 *)(puVar8[bVar7] + plVar15[bVar7]) = 0;
        plVar15[bVar7] = plVar15[bVar7] + 1;
      }
      *(byte *)(puVar8[bVar7] + (uVar16 >> 3)) =
           *(byte *)(puVar8[bVar7] + (uVar16 >> 3)) |
           (((uint)*(byte *)(in_x5 + (uVar4 >> 3)) & 2 << (ulong)uVar1) >> (ulong)(uVar1 + 1) != 0)
           << (ulong)(~(uint)uVar16 & 7);
      uVar16 = uVar3;
    } while (uVar18 < uVar3);
  }
  lVar17 = *plVar15;
  plVar13 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,lVar17 + 9,
                                 "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x112,0);
  plVar11 = plVar13;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 1;
    *plVar13 = lVar17 + 1;
  }
  *param_2 = plVar11;
                    /* WARNING: Subroutine does not return */
  memset(plVar11,0,*plVar15 + 1);
}


