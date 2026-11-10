/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3ffe0; name: FUN_00f3ffe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3ffe0(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_54;
  long local_50;
  long local_48;
  
  plVar4 = (long *)FUN_00f21fe0(param_2 + 0x50);
  uVar5 = (**(code **)(*plVar4 + 0x70))();
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0xe8);
    if (lVar6 != 0) {
      plVar7 = *(long **)(param_1 + 0xe0);
      do {
        lVar6 = lVar6 + -1;
        if (*plVar7 != 0) {
          (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
          *plVar7 = 0;
        }
        plVar7 = plVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar3 = _UNK_01d4b578;
    uVar13 = _DAT_01d4b570;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = uVar3;
    *(undefined8 *)(param_1 + 0x1a0) = uVar13;
    *(undefined8 *)(param_1 + 0x1b8) = uVar3;
    *(undefined8 *)(param_1 + 0x1b0) = uVar13;
    (**(code **)(*(long *)plVar4[0x117] + 0x10))(&local_48);
    if (local_48 != 0) {
      puVar8 = *(undefined8 **)(local_48 + 0x60);
      if (puVar8 != (undefined8 *)0x0) {
        plVar7 = (long *)(**(code **)*puVar8)(puVar8);
        lVar6 = FUN_00e6c420();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar6) {
            puVar8 = puVar8 + -10;
            goto LAB_00f400b8;
          }
        }
        puVar8 = (undefined8 *)0x0;
      }
LAB_00f400b8:
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
      if (puVar8 != (undefined8 *)0x0) {
        lVar2 = plVar4[0x17];
        lVar6 = plVar4[0x16];
        fVar18 = *(float *)((long)plVar4 + 0x8cc);
        (**(code **)(*plVar4 + 0x10))(&local_50,plVar4);
        local_48 = local_50;
        local_50 = 0;
        FUN_00f40c80(param_1 + 0xa0,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        fVar16 = (float)((ulong)lVar6 >> 0x20);
        fVar17 = (float)lVar2;
        fVar15 = (float)lVar6;
        uVar13 = NEON_fmov(0x3f800000,4);
        uVar14 = (undefined4)((ulong)uVar13 >> 0x20);
        *(ulong *)(param_1 + 0x1a8) = CONCAT44(uVar14,fVar17 - fVar18);
        *(ulong *)(param_1 + 0x1a0) = CONCAT44(fVar16 - fVar18,fVar15 - fVar18);
        *(ulong *)(param_1 + 0x1b8) = CONCAT44(uVar14,fVar17 + fVar18);
        *(ulong *)(param_1 + 0x1b0) = CONCAT44(fVar16 + fVar18,fVar15 + fVar18);
        if (puVar8[0x1f] != 0) {
          plVar4 = (long *)puVar8[0x1e];
          do {
            if ((((*plVar4 != 0) && (lVar6 = *(long *)(*plVar4 + 0x60), lVar6 != 0)) &&
                (uVar5 = FUN_0156b540(lVar6), (uVar5 & 1) != 0)) &&
               ((plVar7 = (long *)FUN_00f21fe0(lVar6), plVar7 != (long *)0x0 &&
                (*(char *)((long)plVar7 + 0x8b2) == '\0')))) {
              fStack_54 = (float)((ulong)lVar2 >> 0x20);
              fVar9 = (float)plVar7[0x16] - fVar15;
              fVar10 = (float)((ulong)plVar7[0x16] >> 0x20) - fVar16;
              fVar11 = (float)plVar7[0x17] - fVar17;
              fStack_54 = (float)((ulong)plVar7[0x17] >> 0x20) - fStack_54;
              fVar9 = fVar9 * fVar9;
              fVar10 = fVar10 * fVar10;
              fVar11 = fVar11 * fVar11;
              fStack_54 = fStack_54 * fStack_54;
              auVar12._4_4_ = fVar10;
              auVar12._0_4_ = fVar9;
              auVar12._8_4_ = fVar11;
              auVar12._12_4_ = fStack_54;
              auVar1._4_4_ = fVar10;
              auVar1._0_4_ = fVar9;
              auVar1._8_4_ = fVar11;
              auVar1._12_4_ = fStack_54;
              auVar12 = NEON_ext(auVar12,auVar1,8,1);
              if (auVar12._0_4_ + fVar9 + auVar12._4_4_ + fVar10 <= fVar18 * fVar18) {
                (**(code **)(*plVar7 + 0x10))(&local_50);
                local_48 = local_50;
                local_50 = 0;
                FUN_00f40c80(param_1 + 0xa0,&local_48);
                if (local_48 != 0) {
                  (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
                  local_48 = 0;
                }
                if (local_50 != 0) {
                  (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
                  local_50 = 0;
                }
              }
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != (long *)(puVar8[0x1e] + puVar8[0x1f] * 8));
        }
      }
    }
  }
  return;
}


