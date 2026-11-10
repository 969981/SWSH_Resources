/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01126880; name: FUN_01126880
 */


void FUN_01126880(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  long *plVar21;
  int *local_90;
  int *local_88;
  int *local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int local_54;
  
  lVar10 = *(long *)(param_1 + 0x88);
  if (((*(char *)(lVar10 + 0x3ac) == '\0') && (*(char *)(lVar10 + 0x3ad) != '\x04')) &&
     ((*(uint *)(param_1 + 0xda8) | 4) == 5)) {
    lVar19 = *(long *)(*(long *)PTR_DAT_02710798 + 0x248);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      lVar10 = *(long *)(param_1 + 0x88);
    }
    lVar10 = FUN_01225e80(lVar10 + 0x140);
    uVar8 = FUN_0121bc20(lVar10 + 4);
    puVar5 = PTR_DAT_02710848;
    lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar10 == 0) {
      iVar9 = FUN_0100d2b0(0,uVar8);
    }
    else {
      plVar21 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar21 + 0x10))(plVar21);
      iVar9 = FUN_0100d2b0(lVar10,uVar8);
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    puVar6 = PTR_DAT_02710860;
    local_78 = *(long **)(param_1 + 8);
    local_90 = (int *)0x0;
    uStack_70 = 0;
    local_88 = (int *)0x0;
    local_80 = (int *)0x0;
    local_68 = 0;
    bVar20 = 5;
    local_54 = 0;
    do {
      lVar10 = FUN_015261d0(lVar19,iVar9,&local_54);
      bVar4 = bVar20;
      if ((((int)lVar10 != 0) && (lVar10 = FUN_015261d0(lVar19,iVar9,&local_54), (int)lVar10 != 2))
         && ((lVar10 = FUN_015261d0(lVar19,iVar9,&local_54), (int)lVar10 != 3 &&
             ((lVar10 = FUN_015261d0(lVar19,iVar9,&local_54), (int)lVar10 != 4 &&
              (lVar10 = FUN_015261d0(lVar19,iVar9,&local_54), plVar21 = local_78, piVar7 = local_88,
              (int)lVar10 != 6)))))) {
        if (local_88 == local_80) {
          lVar10 = FUN_010181e0(&local_90,&local_54);
        }
        else {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar21;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *piVar7 = local_54;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          local_88 = local_88 + 1;
        }
        bVar4 = *(byte *)(lVar19 + (long)iVar9 * 0xa68 + (long)local_54 * 0x18 + 0x70);
        if (bVar20 <= bVar4) {
          bVar4 = bVar20;
        }
      }
      bVar20 = bVar4;
      iVar2 = local_54 + 1;
      bVar1 = local_54 < 0x6d;
      local_54 = iVar2;
    } while (bVar1);
    lVar13 = (long)local_88 - (long)local_90;
    if (lVar13 != 0) {
      uVar11 = lVar13 >> 2;
      uVar12 = 0;
      do {
        if (lVar13 == 4) {
          uVar16 = 0;
        }
        else {
          puVar14 = *(ulong **)(*(long *)puVar5 + 0x98);
          if (lVar13 == 0) {
            uVar11 = *puVar14;
            uVar16 = puVar14[1] + uVar11;
            uVar15 = puVar14[1] ^ uVar11;
            *puVar14 = uVar15 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar15 << 0x10;
            puVar14[1] = uVar15 >> 0x1b | uVar15 << 0x25;
          }
          else {
            uVar15 = (0x40 - LZCOUNT(uVar11)) -
                     (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar11)) & 0x3f) &
                             uVar11) == 0);
            uVar16 = uVar15 >> 6;
            if ((uVar15 & 0x3f) != 0) {
              uVar16 = uVar16 + 1;
            }
            uVar17 = 0;
            if (uVar16 != 0) {
              uVar17 = uVar15 / uVar16;
            }
            uVar3 = 0;
            if (uVar16 <= uVar15) {
              uVar3 = 0xffffffffffffffff >> (-uVar17 & 0x3f);
            }
            uVar15 = *puVar14;
            uVar17 = puVar14[1];
            do {
              uVar18 = uVar15 ^ uVar17;
              uVar16 = uVar15 + uVar17;
              uVar17 = uVar18 >> 0x1b | uVar18 << 0x25;
              uVar15 = uVar18 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar18 << 0x10;
              uVar16 = uVar16 & uVar3;
            } while (uVar11 <= uVar16);
            *puVar14 = uVar15;
            puVar14[1] = uVar17;
          }
        }
        uVar11 = -(uVar16 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar16 & 0xffffffff) << 2;
        uVar16 = uVar12 + 1;
        iVar2 = local_90[uVar12];
        local_90[uVar12] = *(int *)((long)local_90 + uVar11);
        *(int *)((long)local_90 + uVar11) = iVar2;
        lVar13 = (long)local_88 - (long)local_90;
        uVar11 = lVar13 >> 2;
        uVar12 = uVar16;
      } while (uVar16 < uVar11);
      if (lVar13 == 0) {
        uVar11 = 0;
      }
      else {
        uVar12 = 0;
        do {
          if (bVar20 == *(byte *)(lVar19 + (long)iVar9 * 0xa68 + (long)local_90[uVar12] * 0x18 +
                                 0x70)) goto LAB_01126bd4;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar12 = 0;
LAB_01126bd4:
      if ((lVar13 != 0) && ((uint)uVar12 < 0x6e)) {
        if (uVar11 <= (uVar12 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar10 = FUN_01127020(lVar10,iVar9,local_90[uVar12 & 0xffffffff]);
      }
    }
    FUN_01127120(lVar10,iVar9);
    if (local_90 != (int *)0x0) {
      local_88 = local_90;
      (**(code **)(*local_78 + 0x18))(local_78,local_90,(long)local_80 - (long)local_90,4);
    }
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    }
  }
  return;
}


