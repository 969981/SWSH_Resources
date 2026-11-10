/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbe670; name: FUN_00fbe670
 */


void FUN_00fbe670(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  float extraout_s0;
  float fVar14;
  undefined4 extraout_s0_00;
  undefined4 uVar15;
  undefined4 extraout_s0_01;
  undefined4 uVar16;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar17;
  float extraout_var_01;
  float fVar18;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 uVar19;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined1 auVar20 [16];
  ulong uVar21;
  undefined8 local_68;
  
  plVar12 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar12 != plVar1) {
    uVar21 = 0;
    iVar13 = 0;
    do {
      while( true ) {
        lVar11 = *plVar12;
        lVar7 = FUN_00fba2d0(lVar11 + 0x280);
        if (lVar7 == 0) break;
        cVar5 = FUN_00ed6290();
        if (cVar5 != '\x03') goto LAB_00fbe7b4;
LAB_00fbe6cc:
        lVar7 = *plVar12;
        if (*(int *)(param_1 + 0x4c) <= iVar13) {
          plVar8 = (long *)FUN_00fba9b0(lVar7 + 0x288);
          goto joined_r0x00fbe7dc;
        }
        if ((*(long *)(lVar7 + 0x280) == 0) || (*(int *)(*(long *)(lVar7 + 0x280) + 0x54) == 0)) {
          lVar11 = *(long *)(param_1 + 0xf8);
          lVar2 = *(long *)(param_1 + 0x100);
          if ((ulong)(long)*(int *)(param_1 + 0x48) <= (ulong)(lVar2 - lVar11 >> 3)) {
            if (lVar11 != lVar2) {
              do {
                lVar9 = FUN_00fba2d0(lVar11);
                if (lVar9 != 0) {
                  lVar10 = FUN_00fba2d0(lVar7 + 0x280);
                  if (lVar10 == 0) {
                    lVar10 = FUN_01225e70(lVar7);
                    FUN_01223ca0(lVar10 + 0x10);
                    FUN_01223380();
                    fVar14 = extraout_s0;
                    fVar18 = extraout_var_01;
                  }
                  else {
                    fVar18 = (float)*(undefined8 *)(lVar10 + 0xb8);
                    fVar14 = (float)*(undefined8 *)(lVar10 + 0xb0);
                  }
                  fVar14 = *(float *)(lVar9 + 0xb0) - fVar14;
                  fVar18 = *(float *)(lVar9 + 0xb8) - fVar18;
                  fVar14 = fVar14 * fVar14;
                  fVar18 = fVar18 * fVar18;
                  auVar20._4_4_ = 0;
                  auVar20._0_4_ = fVar14;
                  auVar20._8_4_ = fVar18;
                  auVar20._12_4_ = 0;
                  auVar3._4_4_ = 0;
                  auVar3._0_4_ = fVar14;
                  auVar3._8_4_ = fVar18;
                  auVar3._12_4_ = 0;
                  auVar20 = NEON_ext(auVar20,auVar3,8,1);
                  if (*(float *)(param_1 + 100) < auVar20._0_4_ + fVar14 + auVar20._4_4_ + 0.0)
                  goto LAB_00fbe708;
                }
                lVar11 = lVar11 + 8;
              } while (lVar2 != lVar11);
            }
            goto LAB_00fbe7b4;
          }
        }
LAB_00fbe708:
        iVar13 = iVar13 + 1;
        plVar8 = (long *)FUN_00fba9b0(*plVar12 + 0x288);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)FUN_00fbe930(param_1,*plVar12);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x10))(&local_68);
            lVar7 = *plVar12;
            if (*(long *)(lVar7 + 0x288) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar7 + 0x288) + 0x48) + 0x18))();
              *(undefined8 *)(lVar7 + 0x288) = 0;
            }
            *(undefined8 *)(lVar7 + 0x288) = local_68;
            goto LAB_00fbe768;
          }
        }
        else {
LAB_00fbe768:
          lVar7 = FUN_01225e70(*plVar12);
          uVar6 = FUN_01223b80(lVar7 + 0x10);
          *(undefined1 *)((long)plVar8 + 0x629) = uVar6;
          lVar11 = *plVar12;
          lVar7 = FUN_00fba2d0(lVar11 + 0x280);
          if (lVar7 == 0) {
            lVar7 = FUN_01225e70(lVar11);
            FUN_01223ca0(lVar7 + 0x10);
            FUN_01223380();
            uVar15 = extraout_s0_00;
            uVar16 = extraout_var;
            uVar17 = extraout_var_02;
            uVar19 = extraout_var_04;
          }
          else {
            uVar17 = (undefined4)*(undefined8 *)(lVar7 + 0xb8);
            uVar19 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20);
            uVar15 = (undefined4)*(undefined8 *)(lVar7 + 0xb0);
            uVar16 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xb0) >> 0x20);
          }
          plVar8[0x17] = CONCAT44(uVar19,uVar17);
          plVar8[0x16] = CONCAT44(uVar16,uVar15);
          *(undefined1 *)(plVar8 + 0x18) = 1;
          lVar11 = *plVar12;
          lVar7 = FUN_00fba2d0(lVar11 + 0x280);
          if (lVar7 == 0) {
            lVar7 = FUN_01225e70(lVar11);
            FUN_01223ca0(lVar7 + 0x10);
            uVar15 = FUN_012233a0();
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar21;
            FUN_00a92cd0(uVar15,auVar4 << 0x40,0);
            uVar15 = extraout_s0_01;
            uVar16 = extraout_var_00;
            uVar17 = extraout_var_03;
            uVar19 = extraout_var_05;
          }
          else {
            uVar17 = (undefined4)*(undefined8 *)(lVar7 + 0xa8);
            uVar19 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xa8) >> 0x20);
            uVar15 = (undefined4)*(undefined8 *)(lVar7 + 0xa0);
            uVar16 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xa0) >> 0x20);
          }
          *(undefined1 *)(plVar8 + 0x18) = 1;
          plVar8[0x15] = CONCAT44(uVar19,uVar17);
          plVar8[0x14] = CONCAT44(uVar16,uVar15);
        }
joined_r0x00fbe7cc:
        plVar12 = plVar12 + 1;
        if (plVar12 == plVar1) {
          return;
        }
      }
      lVar7 = FUN_01225e70(lVar11);
      FUN_01223ca0(lVar7 + 0x10);
      cVar5 = FUN_01223390();
      if (cVar5 == '\x03') goto LAB_00fbe6cc;
LAB_00fbe7b4:
      plVar8 = (long *)FUN_00fba9b0(*plVar12 + 0x288);
joined_r0x00fbe7dc:
      if (plVar8 == (long *)0x0) goto joined_r0x00fbe7cc;
      (**(code **)(*plVar8 + 0x80))();
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
  return;
}


