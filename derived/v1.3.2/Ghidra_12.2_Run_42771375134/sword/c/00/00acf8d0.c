/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acf8d0; name: FUN_00acf8d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00acf8d0(long *param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined **local_f0;
  long *local_e8;
  undefined8 *local_e0;
  long local_d8;
  undefined ***local_d0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60 [2];
  undefined8 local_48;
  
  if (param_1[0xa2] == 0) {
    return;
  }
  if (*(int *)(param_1[0xa2] + 0x54) == 0) {
    return;
  }
  if (0xf < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_48 = *(undefined8 *)(param_1[0x78] + (ulong)*(uint *)(param_1 + 0xb4) * 0x20 + 0xb8);
  lVar10 = *(long *)(param_1[0x78] + 0x528);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_68 = param_1[0xa2];
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(param_1[0x78] + 0x3f8);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(lVar12 + 0x58);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  local_70 = lVar14;
  FUN_00c7a130(lVar10,&local_68,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  local_78 = *(long *)(*(long *)(param_1[0x78] + 0x1e18) + 0x400);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x9c) = 1;
  if ((int)param_1[0x9a] == 2) {
    FUN_00ad0330(param_1);
    if (*(int *)((long)param_1 + 0x504) != 0) {
      lVar10 = *(long *)(param_1[0x78] + 0x528);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      local_60[0] = param_1[0xa2];
      if (local_60[0] != 0) {
        (**(code **)(*(long *)(local_60[0] + 0x48) + 0x10))();
      }
      FUN_00c7a1d0(&local_f0,lVar10,local_60);
      FUN_00ad2020(&local_88,&local_f0);
      if (local_f0 != (undefined **)0x0) {
        (**(code **)(local_f0[9] + 0x18))();
        local_f0 = (undefined **)0x0;
      }
      if (local_60[0] != 0) {
        (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
        local_60[0] = 0;
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      local_90 = local_78;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
      }
      FUN_00da16f0(&local_80,&local_88,&local_90,2);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      uVar6 = (**(code **)(*(long *)param_1[0x78] + 0x748))
                        ((long *)param_1[0x78],(int)param_1[0x79]);
      uVar11 = 0;
      uVar5 = 8;
      if ((uVar6 & 1) == 0) {
        uVar5 = 9;
      }
      goto LAB_00ad0238;
    }
    lVar10 = FUN_009c5ff0(param_1[0x78]);
    if (lVar10 == 0) {
      uVar5 = 1;
      lVar10 = *(long *)(param_1[0x78] + 0x528);
    }
    else {
      uVar6 = FUN_008f35c0(lVar10,0x80000);
      if (((uVar6 & 1) == 0) ||
         (uVar6 = (**(code **)(*(long *)param_1[0x78] + 0x748))
                            ((long *)param_1[0x78],(int)param_1[0x79]), (uVar6 & 1) != 0)) {
        uVar5 = 1;
        lVar10 = *(long *)(param_1[0x78] + 0x528);
      }
      else {
        uVar5 = 1;
        if ((*(uint *)(param_1 + 0x9e) & 0xfffffffe) == 0x378) {
          uVar5 = 2;
        }
        lVar10 = *(long *)(param_1[0x78] + 0x528);
      }
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    local_60[0] = param_1[0xa2];
    if (local_60[0] != 0) {
      (**(code **)(*(long *)(local_60[0] + 0x48) + 0x10))();
    }
    FUN_00c7a1d0(&local_f0,lVar10,local_60);
    FUN_00ad2020(&local_a0,&local_f0);
    if (local_f0 != (undefined **)0x0) {
      (**(code **)(local_f0[9] + 0x18))();
      local_f0 = (undefined **)0x0;
    }
    if (local_60[0] != 0) {
      (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
      local_60[0] = 0;
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    local_a8 = local_78;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    FUN_00da16f0(&local_98,&local_a0,&local_a8,uVar5);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    uVar6 = (**(code **)(*(long *)param_1[0x78] + 0x748))((long *)param_1[0x78],(int)param_1[0x79]);
    uVar5 = 6;
    if ((uVar6 & 1) == 0) {
      uVar5 = 7;
    }
  }
  else {
    lVar10 = *(long *)(param_1[0x78] + 0x528);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    local_b0 = param_1[0xa2];
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_f0,lVar10,&local_b0);
    if (local_f0 == (undefined **)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      puVar13 = (undefined8 *)local_f0[0xc];
      if (puVar13 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)(**(code **)*puVar13)(puVar13);
        if (((*PTR_DAT_02719750 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02719750), iVar4 != 0)) {
          uVar8 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar8;
          __cxa_guard_release(PTR_DAT_02719750);
        }
        for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          if (puVar7 == (undefined8 *)PTR_DAT_02719758) {
            puVar13 = puVar13 + -10;
            ppuVar1 = local_f0;
            goto joined_r0x00acfc84;
          }
        }
      }
      puVar13 = (undefined8 *)0x0;
      ppuVar1 = local_f0;
      local_f0 = (undefined **)0x0;
joined_r0x00acfc84:
      if (ppuVar1 != (undefined **)0x0) {
        (**(code **)(ppuVar1[9] + 0x18))();
        local_f0 = (undefined **)0x0;
      }
    }
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if (puVar13 == (undefined8 *)0x0) {
LAB_00acfe80:
      local_b8 = param_1[0xa2];
    }
    else {
      FUN_00c68d70(puVar13,0x40);
      lVar10 = *(long *)(param_1[0x78] + 0x400);
      if (lVar10 != 0) {
        plVar15 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar15 + 0x10))(plVar15);
        FUN_00c68e70(puVar13,lVar10);
        (**(code **)(*plVar15 + 0x18))(plVar15);
        goto LAB_00acfe80;
      }
      FUN_00c68e70(puVar13,0);
      local_b8 = param_1[0xa2];
    }
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
    }
    local_f0 = &PTR_LAB_02633fb8;
    local_e8 = &local_78;
    local_e0 = &local_48;
    local_d0 = &local_f0;
    FUN_00ca4690(&local_b8,&local_f0);
    if (&local_f0 == local_d0) {
      pcVar9 = (code *)(*local_d0)[4];
LAB_00acfee8:
      (*pcVar9)();
    }
    else if (local_d0 != (undefined ***)0x0) {
      pcVar9 = (code *)(*local_d0)[5];
      goto LAB_00acfee8;
    }
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    uVar6 = (**(code **)(*(long *)param_1[0x78] + 0x748))((long *)param_1[0x78],(int)param_1[0x79]);
    bVar2 = FUN_00ad0c40(param_1);
    plVar15 = (long *)param_1[0x78];
    *(byte *)((long)param_1 + 0x4c1) = bVar2 & 1;
    uVar5 = (**(code **)(*plVar15 + 0x8e8))(plVar15,(int)param_1[0x79]);
    uVar3 = (**(code **)(*plVar15 + 0x908))(plVar15,uVar5);
    local_f0 = (undefined **)0xb3236763c32e0e7d;
    local_e8 = (long *)0x1d25339;
    local_e0 = (undefined8 *)0x7;
    FUN_012b4250(local_60,param_1[0x78] + 0x18f8,&local_f0);
    FUN_012b4190(auStack_100,local_60,uVar3);
    plVar15 = param_1 + 0xa4;
    FUN_012b4070(plVar15,auStack_100);
    local_f0 = (undefined **)0x9fc50a994755953d;
    local_e8 = (long *)&DAT_01d255c3;
    local_e0 = (undefined8 *)0x4;
    uVar5 = 4;
    if ((uVar6 & 1) == 0) {
      uVar5 = 5;
    }
    FUN_012b4250(local_60,plVar15,&local_f0);
    uVar16 = FUN_012b4630(0,local_60);
    local_f0 = (undefined **)0x9fc509994755938a;
    local_e8 = (long *)&DAT_01d1ec09;
    local_e0 = (undefined8 *)0x4;
    FUN_012b4250(local_60,plVar15,&local_f0);
    uVar17 = FUN_012b4630(0,local_60);
    local_f0 = (undefined **)0x9fc50899475591d7;
    local_e8 = (long *)&DAT_01cefbb5;
    local_e0 = (undefined8 *)0x4;
    FUN_012b4250(local_60,plVar15,&local_f0);
    uVar18 = FUN_012b4630(0,local_60);
    local_f0 = (undefined **)0xe49d46996e3343f3;
    local_e8 = (long *)&DAT_01cde2ac;
    local_e0 = (undefined8 *)0x4;
    FUN_012b4250(local_60,plVar15,&local_f0);
    uVar19 = FUN_012b4630(0,local_60);
    local_f0 = (undefined **)0xe49d45996e334240;
    local_e8 = (long *)&DAT_01d00bfb;
    local_e0 = (undefined8 *)0x4;
    FUN_012b4250(local_60,plVar15,&local_f0);
    uVar20 = FUN_012b4630(0,local_60);
    local_f0 = (undefined **)0xe49d48996e334759;
    local_e8 = (long *)&DAT_01d21c08;
    local_e0 = (undefined8 *)0x4;
    FUN_012b4250(local_60,plVar15,&local_f0);
    uVar21 = FUN_012b4630(0,local_60);
    uVar11 = 1;
    param_1[0x75] = CONCAT44((int)((ulong)uStack_108 >> 0x20),uVar18);
    param_1[0x74] = CONCAT44(uVar17,uVar16);
    param_1[0x77] = CONCAT44((int)((ulong)uStack_118 >> 0x20),uVar21);
    param_1[0x76] = CONCAT44(uVar20,uVar19);
    if (uVar3 < 0xbc) {
      if (uVar3 == 7) goto LAB_00ad01e4;
      if (uVar3 != 0xb8) goto LAB_00ad0238;
      local_f0 = (undefined **)0x4e840eeece1164da;
      local_e8 = (long *)0x1d00c13;
      local_e0 = (undefined8 *)0xc;
      local_d8 = 0;
      FUN_00ad3410(param_1,&local_f0,2);
    }
    else {
      if (((uVar3 != 0xbc) && (uVar3 != 0xf1)) && (uVar3 != 199)) goto LAB_00ad0238;
LAB_00ad01e4:
      local_f0 = (undefined **)0x4e840eeece1164da;
      local_e8 = (long *)0x1d00c13;
      local_e0 = (undefined8 *)0xc;
      local_d8 = 0;
      FUN_00ad3410(param_1,&local_f0,1);
    }
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
    }
  }
  uVar11 = 1;
LAB_00ad0238:
  FUN_00ad0e60(param_1);
  lVar10 = FUN_009c5ff0(param_1[0x78]);
  if (lVar10 != 0) {
    local_f0 = (undefined **)0x9200010e908f0c9b;
    local_e8 = (long *)0x1d14d8f;
    local_e0 = (undefined8 *)0x10;
    local_d8 = 0;
    FUN_00ad5db0(param_1,&local_f0,*(long *)(lVar10 + 0x88) + 0x2d8);
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
    }
  }
  uVar6 = (**(code **)(*param_1 + 400))(param_1);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xae) = uVar11;
    *(undefined1 *)((long)param_1 + 0x571) = uVar11;
  }
  FUN_00ad1240(param_1,uVar5);
  (**(code **)(*param_1 + 0x200))(param_1);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


