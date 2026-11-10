/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072bc50; name: FUN_0072bc50
 */


void FUN_0072bc50(long *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long extraout_x1;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 *puVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined1 auStack_68 [4];
  undefined4 local_64;
  
  *param_1 = (long)(PTR_DAT_02715af8 + 0x10);
  lVar7 = *(long *)(param_2 + 8);
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 6);
    lVar7 = *(long *)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 0x28);
    param_1[4] = *(long *)(param_2 + 0x20);
    param_1[5] = lVar9;
    param_1[2] = lVar7;
    param_1[3] = lVar17;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x16);
    lVar7 = *(long *)(param_2 + 0x90);
    lVar17 = *(long *)(param_2 + 0x98);
    lVar9 = *(long *)(param_2 + 0xa8);
    param_1[0x14] = *(long *)(param_2 + 0xa0);
    param_1[0x15] = lVar9;
    param_1[0x12] = lVar7;
    param_1[0x13] = lVar17;
  }
  puVar5 = PTR_DAT_02715b00;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar7 = FUN_0075ecb0();
  }
  param_1[0x25] = lVar7;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  lVar14 = *(long *)(param_2 + 8);
  lVar9 = *(long *)(lVar14 + 0x298) - *(long *)(lVar14 + 0x290) >> 6;
  uVar10 = lVar9 * -0x79435e50d79435e5;
  lVar7 = param_1[0x23];
  lVar17 = lVar7 - param_1[0x22] >> 3;
  bVar6 = uVar10 < (ulong)(lVar17 * -0x70a3d70a3d70a3d7);
  lVar17 = uVar10 + lVar17 * 0x70a3d70a3d70a3d7;
  if (bVar6 || lVar17 == 0) {
    if (bVar6) {
      lVar9 = param_1[0x22] + lVar9 * 0x435e50d79435e518;
      while (lVar9 != lVar7) {
        lVar7 = lVar7 + -200;
        FUN_007279a0(lVar7,lVar17);
        lVar17 = extraout_x1;
      }
      param_1[0x23] = lVar9;
    }
  }
  else {
    FUN_0072c770(param_1 + 0x22);
  }
  lVar7 = *(long *)(lVar14 + 0x290);
  if (*(long *)(lVar14 + 0x298) != lVar7) {
    uVar10 = 0;
    do {
      lVar9 = param_1[0x22];
      puVar11 = (undefined8 *)(lVar7 + uVar10 * 0x4c0);
      puVar15 = (undefined8 *)(lVar9 + uVar10 * 200);
      *puVar15 = *puVar11;
      puVar15[1] = puVar11[1];
      puVar15[2] = puVar11[2];
      lVar17 = puVar11[3];
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
      }
      lVar8 = puVar15[3];
      puVar15[3] = lVar17;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      puVar11 = (undefined8 *)(lVar7 + uVar10 * 0x4c0 + 0x40);
      piVar12 = (int *)*puVar11;
      lVar7 = (long)piVar12 - (long)*piVar12;
      puVar3 = (uint *)((long)piVar12 + (ulong)*(ushort *)(lVar7 + 0x1c));
      uVar4 = *(uint *)((long)puVar3 + (ulong)*puVar3);
      if (uVar4 != 0) {
        plVar23 = (long *)(lVar9 + uVar10 * 200 + 0x20);
        FUN_0072d300(plVar23,(ulong)uVar4);
        lVar17 = lVar9 + uVar10 * 200;
        lVar7 = 0;
        uVar24 = 1;
        puVar1 = (ulong *)(lVar17 + 0x28);
        plVar2 = (long *)(lVar17 + 0x30);
        do {
          piVar12 = (int *)*puVar11;
          uVar16 = (ulong)*(ushort *)((long)piVar12 + (0x1c - (long)*piVar12));
          uVar18 = (ulong)*(uint *)((long)piVar12 + uVar16);
          uVar19 = (ulong)*(uint *)((long)piVar12 + uVar24 * 4 + uVar18 + uVar16);
          lVar17 = uVar19 + uVar18 + uVar16;
          lVar17 = lVar7 + (lVar17 - *(int *)((long)piVar12 + uVar24 * 4 + lVar17));
          if ((*(ushort *)((long)piVar12 + lVar17 + 4) < 7) ||
             (uVar20 = (ulong)*(ushort *)((long)piVar12 + lVar17 + 10), uVar20 == 0)) {
            bVar6 = false;
            uVar16 = *puVar1;
            lVar17 = *plVar2;
            if (uVar16 == lVar17 * 0x40) goto LAB_0072bf5c;
          }
          else {
            bVar6 = *(char *)((long)piVar12 + lVar7 + uVar20 + uVar19 + uVar18 + uVar16 + 4) != '\0'
            ;
            uVar16 = *puVar1;
            lVar17 = *plVar2;
            if (uVar16 == lVar17 * 0x40) {
LAB_0072bf5c:
              if ((long)(uVar16 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar16 < 0x3fffffffffffffff) {
                uVar16 = uVar16 + 0x40 & 0xffffffffffffffc0;
                if (uVar16 <= (ulong)(lVar17 << 7)) {
                  uVar16 = lVar17 << 7;
                }
              }
              else {
                uVar16 = 0x7fffffffffffffff;
              }
              FUN_0072d300(plVar23,uVar16);
              uVar16 = *puVar1;
            }
          }
          *puVar1 = uVar16 + 1;
          lVar17 = *plVar23;
          uVar18 = uVar16 >> 6;
          uVar16 = 1L << (uVar16 & 0x3f);
          if (bVar6) {
            uVar16 = *(ulong *)(lVar17 + uVar18 * 8) | uVar16;
          }
          else {
            uVar16 = *(ulong *)(lVar17 + uVar18 * 8) & (uVar16 ^ 0xffffffffffffffff);
          }
          bVar6 = uVar24 < uVar4;
          uVar24 = uVar24 + 1;
          lVar7 = lVar7 + 4;
          *(ulong *)(lVar17 + uVar18 * 8) = uVar16;
        } while (bVar6);
        piVar12 = (int *)*puVar11;
        lVar7 = (long)piVar12 - (long)*piVar12;
      }
      plVar23 = (long *)(lVar9 + uVar10 * 200 + 0x50);
      puVar3 = (uint *)((long)piVar12 + (ulong)*(ushort *)(lVar7 + 0x1e));
      uVar4 = *(uint *)((long)puVar3 + (ulong)*puVar3);
      uVar24 = (ulong)uVar4;
      if (uVar4 != 0) {
        FUN_0072d880(plVar23,uVar24);
        lVar17 = lVar9 + uVar10 * 200;
        puVar1 = (ulong *)(lVar17 + 0x58);
        lVar7 = 10;
        uVar16 = 1;
        do {
          while( true ) {
            piVar12 = (int *)*puVar11;
            uVar18 = (ulong)*(ushort *)((long)piVar12 + (0x1e - (long)*piVar12));
            uVar19 = (ulong)*(uint *)((long)piVar12 + uVar18);
            uVar20 = (ulong)*(uint *)((long)piVar12 + uVar16 * 4 + uVar19 + uVar18);
            lVar8 = uVar20 + uVar19 + uVar18;
            uVar26 = 0;
            lVar8 = lVar8 - *(int *)((long)piVar12 + uVar16 * 4 + lVar8);
            if (6 < *(ushort *)((long)piVar12 + lVar7 + lVar8 + -6)) {
              uVar21 = (ulong)*(ushort *)((long)piVar12 + lVar7 + lVar8);
              uVar26 = 0;
              if (uVar21 != 0) {
                uVar26 = *(undefined4 *)
                          ((long)piVar12 + uVar16 * 4 + uVar21 + uVar20 + uVar19 + uVar18);
              }
            }
            local_80 = CONCAT44(local_80._4_4_,uVar26);
            puVar22 = (undefined4 *)*puVar1;
            if (*(undefined4 **)(lVar17 + 0x60) <= puVar22) break;
            uVar25 = *(undefined8 *)(lVar17 + 0x68);
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0072c4c4;
            *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar25;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            *puVar22 = (undefined4)local_80;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            *puVar1 = *puVar1 + 4;
            bVar6 = uVar24 <= uVar16;
            uVar16 = uVar16 + 1;
            lVar7 = lVar7 + 4;
            if (bVar6) goto LAB_0072c130;
          }
          FUN_0072d9e0(plVar23,&local_80);
          bVar6 = uVar16 < uVar24;
          uVar16 = uVar16 + 1;
          lVar7 = lVar7 + 4;
        } while (bVar6);
LAB_0072c130:
        piVar12 = (int *)*puVar11;
        lVar7 = (long)piVar12 - (long)*piVar12;
      }
      puVar3 = (uint *)((long)piVar12 + (ulong)*(ushort *)(lVar7 + 0x20));
      plVar2 = (long *)(lVar9 + uVar10 * 200 + 0x80);
      uVar4 = *(uint *)((long)puVar3 + (ulong)*puVar3);
      uVar24 = (ulong)uVar4;
      if (uVar4 != 0) {
        FUN_0072dba0(plVar2,uVar24);
        lVar17 = lVar9 + uVar10 * 200;
        lVar7 = 0;
        puVar1 = (ulong *)(lVar17 + 0x88);
        uVar16 = 1;
        do {
          while( true ) {
            piVar12 = (int *)*puVar11;
            uVar18 = (ulong)*(ushort *)((long)piVar12 + (0x20 - (long)*piVar12));
            uVar19 = (ulong)*(uint *)((long)piVar12 + uVar18);
            uVar20 = (ulong)*(uint *)((long)piVar12 + uVar16 * 4 + uVar19 + uVar18);
            lVar8 = uVar20 + uVar19 + uVar18;
            lVar8 = lVar7 + *(ushort *)
                             ((long)piVar12 +
                             lVar7 + (lVar8 - *(int *)((long)piVar12 + uVar16 * 4 + lVar8)) + 10) +
                            uVar20 + uVar19 + uVar18;
            local_80 = *(undefined8 *)((long)piVar12 + lVar8 + 4);
            uStack_78 = (ulong)*(uint *)((long)piVar12 + lVar8 + 0xc);
            puVar15 = (undefined8 *)*puVar1;
            if (*(undefined8 **)(lVar17 + 0x90) <= puVar15) break;
            uVar25 = *(undefined8 *)(lVar17 + 0x98);
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_0072c4c4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar25;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            puVar15[1] = uStack_78;
            *puVar15 = local_80;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            *puVar1 = *puVar1 + 0x10;
            bVar6 = uVar24 <= uVar16;
            uVar16 = uVar16 + 1;
            lVar7 = lVar7 + 4;
            if (bVar6) goto LAB_0072c2b4;
          }
          FUN_0072dd00(plVar2,&local_80);
          bVar6 = uVar16 < uVar24;
          uVar16 = uVar16 + 1;
          lVar7 = lVar7 + 4;
        } while (bVar6);
      }
LAB_0072c2b4:
      plVar13 = (long *)(lVar9 + uVar10 * 200 + 0x28);
      if (*plVar13 != 0) {
        local_80 = 4;
        local_64 = (undefined4)*plVar13;
        local_88 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
        lVar7 = FUN_00723880(auStack_68,param_3,&local_80,&local_64,&local_88);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        plVar13 = (long *)(lVar9 + uVar10 * 200 + 0xb0);
        if (*plVar13 != 0) {
          (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
          *plVar13 = 0;
        }
        *plVar13 = lVar7;
      }
      plVar13 = (long *)(lVar9 + uVar10 * 200 + 0x58);
      if (*plVar13 != *plVar23) {
        local_80 = 4;
        local_64 = (undefined4)((ulong)(*plVar13 - *plVar23) >> 2);
        local_88 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
        lVar7 = FUN_00723880(auStack_68,param_3,&local_80,&local_64,&local_88);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        plVar23 = (long *)(lVar9 + uVar10 * 200 + 0xb8);
        if (*plVar23 != 0) {
          (**(code **)(*(long *)(*plVar23 + 0x48) + 0x18))();
          *plVar23 = 0;
        }
        *plVar23 = lVar7;
      }
      plVar23 = (long *)(lVar9 + uVar10 * 200 + 0x88);
      if (*plVar23 != *plVar2) {
        local_80 = 0x10;
        local_64 = (undefined4)((ulong)(*plVar23 - *plVar2) >> 4);
        local_88 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
        lVar7 = FUN_00723880(auStack_68,param_3,&local_80,&local_64,&local_88);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        plVar23 = (long *)(lVar9 + uVar10 * 200 + 0xc0);
        if (*plVar23 != 0) {
          (**(code **)(*(long *)(*plVar23 + 0x48) + 0x18))();
          *plVar23 = 0;
        }
        *plVar23 = lVar7;
      }
      lVar7 = *(long *)(lVar14 + 0x290);
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)((*(long *)(lVar14 + 0x298) - lVar7 >> 6) * -0x79435e50d79435e5));
  }
  return;
}


