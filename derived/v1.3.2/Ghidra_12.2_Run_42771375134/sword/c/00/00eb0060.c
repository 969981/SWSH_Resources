/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb0060; name: FUN_00eb0060
 */


undefined8 FUN_00eb0060(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float local_a0;
  float fStack_98;
  float fStack_94;
  float local_90 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  lVar9 = *(long *)PTR_DAT_027194d8;
  plVar10 = *(long **)(lVar9 + 0xb0);
  do {
    lVar8 = *plVar10;
    uVar6 = FUN_015b5320(lVar8 + 0x50);
    if ((uVar6 & 1) != 0) {
      uVar6 = (**(code **)(*(long *)*plVar10 + 0x88))();
      fVar5 = DAT_01d4c2b0;
      if ((uVar6 & 1) == 0) {
        uVar4 = *(undefined8 *)(lVar8 + 0xb8);
        uVar3 = *(undefined8 *)(lVar8 + 0xb0);
        local_90[0] = 3.4028235e+38;
        local_88 = 0;
        local_80 = 0x7f7fffff;
        local_78 = 0;
        local_70 = 0x7f7fffff;
        local_68 = 0;
        local_60 = 0x7f7fffff;
        local_58 = 0;
        plVar10 = *(long **)(lVar9 + 0xb0);
        plVar1 = *(long **)(lVar9 + 0xb8);
        if (plVar10 == plVar1) {
          local_88 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if (((*(byte *)(*plVar10 + 0x38e) >> 4 & 1) != 0) &&
               (uVar6 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar6 & 1) == 0)) {
              lVar8 = *plVar10;
              plVar7 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))
                                         ((undefined8 *)(lVar8 + 0x50));
              lVar9 = FUN_00e2efa0();
              for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
                if (plVar7 == (long *)lVar9) {
                  if (*(int *)(lVar8 + 0x3b0) == 0) {
                    local_a0 = (float)uVar3;
                    fStack_98 = (float)uVar4;
                    fStack_94 = (float)((ulong)uVar4 >> 0x20);
                    local_a0 = local_a0 - (float)*(undefined8 *)(lVar8 + 0xb0);
                    fStack_98 = fStack_98 - (float)*(undefined8 *)(lVar8 + 0xb8);
                    fStack_94 = fStack_94 - (float)((ulong)*(undefined8 *)(lVar8 + 0xb8) >> 0x20);
                    local_a0 = local_a0 * local_a0;
                    fStack_98 = fStack_98 * fStack_98;
                    fStack_94 = fStack_94 * fStack_94;
                    auVar13._4_4_ = 0;
                    auVar13._0_4_ = local_a0;
                    auVar13._8_4_ = fStack_98;
                    auVar13._12_4_ = fStack_94;
                    auVar2._4_4_ = 0;
                    auVar2._0_4_ = local_a0;
                    auVar2._8_4_ = fStack_98;
                    auVar2._12_4_ = fStack_94;
                    auVar13 = NEON_ext(auVar13,auVar2,8,1);
                    fVar12 = auVar13._0_4_ + local_a0 + auVar13._4_4_ + 0.0;
                    if (fVar12 < fVar5) {
                      if (3 < uVar11) {
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      *(long *)(local_90 + (long)(int)uVar11 * 4 + 2) = lVar8;
                      local_90[(long)(int)uVar11 * 4] = fVar12;
                      if (uVar11 != 3) {
                        uVar11 = uVar11 + 1;
                      }
                      FUN_00eb07a0(local_90,local_90 + 0x10);
                    }
                  }
                  break;
                }
              }
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar1);
          if ((int)uVar11 < 1) {
            local_88 = 0;
          }
        }
        return local_88;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}


