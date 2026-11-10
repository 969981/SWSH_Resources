/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a29480; name: FUN_00a29480
 */


void FUN_00a29480(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 local_d8 [16];
  long local_c8;
  char local_c0;
  undefined7 uStack_bf;
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  undefined8 *local_70;
  long local_68;
  long local_60;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_c0);
  lVar6 = CONCAT71(uStack_bf,local_c0);
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar7)(puVar7);
      lVar2 = FUN_00a871c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar7 = puVar7 + -10;
          goto LAB_00a294f0;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_00a294f0:
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    if (puVar7 != (undefined8 *)0x0) {
      auVar13 = FUN_01025b70(*(undefined8 *)PTR_DAT_02710878);
      *(undefined1 (*) [16])(puVar7 + 0xc6) = auVar13;
      lVar6 = *(long *)PTR_DAT_027185f8;
      if (lVar6 != 0) {
        FUN_0120e660(&local_c0,lVar6);
        if (local_c0 != '\0') {
          lVar2 = *(long *)PTR_DAT_02718f20;
          if ((lVar2 != 0) && (local_68 != 0)) {
            uVar10 = 0;
            lVar12 = local_68 << 3;
            puVar11 = local_70;
            do {
              uVar8 = *puVar11;
              FUN_011ffbe0(&local_c8,lVar2,uVar8);
              auVar13 = FUN_0120e870(lVar6,uVar8);
              local_d8 = auVar13;
              if ((auVar13._0_8_ != 0 || auVar13._8_8_ != 0) &&
                 (((auVar13._0_8_ != puVar7[0xc6] || (auVar13._8_8_ != puVar7[199])) &&
                  (local_c8 != 0)))) {
                lVar9 = *(long *)(local_c8 + 8);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                uVar3 = FUN_011f4020(puVar7 + 0xc5,local_d8);
                if ((uVar3 & 1) == 0) {
                  if (2 < uVar10) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar4 = (long)(int)uVar10;
                  uVar10 = uVar10 + 1;
                  FUN_010439d0(puVar7 + lVar4 * 0x10 + 0x95,lVar9,local_d8._0_8_,local_d8._8_8_);
                }
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
                }
              }
              puVar11 = puVar11 + 1;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
            if (local_c0 == '\0') {
              return;
            }
          }
          if (local_60 != 0) {
            (**(code **)(*local_b0 + 0x18))(local_b0,local_70,local_60 << 3,8);
          }
          if (alStack_a0 == local_80) {
            pcVar5 = *(code **)(*local_80 + 0x20);
          }
          else {
            if (local_80 == (long *)0x0) {
              return;
            }
            pcVar5 = *(code **)(*local_80 + 0x28);
          }
          (*pcVar5)();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


