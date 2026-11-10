/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047ceb0; name: FUN_0047ceb0
 */


uint FUN_0047ceb0(ulong param_1)

{
  undefined *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  code *pcVar17;
  byte bVar18;
  long lVar19;
  uint local_78;
  uint uStack_74;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  
  uVar16 = *(uint *)PTR_DAT_02712e58;
  if ((int)uVar16 < 1) {
    uVar16 = 0x15;
    *(undefined4 *)PTR_DAT_02712e58 = 0x15;
  }
  puVar8 = PTR_DAT_02713240;
  puVar6 = PTR_DAT_02712de0;
  uVar4 = 0;
  if (uVar16 != 0) {
    uVar4 = 1000 / uVar16;
  }
  uVar16 = *(uint *)(*(long *)PTR_DAT_02712de0 + 0x78);
  uVar3 = *(ushort *)(PTR_DAT_02712e50 + 0x8c);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar16 / uVar4;
  }
  if ((*PTR_DAT_02712ed8 != '\0') && (lVar19 = *(long *)(PTR_DAT_02713240 + 0x10), lVar19 != 0)) {
    *PTR_DAT_02712ed8 = 0;
    pcVar17 = *(code **)PTR_DAT_02713210;
    if (pcVar17 != (code *)0x0) {
      uVar13 = FUN_0042eec0();
      (*pcVar17)(uVar13,*(undefined4 *)(lVar19 + 0x58),*(undefined4 *)(lVar19 + 0x5c),2,1);
      lVar19 = *(long *)(puVar8 + 0x10);
    }
    if ((*(int *)(lVar19 + 0x120) != 0) &&
       (plVar14 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x28), plVar14 != (long *)0x0
       )) {
      plVar14[3] = 0;
      plVar14[4] = 0;
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = 0;
      FUN_004a5bd0(plVar14);
      puVar7 = PTR_DAT_02713208;
      *(undefined4 *)(plVar14 + 4) = 0;
      *plVar14 = (long)(puVar7 + 0x10);
      plVar14[2] = 0;
      plVar14[3] = 0x2b00000000;
      local_6c = *(undefined4 *)(lVar19 + 100);
      iVar10 = (**(code **)(*plVar14 + 0x38))(plVar14,0,0,0,auStack_70);
      if (iVar10 == 1) {
        FUN_00462550(lVar19 + 0x98);
        *(long **)(lVar19 + 0xf8) = plVar14;
        *(undefined4 *)(lVar19 + 0x3c) = local_6c;
        *(undefined4 *)(lVar19 + 0x120) = 0;
        *(undefined4 *)(lVar19 + 0x18) = 0xb5;
      }
    }
    if (*(int *)(*(long *)(puVar8 + 0x10) + 0x120) != 2) {
      *(undefined4 *)(*(long *)(puVar8 + 0x10) + 0x120) = 2;
      uVar15 = FUN_0042f050();
      if ((uVar15 & 1) != 0) {
        FUN_00434ae0(*(long *)puVar6 + 0x80);
      }
    }
  }
  puVar7 = PTR_DAT_02712ec8;
  puVar6 = PTR_DAT_02712ec0;
  cVar2 = *PTR_DAT_02712ec0;
  lVar19 = *(long *)(puVar8 + 0x10);
  iVar10 = 0;
  local_78 = 0xffffffff;
  uStack_74 = 0;
  if (lVar19 == 0) {
    bVar18 = 1;
    *PTR_DAT_02712ec0 = 1;
    iVar12 = *(int *)puVar8;
  }
  else {
    puVar1 = PTR_DAT_02713208 + 0x10;
    bVar18 = 1;
LAB_0047d088:
    do {
      plVar14 = *(long **)(lVar19 + 0xf8);
      if (plVar14 == (long *)0x0) {
LAB_0047d17c:
        iVar12 = 2;
      }
      else {
        iVar12 = *(int *)(lVar19 + 0x120);
        if (*puVar7 == '\0') {
          bVar9 = iVar12 != 1;
          iVar12 = 1;
          if (bVar9) {
            iVar12 = 2;
          }
          iVar11 = (**(code **)(*plVar14 + 0x40))(plVar14,&uStack_74);
          if (iVar11 == 2) {
            pcVar17 = *(code **)PTR_DAT_02713210;
            if (pcVar17 != (code *)0x0) {
              uVar13 = FUN_0042eec0();
              (*pcVar17)(uVar13,*(undefined4 *)(lVar19 + 0x58),*(undefined4 *)(lVar19 + 0x5c),2,2);
            }
            if ((*(int *)(lVar19 + 0x120) != 0) &&
               (plVar14 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x28),
               plVar14 != (long *)0x0)) {
              plVar14[3] = 0;
              plVar14[4] = 0;
              plVar14[1] = 0;
              plVar14[2] = 0;
              *plVar14 = 0;
              FUN_004a5bd0(plVar14);
              *plVar14 = (long)puVar1;
              plVar14[2] = 0;
              plVar14[3] = 0x2b00000000;
              *(undefined4 *)(plVar14 + 4) = 0;
              local_6c = *(undefined4 *)(lVar19 + 100);
              iVar12 = (**(code **)(*plVar14 + 0x38))(plVar14,0,0,0,auStack_70);
              if (iVar12 == 1) {
                FUN_00462550(lVar19 + 0x98);
                *(long **)(lVar19 + 0xf8) = plVar14;
                *(undefined4 *)(lVar19 + 0x3c) = local_6c;
                *(undefined4 *)(lVar19 + 0x120) = 0;
                *(undefined4 *)(lVar19 + 0x18) = 0xb5;
              }
            }
            goto LAB_0047d17c;
          }
        }
      }
      if ((*(char *)(lVar19 + 0x125) == '\0') || (*(int *)(lVar19 + 0x120) == 0)) {
        bVar9 = true;
      }
      else {
        bVar9 = *(int *)(lVar19 + 0x18) == 0xb5;
      }
      if (iVar12 == 1) {
LAB_0047d1f8:
        if ((!bVar9) && (uStack_74 <= local_78)) {
          local_78 = uStack_74;
        }
        bVar18 = bVar18 & bVar9;
        lVar19 = *(long *)(lVar19 + 8);
        if (lVar19 == 0) break;
        goto LAB_0047d088;
      }
      if ((iVar12 == 2) && (uVar16 - uVar5 * uVar4 < (uint)uVar3 || (param_1 & 1) != 0)) {
        iVar12 = FUN_0047b9c0(lVar19);
        iVar10 = iVar10 + 1;
        if ((iVar12 == 1) &&
           (iVar12 = (**(code **)(**(long **)(lVar19 + 0xf8) + 0x40))
                               (*(long **)(lVar19 + 0xf8),&uStack_74), iVar12 == 1))
        goto LAB_0047d1f8;
      }
      lVar19 = *(long *)(lVar19 + 8);
    } while (lVar19 != 0);
    *puVar6 = bVar18;
    iVar12 = *(int *)puVar8;
  }
  if (iVar12 == 0) {
    local_78 = 0;
  }
  else {
    if (bVar18 == 0) {
      if ((cVar2 != '\0') && (*PTR_DAT_02712ec8 == '\0')) {
        (**(code **)(**(long **)(*(long *)(puVar8 + 0x10) + 0xf8) + 0x40))
                  (*(long **)(*(long *)(puVar8 + 0x10) + 0xf8),&local_78);
      }
    }
    else {
      plVar14 = *(long **)(*(long *)(puVar8 + 0x10) + 0xf8);
      if ((plVar14 == (long *)0x0) ||
         (iVar12 = (**(code **)(*plVar14 + 0x40))(plVar14,&local_78), iVar12 != 1)) {
        *PTR_DAT_02712ed8 = 1;
        return 0;
      }
      if (cVar2 == '\0') {
        FUN_0047c380(1,1);
        local_78 = 0;
      }
    }
    if (iVar10 != 0) {
      FUN_004c5bc0(0);
    }
  }
  return local_78;
}


