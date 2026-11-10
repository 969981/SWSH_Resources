/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbe330; name: FUN_00fbe330
 */


void FUN_00fbe330(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float extraout_s0;
  float fVar14;
  float extraout_var;
  undefined1 auVar15 [16];
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long lStack_60;
  undefined4 local_58;
  undefined8 local_48;
  
  lVar7 = FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,&local_80);
  lVar9 = *(long *)(param_1 + 0x100);
  puVar5 = (undefined4 *)PTR_DAT_02710860;
  for (lVar10 = *(long *)(param_1 + 0xf8); PTR_DAT_02710860 = (undefined *)puVar5, lVar10 != lVar9;
      lVar10 = lVar10 + 8) {
    plVar8 = (long *)FUN_00fba2d0(lVar10);
    if (plVar8 != (long *)0x0) {
      fVar13 = (float)*(undefined8 *)(lVar7 + 0xb0) - (float)plVar8[0x16];
      fVar14 = (float)*(undefined8 *)(lVar7 + 0xb8) - (float)plVar8[0x17];
      fVar13 = fVar13 * fVar13;
      fVar14 = fVar14 * fVar14;
      auVar15._4_4_ = 0;
      auVar15._0_4_ = fVar13;
      auVar15._8_4_ = fVar14;
      auVar15._12_4_ = 0;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = fVar13;
      auVar2._8_4_ = fVar14;
      auVar2._12_4_ = 0;
      auVar15 = NEON_ext(auVar15,auVar2,8,1);
      if (*(float *)(param_1 + 0x5c) < auVar15._0_4_ + fVar13 + auVar15._4_4_ + 0.0) {
        (**(code **)(*plVar8 + 0x80))(plVar8);
        local_80 = (long *)plVar8[0xba];
        local_78 = (long *)plVar8[0xbb];
        local_70 = (long *)plVar8[0xbc];
        local_68 = (long *)plVar8[0xbd];
        lStack_60 = plVar8[0xbe];
        local_48 = FUN_0121b000(&local_80);
        FUN_00fba430(param_1,&local_48);
      }
    }
    puVar5 = (undefined4 *)PTR_DAT_02710860;
  }
  local_68 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_80 = (long *)0x0;
  lStack_60 = 0;
  local_58 = 0;
  plVar8 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar8 != plVar1) {
    if (*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 3 ==
        (long)*(int *)(param_1 + 0x48)) {
      plVar11 = (long *)0x0;
    }
    else {
      do {
        lVar10 = *plVar8;
        if (*(long *)(lVar10 + 0x280) == 0) {
LAB_00fbe4ac:
          lVar9 = FUN_00fba2d0(lVar10 + 0x280);
          if (lVar9 == 0) {
            lVar10 = FUN_01225e70(lVar10);
            FUN_01223ca0(lVar10 + 0x10);
            FUN_01223380();
            fVar13 = extraout_s0;
            fVar14 = extraout_var;
          }
          else {
            fVar14 = (float)*(undefined8 *)(lVar9 + 0xb8);
            fVar13 = (float)*(undefined8 *)(lVar9 + 0xb0);
          }
          plVar6 = local_68;
          plVar11 = local_78;
          fVar13 = *(float *)(lVar7 + 0xb0) - fVar13;
          fVar14 = *(float *)(lVar7 + 0xb8) - fVar14;
          fVar13 = fVar13 * fVar13;
          fVar14 = fVar14 * fVar14;
          auVar3._4_4_ = 0;
          auVar3._0_4_ = fVar13;
          auVar3._8_4_ = fVar14;
          auVar3._12_4_ = 0;
          auVar4._4_4_ = 0;
          auVar4._0_4_ = fVar13;
          auVar4._8_4_ = fVar14;
          auVar4._12_4_ = 0;
          auVar15 = NEON_ext(auVar3,auVar4,8,1);
          plVar12 = local_80;
          if (auVar15._0_4_ + fVar13 + auVar15._4_4_ + 0.0 <= *(float *)(param_1 + 0x54)) {
            if (local_78 == local_70) {
              FUN_00fc3390(&local_80,plVar8);
              plVar12 = local_80;
              plVar11 = local_78;
            }
            else {
              lVar10 = nn::os::GetTlsValue(*puVar5);
              if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar6;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
              *plVar11 = *plVar8;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
              plVar11 = local_78 + 1;
              plVar12 = local_80;
            }
          }
        }
        else {
          plVar12 = local_80;
          plVar11 = local_78;
          if (*(int *)(*(long *)(lVar10 + 0x280) + 0x54) == 0) {
            lVar10 = *plVar8;
            goto LAB_00fbe4ac;
          }
        }
        local_80 = plVar12;
        local_78 = plVar11;
      } while ((plVar1 + -1 != plVar8) &&
              (plVar8 = plVar8 + 1,
              (ulong)((long)plVar11 - (long)plVar12 >> 3) <
              (ulong)((long)*(int *)(param_1 + 0x48) -
                     (*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 3))));
      if (plVar12 != plVar11) {
        do {
          plVar8 = (long *)FUN_00fbc700(param_1,*plVar12);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x10))(&local_48);
            lVar10 = *plVar12;
            if (*(long *)(lVar10 + 0x280) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar10 + 0x280) + 0x48) + 0x18))();
              *(undefined8 *)(lVar10 + 0x280) = 0;
            }
            *(undefined8 *)(lVar10 + 0x280) = local_48;
          }
          plVar12 = plVar12 + 1;
        } while (plVar11 != plVar12);
        plVar11 = local_80;
      }
    }
    if (plVar11 != (long *)0x0) {
      local_78 = plVar11;
      (**(code **)(*local_68 + 0x18))(local_68,plVar11,(long)local_70 - (long)plVar11,8);
    }
  }
  return;
}


