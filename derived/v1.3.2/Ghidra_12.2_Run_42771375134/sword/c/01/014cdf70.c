/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014cdf70; name: FUN_014cdf70
 */


void FUN_014cdf70(long param_1,long *param_2)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong extraout_x9;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  
  puVar2 = (uint *)(param_1 + 0x2ce0);
  uVar10 = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x136) = 0;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  *(undefined1 *)(param_1 + 0x166) = 0;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  *(undefined1 *)(param_1 + 0x196) = 0;
  *(undefined1 *)(param_1 + 0x1ae) = 0;
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  *(undefined1 *)(param_1 + 0x1de) = 0;
  *(undefined1 *)(param_1 + 0x1f6) = 0;
  *(undefined1 *)(param_1 + 0x20e) = 0;
  *(undefined1 *)(param_1 + 0x226) = 0;
  *(undefined1 *)(param_1 + 0x23e) = 0;
  *(undefined1 *)(param_1 + 0x256) = 0;
  *(undefined1 *)(param_1 + 0x26e) = 0;
  *(undefined1 *)(param_1 + 0x286) = 0;
  *(undefined1 *)(param_1 + 0x29e) = 0;
  *(undefined1 *)(param_1 + 0x2b6) = 0;
  *(undefined1 *)(param_1 + 0x2ce) = 0;
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  *(undefined1 *)(param_1 + 0x2fe) = 0;
  *(undefined1 *)(param_1 + 0x316) = 0;
  *(undefined1 *)(param_1 + 0x32e) = 0;
  *(undefined1 *)(param_1 + 0x346) = 0;
  *(undefined1 *)(param_1 + 0x35e) = 0;
  *(undefined1 *)(param_1 + 0x376) = 0;
  *(undefined1 *)(param_1 + 0x38e) = 0;
  *(undefined1 *)(param_1 + 0x3a6) = 0;
  *(undefined1 *)(param_1 + 0x3be) = 0;
  *(undefined1 *)(param_1 + 0x3d6) = 0;
  *(undefined1 *)(param_1 + 0x3ee) = 0;
  *(undefined1 *)(param_1 + 0x406) = 0;
  *(undefined1 *)(param_1 + 0x41e) = 0;
  *(undefined1 *)(param_1 + 0x436) = 0;
  *(undefined1 *)(param_1 + 0x44e) = 0;
  *(undefined1 *)(param_1 + 0x466) = 0;
  *(undefined1 *)(param_1 + 0x47e) = 0;
  *(undefined1 *)(param_1 + 0x496) = 0;
  *(undefined1 *)(param_1 + 0x4ae) = 0;
  *(undefined1 *)(param_1 + 0x4c6) = 0;
  *(undefined1 *)(param_1 + 0x4de) = 0;
  *(undefined1 *)(param_1 + 0x4f6) = 0;
  *(undefined1 *)(param_1 + 0x50e) = 0;
  *(undefined1 *)(param_1 + 0x526) = 0;
  *(undefined1 *)(param_1 + 0x53e) = 0;
  *(undefined1 *)(param_1 + 0x556) = 0;
  *(undefined1 *)(param_1 + 0x56e) = 0;
  *(undefined1 *)(param_1 + 0x586) = 0;
  *(undefined1 *)(param_1 + 0x59e) = 0;
  *(undefined1 *)(param_1 + 0x5b6) = 0;
  *(undefined1 *)(param_1 + 0x5ce) = 0;
  *(undefined1 *)(param_1 + 0x5e6) = 0;
  *(undefined1 *)(param_1 + 0x5fe) = 0;
  *(undefined1 *)(param_1 + 0x616) = 0;
  *(undefined1 *)(param_1 + 0x62e) = 0;
  *(undefined1 *)(param_1 + 0x646) = 0;
  *(undefined1 *)(param_1 + 0x65e) = 0;
  *(undefined1 *)(param_1 + 0x676) = 0;
  *(undefined1 *)(param_1 + 0x68e) = 0;
  *(undefined1 *)(param_1 + 0x6a6) = 0;
  *(undefined1 *)(param_1 + 0x6be) = 0;
  *(undefined1 *)(param_1 + 0x6d6) = 0;
  *(undefined1 *)(param_1 + 0x6ee) = 0;
  *(undefined1 *)(param_1 + 0x706) = 0;
  *(undefined1 *)(param_1 + 0x71e) = 0;
  *(undefined1 *)(param_1 + 0x736) = 0;
  *(undefined1 *)(param_1 + 0x74e) = 0;
  *(undefined1 *)(param_1 + 0x766) = 0;
  *(undefined1 *)(param_1 + 0x77e) = 0;
  *(undefined1 *)(param_1 + 0x796) = 0;
  *(undefined1 *)(param_1 + 0x7ae) = 0;
  *(undefined1 *)(param_1 + 0x7c6) = 0;
  *(undefined1 *)(param_1 + 0x7de) = 0;
  *(undefined1 *)(param_1 + 0x7f6) = 0;
  *(undefined1 *)(param_1 + 0x80e) = 0;
  *(undefined1 *)(param_1 + 0x826) = 0;
  *(undefined1 *)(param_1 + 0x83e) = 0;
  *(undefined1 *)(param_1 + 0x856) = 0;
  *(undefined1 *)(param_1 + 0x86e) = 0;
  *(undefined1 *)(param_1 + 0x886) = 0;
  *(undefined1 *)(param_1 + 0x89e) = 0;
  *(undefined1 *)(param_1 + 0x8b6) = 0;
  *(undefined1 *)(param_1 + 0x8ce) = 0;
  *(undefined1 *)(param_1 + 0x8e6) = 0;
  *(undefined1 *)(param_1 + 0x8fe) = 0;
  *(undefined1 *)(param_1 + 0x916) = 0;
  *(undefined1 *)(param_1 + 0x92e) = 0;
  *(undefined1 *)(param_1 + 0x946) = 0;
  *(undefined1 *)(param_1 + 0x95e) = 0;
  *(undefined1 *)(param_1 + 0x976) = 0;
  *(undefined1 *)(param_1 + 0x98e) = 0;
  *(undefined1 *)(param_1 + 0x9a6) = 0;
  *(undefined1 *)(param_1 + 0x9be) = 0;
  *(undefined1 *)(param_1 + 0x9d6) = 0;
  do {
    FUN_0154e6d0(uVar10,param_1 + 0x9d8);
    iVar3 = *(int *)(param_1 + 0x9dc);
    if (iVar3 != 0) {
      bVar6 = false;
      uVar15 = 1;
      uVar13 = extraout_x9;
      pcVar18 = (char *)(param_1 + 0xa4);
      do {
        uVar9 = (uint)uVar13;
        cVar5 = pcVar18[-0x18];
        if (cVar5 == '\n') {
          if (*(int *)(pcVar18 + -0x2c) != iVar3) {
            cVar5 = *pcVar18;
            goto joined_r0x014ce31c;
          }
          uVar15 = uVar15 - 1;
LAB_014ce368:
          uVar13 = uVar15 & 0xffffffff;
          goto LAB_014ce36c;
        }
        uVar8 = (uint)uVar15 - 1;
        if (bVar6) {
          bVar7 = bVar6;
          uVar8 = uVar9;
        }
        else {
          bVar7 = true;
        }
        if (cVar5 == '\0') {
          uVar9 = uVar8;
        }
        uVar13 = (ulong)uVar9;
        if (cVar5 == '\0') {
          bVar6 = bVar7;
        }
        cVar5 = *pcVar18;
joined_r0x014ce31c:
        if (cVar5 == '\0') {
          uVar8 = (uint)uVar15;
          if (bVar6) {
            uVar8 = uVar9;
          }
          uVar13 = (ulong)uVar8;
          if (!bVar6) {
            bVar6 = true;
          }
        }
        else if ((cVar5 == '\n') && (*(int *)(pcVar18 + -0x14) == iVar3)) goto LAB_014ce368;
        uVar1 = uVar15 + 1;
        uVar15 = uVar15 + 2;
        pcVar18 = pcVar18 + 0x30;
      } while (uVar1 < 100);
      if (bVar6) {
LAB_014ce36c:
        uVar15 = uVar13 & 0xffffffff;
        pcVar18 = (char *)(param_1 + (uVar13 & 0xffffffff) * 0x18 + 0x8c);
        cVar5 = *pcVar18;
        if (cVar5 == '\0') {
          *(int *)(param_1 + uVar15 * 0x18 + 0x78) = iVar3;
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = param_2;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
          lVar11 = (**(code **)(*param_2 + 0x10))(param_2,400,0x10);
          if (lVar11 == 0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_009fe380(lVar11,param_2);
          *(long **)(lVar11 + 8) = param_2;
          *(long *)(lVar11 + 0x10) = lVar11;
          *(undefined8 *)(lVar11 + 0x18) = 400;
          *(undefined8 *)(lVar11 + 0x20) = 0x10;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
          }
          plVar17 = (long *)(param_1 + uVar15 * 0x18 + 0x80);
          if (*plVar17 != 0) {
            (**(code **)(*(long *)(*plVar17 + 0x48) + 0x18))();
            *plVar17 = 0;
          }
          *plVar17 = lVar11;
          FUN_009fe790(lVar11,param_1 + 0x9e0);
          *pcVar18 = '\n';
          *(undefined2 *)(param_1 + uVar15 * 0x18 + 0x8d) = 0x101;
          puVar14 = puVar2;
          if ((((((((*(int *)(param_1 + 0x2ce0) < 0) ||
                   (puVar14 = (uint *)(param_1 + 0x2ce4), (int)*(uint *)(param_1 + 0x2ce4) < 0)) ||
                  (puVar14 = (uint *)(param_1 + 0x2ce8), (int)*(uint *)(param_1 + 0x2ce8) < 0)) ||
                 ((puVar14 = (uint *)(param_1 + 0x2cec), (int)*(uint *)(param_1 + 0x2cec) < 0 ||
                  (puVar14 = (uint *)(param_1 + 0x2cf0), (int)*(uint *)(param_1 + 0x2cf0) < 0)))) ||
                (puVar14 = (uint *)(param_1 + 0x2cf4), (int)*(uint *)(param_1 + 0x2cf4) < 0)) ||
               (((puVar14 = (uint *)(param_1 + 0x2cf8), (int)*(uint *)(param_1 + 0x2cf8) < 0 ||
                 (puVar14 = (uint *)(param_1 + 0x2cfc), (int)*(uint *)(param_1 + 0x2cfc) < 0)) ||
                ((puVar14 = (uint *)(param_1 + 0x2d00), (int)*(uint *)(param_1 + 0x2d00) < 0 ||
                 (((puVar14 = (uint *)(param_1 + 0x2d04), (int)*(uint *)(param_1 + 0x2d04) < 0 ||
                   (puVar14 = (uint *)(param_1 + 0x2d08), (int)*(uint *)(param_1 + 0x2d08) < 0)) ||
                  (puVar14 = (uint *)(param_1 + 0x2d0c), (int)*(uint *)(param_1 + 0x2d0c) < 0)))))))
               ) || (((puVar14 = (uint *)(param_1 + 0x2d10), (int)*(uint *)(param_1 + 0x2d10) < 0 ||
                      (puVar14 = (uint *)(param_1 + 0x2d14), (int)*(uint *)(param_1 + 0x2d14) < 0))
                     || ((puVar14 = (uint *)(param_1 + 0x2d18), (int)*(uint *)(param_1 + 0x2d18) < 0
                         || (((((puVar14 = (uint *)(param_1 + 0x2d1c),
                                (int)*(uint *)(param_1 + 0x2d1c) < 0 ||
                                (puVar14 = (uint *)(param_1 + 0x2d20),
                                (int)*(uint *)(param_1 + 0x2d20) < 0)) ||
                               ((puVar14 = (uint *)(param_1 + 0x2d24),
                                (int)*(uint *)(param_1 + 0x2d24) < 0 ||
                                (((puVar14 = (uint *)(param_1 + 0x2d28),
                                  (int)*(uint *)(param_1 + 0x2d28) < 0 ||
                                  (puVar14 = (uint *)(param_1 + 0x2d2c),
                                  (int)*(uint *)(param_1 + 0x2d2c) < 0)) ||
                                 (puVar14 = (uint *)(param_1 + 0x2d30),
                                 (int)*(uint *)(param_1 + 0x2d30) < 0)))))) ||
                              ((puVar14 = (uint *)(param_1 + 0x2d34),
                               (int)*(uint *)(param_1 + 0x2d34) < 0 ||
                               (puVar14 = (uint *)(param_1 + 0x2d38),
                               (int)*(uint *)(param_1 + 0x2d38) < 0)))) ||
                             (puVar14 = (uint *)(param_1 + 0x2d3c),
                             (int)*(uint *)(param_1 + 0x2d3c) < 0)))))))) ||
             (((puVar14 = (uint *)(param_1 + 0x2d40), (int)*(uint *)(param_1 + 0x2d40) < 0 ||
               (puVar14 = (uint *)(param_1 + 0x2d44), (int)*(uint *)(param_1 + 0x2d44) < 0)) ||
              ((puVar14 = (uint *)(param_1 + 0x2d48), (int)*(uint *)(param_1 + 0x2d48) < 0 ||
               (((puVar14 = (uint *)(param_1 + 0x2d4c), (int)*(uint *)(param_1 + 0x2d4c) < 0 ||
                 (puVar14 = (uint *)(param_1 + 0x2d50), (int)*(uint *)(param_1 + 0x2d50) < 0)) ||
                (puVar14 = (uint *)(param_1 + 0x2d54), (int)*(uint *)(param_1 + 0x2d54) < 0))))))))
          {
            uVar9 = FUN_009fe1a0(*plVar17,10);
            *puVar14 = *puVar14 & 0xffff8000 | uVar9 & 0x7fff;
            uVar9 = FUN_009ff180(*plVar17);
            *puVar14 = *puVar14 & 0x80000000 | *puVar14 & 0x7fff | (uVar9 & 0xff) << 0xf;
          }
        }
        else if (cVar5 == '\n') {
          lVar16 = param_1 + uVar15 * 0x18;
          FUN_009fe790(*(undefined8 *)(lVar16 + 0x80),param_1 + 0x9e0);
          *(undefined1 *)(lVar16 + 0x8e) = 1;
          uVar8 = FUN_009fe1a0(*(undefined8 *)(lVar16 + 0x80),10);
          uVar9 = FUN_009ff180(*(undefined8 *)(lVar16 + 0x80));
          uVar9 = uVar9 & 0xff;
          puVar14 = puVar2;
          do {
            uVar4 = *puVar14;
            if (((-1 < (int)uVar4) &&
                (uVar8 == (uVar4 & 0x7fff) && (uVar4 >> 0xf & 0xffff) != uVar9)) ||
               (((uVar4 = puVar14[1], -1 < (int)uVar4 &&
                 ((uVar8 == (uVar4 & 0x7fff) && ((uVar4 >> 0xf & 0xffff) != uVar9)))) ||
                ((uVar4 = puVar14[2], -1 < (int)uVar4 &&
                 ((uVar8 == (uVar4 & 0x7fff) && ((uVar4 >> 0xf & 0xffff) != uVar9)))))))) {
              *(undefined1 *)(param_1 + uVar15 * 0x18 + 0x8d) = 1;
              break;
            }
            puVar14 = puVar14 + 3;
          } while (puVar14 != (uint *)(param_1 + 0x2d58));
        }
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x1e);
  lVar16 = 0;
  do {
    while ((lVar11 = param_1 + lVar16, *(char *)(lVar11 + 0x8c) != '\n' ||
           (*(char *)(lVar11 + 0x8e) != '\0'))) {
      lVar16 = lVar16 + 0x18;
      if (lVar16 == 0x960) {
        return;
      }
    }
    if (*(long *)(lVar11 + 0x80) == 0) {
      *(undefined4 *)(lVar11 + 0x78) = 0;
    }
    else {
      uVar10 = FUN_009fe1a0(*(long *)(lVar11 + 0x80),10);
      if (uVar10 == (*puVar2 & 0x7fff)) {
        *puVar2 = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2ce4) & 0x7fff)) goto LAB_014ce778;
LAB_014ce968:
        *(undefined4 *)(param_1 + 0x2ce4) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2ce8) & 0x7fff)) goto LAB_014ce788;
LAB_014ce97c:
        *(undefined4 *)(param_1 + 0x2ce8) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2cec) & 0x7fff)) goto LAB_014ce798;
LAB_014ce990:
        *(undefined4 *)(param_1 + 0x2cec) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2cf0) & 0x7fff)) goto LAB_014ce7a8;
LAB_014ce9a4:
        *(undefined4 *)(param_1 + 0x2cf0) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2cf4) & 0x7fff)) goto LAB_014ce7b8;
LAB_014ce9b8:
        *(undefined4 *)(param_1 + 0x2cf4) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2cf8) & 0x7fff)) goto LAB_014ce7c8;
LAB_014ce9cc:
        *(undefined4 *)(param_1 + 0x2cf8) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2cfc) & 0x7fff)) goto LAB_014ce7d8;
LAB_014ce9e0:
        *(undefined4 *)(param_1 + 0x2cfc) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d00) & 0x7fff)) goto LAB_014ce7e8;
LAB_014ce9f4:
        *(undefined4 *)(param_1 + 0x2d00) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d04) & 0x7fff)) goto LAB_014ce7f8;
LAB_014cea08:
        *(undefined4 *)(param_1 + 0x2d04) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d08) & 0x7fff)) goto LAB_014ce808;
LAB_014cea1c:
        *(undefined4 *)(param_1 + 0x2d08) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d0c) & 0x7fff)) goto LAB_014ce818;
LAB_014cea30:
        *(undefined4 *)(param_1 + 0x2d0c) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d10) & 0x7fff)) goto LAB_014ce828;
LAB_014cea44:
        *(undefined4 *)(param_1 + 0x2d10) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d14) & 0x7fff)) goto LAB_014ce838;
LAB_014cea58:
        *(undefined4 *)(param_1 + 0x2d14) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d18) & 0x7fff)) goto LAB_014ce848;
LAB_014cea6c:
        *(undefined4 *)(param_1 + 0x2d18) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d1c) & 0x7fff)) goto LAB_014ce858;
LAB_014cea80:
        *(undefined4 *)(param_1 + 0x2d1c) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d20) & 0x7fff)) goto LAB_014ce868;
LAB_014cea94:
        *(undefined4 *)(param_1 + 0x2d20) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d24) & 0x7fff)) goto LAB_014ce878;
LAB_014ceaa8:
        *(undefined4 *)(param_1 + 0x2d24) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d28) & 0x7fff)) goto LAB_014ce888;
LAB_014ceabc:
        *(undefined4 *)(param_1 + 0x2d28) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d2c) & 0x7fff)) goto LAB_014ce898;
LAB_014cead0:
        *(undefined4 *)(param_1 + 0x2d2c) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d30) & 0x7fff)) goto LAB_014ce8a8;
LAB_014ceae4:
        *(undefined4 *)(param_1 + 0x2d30) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d34) & 0x7fff)) goto LAB_014ce8b8;
LAB_014ceaf8:
        *(undefined4 *)(param_1 + 0x2d34) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d38) & 0x7fff)) goto LAB_014ce8c8;
LAB_014ceb0c:
        *(undefined4 *)(param_1 + 0x2d38) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d3c) & 0x7fff)) goto LAB_014ce8d8;
LAB_014ceb20:
        *(undefined4 *)(param_1 + 0x2d3c) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d40) & 0x7fff)) goto LAB_014ce8e8;
LAB_014ceb34:
        *(undefined4 *)(param_1 + 0x2d40) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d44) & 0x7fff)) goto LAB_014ce8f8;
LAB_014ceb48:
        *(undefined4 *)(param_1 + 0x2d44) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d48) & 0x7fff)) goto LAB_014ce908;
LAB_014ceb5c:
        *(undefined4 *)(param_1 + 0x2d48) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d4c) & 0x7fff)) goto LAB_014ce918;
LAB_014ceb70:
        *(undefined4 *)(param_1 + 0x2d4c) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d50) & 0x7fff)) goto LAB_014ce928;
LAB_014ceb84:
        *(undefined4 *)(param_1 + 0x2d50) = 0x80000000;
        if (uVar10 != (*(uint *)(param_1 + 0x2d54) & 0x7fff)) goto LAB_014ce938;
LAB_014ceb98:
        *(undefined4 *)(param_1 + 0x2d54) = 0x80000000;
        lVar12 = *(long *)(lVar11 + 0x80);
        *(undefined4 *)(lVar11 + 0x78) = 0;
      }
      else {
        if (uVar10 == (*(uint *)(param_1 + 0x2ce4) & 0x7fff)) goto LAB_014ce968;
LAB_014ce778:
        if (uVar10 == (*(uint *)(param_1 + 0x2ce8) & 0x7fff)) goto LAB_014ce97c;
LAB_014ce788:
        if (uVar10 == (*(uint *)(param_1 + 0x2cec) & 0x7fff)) goto LAB_014ce990;
LAB_014ce798:
        if (uVar10 == (*(uint *)(param_1 + 0x2cf0) & 0x7fff)) goto LAB_014ce9a4;
LAB_014ce7a8:
        if (uVar10 == (*(uint *)(param_1 + 0x2cf4) & 0x7fff)) goto LAB_014ce9b8;
LAB_014ce7b8:
        if (uVar10 == (*(uint *)(param_1 + 0x2cf8) & 0x7fff)) goto LAB_014ce9cc;
LAB_014ce7c8:
        if (uVar10 == (*(uint *)(param_1 + 0x2cfc) & 0x7fff)) goto LAB_014ce9e0;
LAB_014ce7d8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d00) & 0x7fff)) goto LAB_014ce9f4;
LAB_014ce7e8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d04) & 0x7fff)) goto LAB_014cea08;
LAB_014ce7f8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d08) & 0x7fff)) goto LAB_014cea1c;
LAB_014ce808:
        if (uVar10 == (*(uint *)(param_1 + 0x2d0c) & 0x7fff)) goto LAB_014cea30;
LAB_014ce818:
        if (uVar10 == (*(uint *)(param_1 + 0x2d10) & 0x7fff)) goto LAB_014cea44;
LAB_014ce828:
        if (uVar10 == (*(uint *)(param_1 + 0x2d14) & 0x7fff)) goto LAB_014cea58;
LAB_014ce838:
        if (uVar10 == (*(uint *)(param_1 + 0x2d18) & 0x7fff)) goto LAB_014cea6c;
LAB_014ce848:
        if (uVar10 == (*(uint *)(param_1 + 0x2d1c) & 0x7fff)) goto LAB_014cea80;
LAB_014ce858:
        if (uVar10 == (*(uint *)(param_1 + 0x2d20) & 0x7fff)) goto LAB_014cea94;
LAB_014ce868:
        if (uVar10 == (*(uint *)(param_1 + 0x2d24) & 0x7fff)) goto LAB_014ceaa8;
LAB_014ce878:
        if (uVar10 == (*(uint *)(param_1 + 0x2d28) & 0x7fff)) goto LAB_014ceabc;
LAB_014ce888:
        if (uVar10 == (*(uint *)(param_1 + 0x2d2c) & 0x7fff)) goto LAB_014cead0;
LAB_014ce898:
        if (uVar10 == (*(uint *)(param_1 + 0x2d30) & 0x7fff)) goto LAB_014ceae4;
LAB_014ce8a8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d34) & 0x7fff)) goto LAB_014ceaf8;
LAB_014ce8b8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d38) & 0x7fff)) goto LAB_014ceb0c;
LAB_014ce8c8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d3c) & 0x7fff)) goto LAB_014ceb20;
LAB_014ce8d8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d40) & 0x7fff)) goto LAB_014ceb34;
LAB_014ce8e8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d44) & 0x7fff)) goto LAB_014ceb48;
LAB_014ce8f8:
        if (uVar10 == (*(uint *)(param_1 + 0x2d48) & 0x7fff)) goto LAB_014ceb5c;
LAB_014ce908:
        if (uVar10 == (*(uint *)(param_1 + 0x2d4c) & 0x7fff)) goto LAB_014ceb70;
LAB_014ce918:
        if (uVar10 == (*(uint *)(param_1 + 0x2d50) & 0x7fff)) goto LAB_014ceb84;
LAB_014ce928:
        if (uVar10 == (*(uint *)(param_1 + 0x2d54) & 0x7fff)) goto LAB_014ceb98;
LAB_014ce938:
        lVar12 = *(long *)(lVar11 + 0x80);
        *(undefined4 *)(lVar11 + 0x78) = 0;
      }
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
        *(undefined8 *)(lVar11 + 0x80) = 0;
      }
    }
    *(undefined8 *)(lVar11 + 0x80) = 0;
    *(undefined4 *)(lVar11 + 0x88) = 1;
    *(undefined2 *)(lVar11 + 0x8c) = 0;
    *(undefined1 *)(lVar11 + 0x8e) = 0;
    lVar16 = lVar16 + 0x18;
    if (lVar16 == 0x960) {
      return;
    }
  } while( true );
}


