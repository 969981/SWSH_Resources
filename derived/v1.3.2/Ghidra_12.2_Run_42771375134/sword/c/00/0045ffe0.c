/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045ffe0; name: FUN_0045ffe0
 */


/* WARNING: Removing unreachable block (ram,0x004604e0) */

int FUN_0045ffe0(long param_1,long param_2,int param_3)

{
  undefined2 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  undefined *puVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  uint *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  uint uVar22;
  ushort *puVar23;
  long lVar24;
  undefined8 uVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  int local_74;
  ushort *local_70;
  long *local_68;
  
  iVar15 = *(int *)(param_2 + 4);
  uVar14 = *(uint *)(param_2 + 8);
  uVar5 = (ulong)uVar14;
  puVar23 = (ushort *)(param_2 + 0xc);
  if (iVar15 == -1) {
    local_74 = param_3 - uVar14;
    local_70 = (ushort *)((byte *)((long)puVar23 + uVar5) + 1);
    bVar8 = *(byte *)((long)puVar23 + uVar5);
    if (bVar8 != 0) goto LAB_00460114;
LAB_004602d8:
    uVar14 = FUN_0049f140(&local_70);
    if (uVar14 != 0) {
      lVar17 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 << 5);
      *(long *)(param_1 + 0x50) = lVar17;
      if (lVar17 == 0) goto LAB_004605cc;
      *(uint *)(param_1 + 0x5c) = uVar14;
    }
    puVar23 = local_70 + 1;
    uVar10 = *local_70;
    local_70 = puVar23;
    if (uVar10 != 0) {
      uVar14 = 0;
      do {
        bVar8 = (byte)puVar23[3];
        uVar22 = bVar8 & 0x7f;
        pbVar20 = (byte *)((long)puVar23 + 7);
        while ((char)bVar8 < '\0') {
          bVar8 = *pbVar20;
          uVar22 = bVar8 & 0x7f | uVar22 << 7;
          pbVar20 = pbVar20 + 1;
        }
        local_70 = (ushort *)(pbVar20 + 7);
        uVar9 = *(ushort *)(pbVar20 + 5);
        iVar15 = FUN_004606f0(param_1,*(undefined4 *)puVar23,(byte)puVar23[2],
                              *(byte *)((long)puVar23 + 5),uVar22,*(undefined4 *)pbVar20,pbVar20[4],
                              local_70,uVar9,0);
        if (iVar15 != 1) {
          return iVar15;
        }
        uVar14 = uVar14 + 1;
        puVar23 = local_70 + (ulong)uVar9 * 6;
        local_74 = local_74 + (uint)uVar9 * -0xc;
        local_70 = puVar23;
      } while (uVar14 < uVar10);
    }
    iVar15 = (**(code **)(*(long *)(param_1 + 0x18) + 0x70))
                       ((long *)(param_1 + 0x18),&local_70,&local_74);
    puVar11 = PTR_DAT_02712a90;
    if (iVar15 != 1) {
      return iVar15;
    }
    uVar10 = *local_70;
    if (uVar10 != 0) {
      local_70 = local_70 + 1;
      lVar17 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3);
      *(long *)(param_1 + 0x60) = lVar17;
      if (lVar17 == 0) goto LAB_004605cc;
      uVar14 = 0;
      *(uint *)(param_1 + 0x6c) = (uint)uVar10;
      do {
        pbVar19 = (byte *)((long)local_70 + 1);
        uVar22 = (byte)*local_70 & 0x7f;
        pbVar20 = pbVar19;
        if ((char)(byte)*local_70 < '\0') {
          do {
            pbVar19 = pbVar20 + 1;
            bVar8 = *pbVar20;
            uVar22 = bVar8 & 0x7f | uVar22 << 7;
            pbVar20 = pbVar19;
          } while ((char)bVar8 < '\0');
        }
        local_70 = (ushort *)(pbVar19 + 5);
        bVar8 = *pbVar19;
        uVar7 = *(undefined4 *)(pbVar19 + 1);
        uVar27 = *(uint *)(param_1 + 0x68);
        uVar28 = *(uint *)(param_1 + 0x6c);
        if (uVar27 < uVar28) {
LAB_00460580:
          if (uVar27 < uVar28) {
            uVar28 = *(uint *)(param_1 + 0x68);
            *(uint *)(param_1 + 0x68) = uVar28 + 1;
            puVar18 = (uint *)(*(long *)(param_1 + 0x60) + (ulong)uVar28 * 8);
            if (puVar18 != (uint *)0x0) {
              lVar17 = *(long *)(param_1 + 0x60) + (ulong)uVar28 * 8;
              *(undefined1 *)(lVar17 + 2) = 0;
              *puVar18 = uVar22 & 0xffff | (uint)bVar8 << 0x10;
              *(undefined4 *)(lVar17 + 4) = uVar7;
            }
          }
        }
        else {
          uVar28 = uVar28 + 2;
          lVar17 = FUN_00404690(*(undefined4 *)puVar11,(ulong)uVar28 << 3);
          if (lVar17 != 0) {
            lVar24 = *(long *)(param_1 + 0x60);
            if ((lVar24 != 0) && (lVar24 != lVar17)) {
              uVar6 = *(uint *)(param_1 + 0x68);
              if (uVar6 != 0) {
                if (uVar6 == 1) {
                  lVar21 = 0;
LAB_00460548:
                  puVar3 = (undefined8 *)(lVar17 + lVar21 * 8);
                  if (puVar3 != (undefined8 *)0x0) {
                    lVar24 = lVar17 + lVar21 * 8;
                    *(undefined2 *)puVar3 = 0;
                    *(undefined1 *)(lVar24 + 2) = 0;
                    *(undefined4 *)(lVar24 + 4) = 0;
                  }
                  *puVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar21 * 8);
                }
                else {
                  lVar24 = 0;
                  lVar21 = 0;
                  do {
                    if (lVar17 + lVar24 != 0) {
                      puVar1 = (undefined2 *)(lVar17 + lVar24);
                      *puVar1 = 0;
                      *(undefined1 *)(puVar1 + 1) = 0;
                      *(undefined4 *)(puVar1 + 2) = 0;
                    }
                    uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar24);
                    puVar3 = (undefined8 *)(lVar17 + lVar24);
                    *(undefined2 *)(puVar3 + 1) = 0;
                    *(undefined1 *)((long)puVar3 + 10) = 0;
                    *(undefined4 *)((long)puVar3 + 0xc) = 0;
                    *puVar3 = uVar25;
                    lVar2 = *(long *)(param_1 + 0x60) + lVar24;
                    lVar24 = lVar24 + 0x10;
                    lVar21 = lVar21 + 2;
                    puVar3[1] = *(undefined8 *)(lVar2 + 8);
                  } while ((ulong)uVar6 - ((ulong)uVar6 & 1) != lVar21);
                  if ((uVar6 & 1) != 0) goto LAB_00460548;
                }
                lVar24 = *(long *)(param_1 + 0x60);
              }
              FUN_00404870(*(undefined4 *)puVar11,lVar24);
            }
            *(long *)(param_1 + 0x60) = lVar17;
            *(uint *)(param_1 + 0x6c) = uVar28;
            goto LAB_00460580;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar10);
    }
    iVar15 = 1;
  }
  else {
    local_68 = (long *)0x0;
    local_74 = param_3;
    local_70 = puVar23;
    iVar13 = FUN_0045f190(PTR_PTR_02712da8,iVar15,&local_68);
    if (iVar13 == 1 && local_68 != (long *)0x0) {
      iVar13 = (**(code **)(*local_68 + 0x20))(local_68,PTR_PTR_02712da8,puVar23,uVar5);
      plVar12 = local_68;
      if (iVar13 == 1) {
        plVar16 = *(long **)(param_1 + 0x38);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x28))(plVar16,PTR_PTR_02712da8);
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        iVar13 = 1;
        *(int *)(param_1 + 0x30) = iVar15;
        *(long **)(param_1 + 0x38) = plVar12;
      }
      else {
        (**(code **)(*local_68 + 0x28))(local_68,PTR_PTR_02712da8);
      }
    }
    else {
      *(int *)(param_1 + 0x30) = iVar15;
      iVar13 = 1;
    }
    pbVar20 = (byte *)((long)local_70 + uVar5);
    local_74 = local_74 - uVar14;
    if (iVar13 != 1) {
      return iVar13;
    }
    local_70 = (ushort *)(pbVar20 + 1);
    bVar8 = *pbVar20;
    if (bVar8 == 0) goto LAB_004602d8;
LAB_00460114:
    puVar11 = PTR_DAT_02712a90;
    lVar17 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)bVar8 << 3);
    *(long *)(param_1 + 0x40) = lVar17;
    if (lVar17 != 0) {
      uVar14 = 0;
      *(uint *)(param_1 + 0x4c) = (uint)bVar8;
      do {
        puVar23 = (ushort *)((long)local_70 + 5);
        uVar10 = *local_70;
        uVar28 = *(uint *)((long)local_70 + 1);
        puVar26 = *(uint **)(param_1 + 0x40);
        uVar22 = *(uint *)(param_1 + 0x48);
        puVar18 = puVar26;
        local_70 = puVar23;
        if (uVar22 == 0) {
LAB_00460190:
          if (puVar18 == puVar26 + (ulong)uVar22 * 2) goto LAB_0046019c;
LAB_004602c8:
          puVar18[1] = uVar28;
        }
        else {
          lVar17 = (ulong)uVar22 << 3;
          do {
            if (*puVar18 == (uint)(byte)uVar10) goto LAB_00460190;
            lVar17 = lVar17 + -8;
            puVar18 = puVar18 + 2;
          } while (lVar17 != 0);
LAB_0046019c:
          uVar27 = *(uint *)(param_1 + 0x4c);
          if (uVar22 < uVar27) {
LAB_004602a4:
            if (uVar22 < uVar27) {
              uVar22 = *(uint *)(param_1 + 0x48);
              *(uint *)(param_1 + 0x48) = uVar22 + 1;
              if (puVar26 + (ulong)uVar22 * 2 != (uint *)0x0) {
                puVar18 = puVar26 + (ulong)uVar22 * 2;
                puVar26[(ulong)uVar22 * 2] = (uint)(byte)uVar10;
                goto LAB_004602c8;
              }
            }
          }
          else {
            uVar27 = uVar27 + 1;
            puVar26 = (uint *)FUN_00404690(*(undefined4 *)puVar11,(ulong)uVar27 << 3);
            if (puVar26 != (uint *)0x0) {
              puVar18 = *(uint **)(param_1 + 0x40);
              if ((puVar18 != (uint *)0x0) && (puVar18 != puVar26)) {
                uVar6 = *(uint *)(param_1 + 0x48);
                if (uVar6 != 0) {
                  *(undefined8 *)puVar26 = *(undefined8 *)puVar18;
                  if (uVar6 != 1) {
                    uVar4 = uVar6 + 3 & 3;
                    if ((ulong)uVar6 - 2 < 3) {
                      lVar24 = 1;
                    }
                    else {
                      lVar17 = 0;
                      do {
                        lVar24 = lVar17;
                        lVar17 = lVar24 * 8;
                        *(undefined8 *)(puVar26 + lVar24 * 2 + 2) =
                             *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar17 + 8);
                        *(undefined8 *)(puVar26 + lVar24 * 2 + 4) =
                             *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar17 + 0x10);
                        *(undefined8 *)(puVar26 + lVar24 * 2 + 6) =
                             *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar17 + 0x18);
                        *(undefined8 *)(puVar26 + lVar24 * 2 + 8) =
                             *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar17 + 0x20);
                        lVar17 = lVar24 + 4;
                      } while (((ulong)uVar6 - 1) - (ulong)uVar4 != lVar24 + 4);
                      lVar24 = lVar24 + 5;
                    }
                    if (uVar4 != 0) {
                      lVar24 = lVar24 << 3;
                      lVar17 = -(ulong)uVar4;
                      do {
                        *(undefined8 *)((long)puVar26 + lVar24) =
                             *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar24);
                        lVar24 = lVar24 + 8;
                        lVar17 = lVar17 + 1;
                      } while (lVar17 != 0);
                    }
                  }
                  puVar18 = *(uint **)(param_1 + 0x40);
                }
                FUN_00404870(*(undefined4 *)puVar11,puVar18);
              }
              *(uint **)(param_1 + 0x40) = puVar26;
              *(uint *)(param_1 + 0x4c) = uVar27;
              goto LAB_004602a4;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != bVar8);
      goto LAB_004602d8;
    }
LAB_004605cc:
    iVar15 = 0x34;
  }
  return iVar15;
}


