/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013bb040; name: FUN_013bb040
 */


void FUN_013bb040(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(code **)(param_1 + 0x630) != (code *)0x0) {
    (**(code **)(param_1 + 0x630))(param_1 + 0x650);
    puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar8 = (long *)(**(code **)*puVar22)(puVar22);
    lVar9 = FUN_0132d9a0();
    for (; plVar8 != (long *)lVar9; plVar8 = (long *)*plVar8) {
    }
    lVar9 = puVar22[0x6f];
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    uVar10 = FUN_013336c0(lVar9);
    if ((uVar10 < 4) && (lVar11 = FUN_01335240(lVar9), lVar11 != 0)) {
      uVar6 = FUN_013336c0(lVar9);
      *(undefined4 *)(param_1 + 0x470) = uVar6;
      lVar11 = FUN_013336c0(lVar9);
      puVar2 = PTR_DAT_02710848;
      if (lVar11 != 0) {
        uVar10 = 0;
        do {
          uVar12 = FUN_01335240(lVar9);
          if (uVar12 == 1) {
            uVar17 = 0;
          }
          else {
            puVar13 = *(ulong **)(*(long *)puVar2 + 0x98);
            if (uVar12 == 0) {
              uVar12 = *puVar13;
              uVar17 = puVar13[1] + uVar12;
              uVar16 = puVar13[1] ^ uVar12;
              *puVar13 = uVar16 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar16 << 0x10;
              puVar13[1] = uVar16 >> 0x1b | uVar16 << 0x25;
            }
            else {
              uVar16 = (0x40 - LZCOUNT(uVar12)) -
                       (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar12)) & 0x3f) &
                               uVar12) == 0);
              uVar17 = uVar16 >> 6;
              if ((uVar16 & 0x3f) != 0) {
                uVar17 = uVar17 + 1;
              }
              uVar19 = 0;
              if (uVar17 != 0) {
                uVar19 = uVar16 / uVar17;
              }
              uVar1 = 0;
              if (uVar17 <= uVar16) {
                uVar1 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
              }
              uVar16 = *puVar13;
              uVar19 = puVar13[1];
              do {
                uVar21 = uVar16 ^ uVar19;
                uVar17 = uVar16 + uVar19;
                uVar19 = uVar21 >> 0x1b | uVar21 << 0x25;
                uVar16 = uVar21 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar21 << 0x10;
                uVar17 = uVar17 & uVar1;
              } while (uVar12 <= uVar17);
              *puVar13 = uVar16;
              puVar13[1] = uVar19;
            }
          }
          FUN_013352d0(&local_90,lVar9,uVar17);
          lVar11 = param_1 + uVar10 * 0x30;
          *(undefined8 *)(lVar11 + 600) = uStack_88;
          *(undefined8 *)(lVar11 + 0x250) = local_90;
          uVar10 = uVar10 + 1;
          *(undefined8 *)(lVar11 + 0x278) = uStack_68;
          *(undefined8 *)(lVar11 + 0x270) = local_70;
          *(undefined8 *)(lVar11 + 0x268) = uStack_78;
          *(undefined8 *)(lVar11 + 0x260) = local_80;
          uVar12 = FUN_013336c0(lVar9);
        } while (uVar10 < uVar12);
      }
      iVar7 = FUN_013336c0(lVar9);
      uVar15 = *(undefined8 *)(param_1 + 0x8b8);
      lVar11 = param_1 + (long)iVar7 * 0x30;
      *(undefined8 *)(lVar11 + 600) = *(undefined8 *)(param_1 + 0x8c0);
      *(undefined8 *)(lVar11 + 0x250) = uVar15;
      uVar15 = *(undefined8 *)(param_1 + 0x8c8);
      uVar18 = *(undefined8 *)(param_1 + 0x8d0);
      uVar20 = *(undefined8 *)(param_1 + 0x8d8);
      *(undefined8 *)(lVar11 + 0x278) = *(undefined8 *)(param_1 + 0x8e0);
      *(undefined8 *)(lVar11 + 0x270) = uVar20;
      *(undefined8 *)(lVar11 + 0x268) = uVar18;
      *(undefined8 *)(lVar11 + 0x260) = uVar15;
      FUN_013ba5f0(param_1);
      *(undefined1 *)(param_1 + 0x990) = 1;
      puVar22 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x68) != 0) {
        puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
        if (puVar22 != (undefined8 *)0x0) {
          plVar8 = (long *)(**(code **)*puVar22)(puVar22);
          lVar11 = FUN_0132d9a0();
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)lVar11) {
              puVar22 = puVar22 + -10;
              goto LAB_013bb298;
            }
          }
        }
        puVar22 = (undefined8 *)0x0;
      }
LAB_013bb298:
      memcpy(puVar22 + 0x12,(void *)(param_1 + 0x1d0),0x2a4);
      puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar8 = (long *)(**(code **)*puVar22)(puVar22);
      lVar11 = FUN_0132d9a0();
      for (; plVar8 != (long *)lVar11; plVar8 = (long *)*plVar8) {
      }
      *(undefined4 *)(puVar22 + 5) = 8;
      pcVar14 = *(code **)(param_1 + 0x158);
      if (pcVar14 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x150) = 0;
        *(undefined8 *)(param_1 + 0x158) = 0;
        (*pcVar14)(param_1 + 0x170);
      }
      puVar5 = PTR_LAB_027290a8;
      puVar4 = PTR_LAB_027290a0;
      puVar3 = PTR_LAB_02729098;
      puVar2 = PTR_LAB_02729090;
      *(long *)(param_1 + 0x170) = param_1;
      *(undefined **)(param_1 + 0x178) = puVar2;
      *(undefined8 *)(param_1 + 0x180) = 0;
      puVar2 = PTR_LAB_027290b0;
      *(undefined **)(param_1 + 0x150) = puVar3;
      *(undefined **)(param_1 + 0x158) = puVar4;
      *(undefined **)(param_1 + 0x160) = puVar5;
      *(undefined **)(param_1 + 0x168) = puVar2;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


