/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee8cb0; name: FUN_00ee8cb0
 */


void FUN_00ee8cb0(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long local_208;
  undefined1 local_200 [2];
  undefined4 local_1fe;
  undefined2 local_1fa;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *puStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined2 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_ba;
  undefined8 local_b4;
  undefined1 local_ac;
  long local_98;
  long local_90;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long local_70;
  
  puVar3 = PTR_DAT_02710848;
  plVar14 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar15 = *(long *)PTR_DAT_02710848;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar14;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14,0x90,8);
  if (lVar10 == 0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  FUN_00883c20(lVar10,plVar14);
  *(long **)(lVar10 + 8) = plVar14;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0x90;
  *(undefined8 *)(lVar10 + 0x20) = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  local_98 = lVar10;
  local_90 = lVar10;
  if (lVar10 == 0) {
    lVar9 = *param_2;
  }
  else {
    plVar17 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    lVar9 = *param_2;
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  FUN_00e30f20(lVar9,plVar14,&local_98);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  local_200[0] = 0;
  local_e8 = 0xcbf29ce484222645;
  puStack_e0 = &DAT_01d38550;
  local_d8 = 0;
  local_d0 = 0;
  local_1f8 = 0;
  local_1fa = 0;
  local_1fe = 0;
  local_1e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  local_f0 = 0xcbf29ce484222645;
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_02715198), puVar4 = PTR_DAT_027151a0, iVar8 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar4 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar4,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  local_e8 = *(undefined8 *)PTR_DAT_027151a0;
  puStack_e0 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_d8 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar9 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (local_d0 != 0) {
    plVar17 = (long *)(local_d0 + 0x48);
    local_d0 = lVar9;
    (**(code **)(*plVar17 + 0x18))();
    lVar9 = local_d0;
  }
  local_d0 = lVar9;
  local_88 = &DAT_cc7b5e39ed4396ae;
  pcStack_80 = "NONE_NONE";
  local_c8 = 0;
  local_78 = 9;
  local_70 = 0;
  FUN_010011e0(&local_88,local_200);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  local_ba = 0;
  local_bc = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_ac = 0;
  lVar9 = *(long *)(*(long *)puVar3 + 0x90);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar10 = FUN_00eea980();
  *(long *)(param_1 + 0x130) = lVar10;
  if (*(long *)(*param_2 + 0x280) != -0x340d631b7bddd9bb) {
    lVar10 = *(long *)(*param_2 + 0x280);
  }
  *(long *)(param_1 + 0x130) = lVar10;
  if (*(long *)(lVar9 + 0x578) == 0) {
    puVar11 = (undefined8 *)FUN_01028290();
    local_88 = (undefined1 *)*puVar11;
    if (local_88 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_88,*(long *)(lVar9 + 0x578),param_1 + 0x130);
  }
  FUN_006cf0c0(&local_220,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = (undefined1 *)0x0;
  }
  local_240 = local_220;
  uStack_238 = uStack_218;
  local_230 = local_210;
  local_228 = local_208;
  if (local_208 != 0) {
    (**(code **)(*(long *)(local_208 + 0x48) + 0x10))();
  }
  FUN_010011e0(&local_240,local_200);
  if (local_228 != 0) {
    (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
    local_228 = 0;
  }
  uVar7 = FUN_00ecec10();
  if (((*(int *)(param_1 + 300) == 4) &&
      (lVar10 = FUN_00f4c1c0(*(undefined8 *)(param_1 + 0x110),param_1 + 0x118),
      (uVar7 & 0xfffffffe) == 4)) && (*(int *)(lVar10 + 0x40) - 0x11U < 3)) {
    local_88 = (undefined1 *)0xb297437d71a65eaa;
    pcStack_80 = "Set_State_Cloudy";
    local_78 = 0x10;
    local_70 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_88);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    local_c0 = CONCAT22(local_c0._2_2_,0x100);
    uVar1 = local_c0;
switchD_00ee90b8_caseD_0:
    local_c0 = uVar1;
    local_c0 = local_c0 & 0xffffff00;
    uVar1 = local_c0;
    goto switchD_00ee90b8_default;
  }
  uVar5 = local_c0;
  uVar1 = uVar7 - 0xf;
  if ((int)uVar7 < 0xf) {
    uVar1 = uVar7;
  }
  local_c0._0_2_ = CONCAT11((char)uVar1,(undefined1)local_c0);
  uVar1 = local_c0;
  uVar6 = local_c0._1_3_;
  local_c0._3_1_ = SUB41(uVar5,3);
  uVar13 = local_c0._3_1_;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00ee90b8_caseD_0;
  case 2:
    uVar13 = 2;
    break;
  case 3:
    local_c0 = CONCAT31(uVar6,2);
    local_c0._0_3_ = CONCAT12(3,(short)local_c0);
    local_c0 = CONCAT13(uVar13,(undefined3)local_c0);
    uVar1 = local_c0;
    goto switchD_00ee90b8_default;
  case 4:
  case 5:
    uVar13 = 3;
    break;
  case 6:
    uVar13 = 1;
    break;
  case 7:
    uVar13 = 4;
    break;
  case 8:
    local_c0._0_2_ = (short)(uVar1 >> 8) << 8;
    local_c0._0_3_ = CONCAT12(2,(short)local_c0);
    uVar1 = local_c0;
  default:
    goto switchD_00ee90b8_default;
  }
  local_c0 = CONCAT31(uVar6,uVar13);
  uVar1 = local_c0;
switchD_00ee90b8_default:
  local_c0 = uVar1;
  puVar3 = PTR_DAT_027108d0;
  puVar2 = (undefined1 *)0x48232cc4d6902eac;
  if (*(undefined1 **)(*param_2 + 0x288) != (undefined1 *)0xcbf29ce484222645) {
    puVar2 = *(undefined1 **)(*param_2 + 0x288);
  }
  local_88 = puVar2;
  if (*(int *)(param_1 + 300) == 4) {
    FUN_00eeab10(param_1,&local_90,local_200,&local_88);
    if ((*(byte *)(param_1 + 0x124) >> 3 & 1) != 0) {
      lVar15 = *(long *)PTR_DAT_027108d0;
      *(uint *)(lVar15 + 0xac0) = *(uint *)(lVar15 + 0xac0) | 0x10;
      if ((*(byte *)(lVar15 + 0xac4) >> 6 & 1) == 0) {
        FUN_008e9ba0(lVar15 + 0x50);
      }
    }
  }
  else {
    lVar10 = *(long *)PTR_DAT_027108d0;
    lVar16 = *(long *)(lVar15 + 0x90);
    if (*(int *)(param_1 + 0x1e0) == 0xe) {
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(lVar16 + 0x58);
      plVar17 = (long *)(lVar15 + 0x48);
      if (lVar15 != 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
      FUN_008e9430(lVar10 + 0x50,lVar15,local_90,local_200,puVar2,plVar14);
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))(plVar17);
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
    }
    else {
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar18 = *(long *)(lVar16 + 0x58);
      plVar17 = (long *)(lVar18 + 0x48);
      if (lVar18 != 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
      FUN_008e7170(lVar10 + 0x50,lVar15,lVar18,local_90,local_200,0,puVar2,plVar14,plVar14);
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))(plVar17);
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      plVar17 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
      for (plVar14 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar14 != plVar17;
          plVar14 = plVar14 + 1) {
        lVar15 = FUN_00e813b0(*plVar14 + 0x50);
        if ((lVar15 != 0) && (uVar12 = (**(code **)(*(long *)*plVar14 + 0x88))(), (uVar12 & 1) == 0)
           ) {
          uVar12 = FUN_00ea01e0(lVar15,2);
          if ((uVar12 & 1) != 0) {
            *(uint *)(*(long *)puVar3 + 0xac0) = *(uint *)(*(long *)puVar3 + 0xac0) | 2;
          }
          break;
        }
      }
      if (*(int *)(param_1 + 0x128) == 1) {
        *(uint *)(*(long *)puVar3 + 0xac0) = *(uint *)(*(long *)puVar3 + 0xac0) | 1;
      }
      uVar12 = FUN_00fa4540();
      if ((uVar12 & 1) != 0) {
        *(undefined1 *)(*(long *)puVar3 + 0xad5) = 1;
      }
    }
  }
  if (local_208 != 0) {
    (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
    local_208 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  return;
}


