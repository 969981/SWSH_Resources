/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7a3a0; name: FUN_00d7a3a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d7a3a0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  long local_80;
  ulong local_78;
  char *pcStack_70;
  undefined8 local_68;
  long local_60;
  ulong local_58;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar12)(puVar12);
    lVar7 = FUN_00d74330();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        puVar12 = puVar12 + -10;
        goto LAB_00d7a400;
      }
    }
  }
  puVar12 = (undefined8 *)0x0;
LAB_00d7a400:
  local_78 = local_78 & 0xffffffffffffff00;
  FUN_00d7d400(*(undefined8 *)(param_1 + 0x78),&local_78);
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 0:
    FUN_00d7ed70(*(undefined8 *)(param_1 + 0x78));
    lVar7 = FUN_00d7e5c0(*(undefined8 *)(param_1 + 0x78));
    lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (*(int *)(*(long *)(param_1 + 0x78) + 0x5dc) == 0xb) {
      local_78 = CONCAT71(local_78._1_7_,*(undefined1 *)(puVar12[0x4f] + 0x58));
      FUN_00d70a10(lVar7 + 0x10,&local_78);
      uVar11 = FUN_00d714a0();
    }
    else {
      uVar11 = FUN_0153a2b0(lVar14,*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 8));
    }
    if ((uVar11 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      uVar11 = 0xaf5739ee2445ee0d;
      if (*(int *)(*(long *)(param_1 + 0x78) + 0x5dc) == 8) {
        bVar3 = FUN_00d71370(puVar12[0x4f] + 0x58);
        *(byte *)(param_1 + 0x90) = bVar3 & 1;
        uVar11 = 0xaf5739ee2445ee0d;
        if ((bVar3 & 1) == 0) {
          uVar11 = 0xaf5738ee2445ec5a;
        }
      }
      puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      local_78 = uVar11;
      plVar6 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*PTR_DAT_02717528 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
        uVar9 = FUN_00b8c810();
        *(undefined8 *)PTR_DAT_02717530 = uVar9;
        __cxa_guard_release(PTR_DAT_02717528);
      }
      for (; plVar6 != (long *)PTR_DAT_02717530; plVar6 = (long *)*plVar6) {
      }
      FUN_00d70930(&local_58,*(undefined8 *)(puVar13[0x9f] + 0xb0));
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x5d8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(lVar8 + 0x2e8);
      if (lVar15 != 0) {
        plVar6 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      FUN_014ca220(uVar9,0,*(undefined4 *)(lVar7 + 0x30),7,0,1);
      FUN_0077eb10(local_58,&local_78,lVar15);
      FUN_014c62d0(uVar9,puVar12[0x71],lVar15);
      (**(code **)(**(long **)(param_1 + 0x80) + 0x88))
                (*(long **)(param_1 + 0x80),puVar12 + 0x66,puVar12 + 0x69);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
      *(undefined4 *)(param_1 + 0x88) = 1;
      uVar11 = 0;
      uVar2 = local_78;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
        uVar11 = local_58;
        uVar2 = local_78;
      }
    }
    else {
      puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      plVar6 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*PTR_DAT_02717528 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
        uVar9 = FUN_00b8c810();
        *(undefined8 *)PTR_DAT_02717530 = uVar9;
        __cxa_guard_release(PTR_DAT_02717528);
      }
      for (; plVar6 != (long *)PTR_DAT_02717530; plVar6 = (long *)*plVar6) {
      }
      FUN_00d70930(&local_78,*(undefined8 *)(puVar13[0x9f] + 0xb0));
      local_58 = 0xaf5736ee2445e8f4;
      FUN_0077eb10(local_78,&local_58,puVar12[0x71]);
      FUN_01038170(*(undefined8 *)(param_1 + 0x80),puVar12 + 0x66);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
      local_58 = local_58 & 0xffffffffffffff00;
      FUN_00d7e7a0(*(undefined8 *)(param_1 + 0x78),&local_58);
      *(undefined4 *)(param_1 + 0x88) = 9;
      uVar11 = local_58;
      uVar2 = 0;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
        uVar11 = local_58;
        uVar2 = local_78;
      }
    }
    local_78 = uVar2;
    local_58 = uVar11;
    if (lVar14 == 0) {
      return;
    }
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    return;
  case 1:
    uVar11 = FUN_010386c0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar11 & 1) == 0) {
      return;
    }
    iVar5 = FUN_010386e0(*(undefined8 *)(param_1 + 0x80));
    if (iVar5 == 0) {
      lVar7 = FUN_00d7e5c0(*(undefined8 *)(param_1 + 0x78));
      puVar1 = PTR_DAT_02710798;
      lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
      if (lVar14 == 0) {
        uVar4 = FUN_01538ec0(0);
        if (uVar4 < *(uint *)(lVar7 + 0x30)) goto LAB_00d7a6a0;
      }
      else {
        plVar6 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar4 = FUN_01538ec0(lVar14);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (uVar4 < *(uint *)(lVar7 + 0x30)) {
LAB_00d7a6a0:
          puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
          plVar6 = (long *)(**(code **)*puVar13)(puVar13);
          if (((*PTR_DAT_02717528 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
            uVar9 = FUN_00b8c810();
            *(undefined8 *)PTR_DAT_02717530 = uVar9;
            __cxa_guard_release(PTR_DAT_02717528);
          }
          for (; plVar6 != (long *)PTR_DAT_02717530; plVar6 = (long *)*plVar6) {
          }
          FUN_00d70930(&local_78,*(undefined8 *)(puVar13[0x9f] + 0xb0));
          local_58 = 0xaf5737ee2445eaa7;
          FUN_0077eb10(local_78,&local_58,puVar12[0x71]);
          FUN_01038170(*(undefined8 *)(param_1 + 0x80),puVar12 + 0x66);
          FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
          *(undefined4 *)(param_1 + 0x88) = 9;
          if (local_78 == 0) {
            return;
          }
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          return;
        }
      }
      puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      plVar6 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*PTR_DAT_02717528 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
        uVar9 = FUN_00b8c810();
        *(undefined8 *)PTR_DAT_02717530 = uVar9;
        __cxa_guard_release(PTR_DAT_02717528);
      }
      for (; plVar6 != (long *)PTR_DAT_02717530; plVar6 = (long *)*plVar6) {
      }
      FUN_00d70930(&local_58,*(undefined8 *)(puVar13[0x9f] + 0xb0));
      local_78 = 0xaf5734ee2445e58e;
      FUN_0077eb10(local_58,&local_78,puVar12[0x71]);
      puVar13 = puVar12 + 0x66;
      FUN_01038170(*(undefined8 *)(param_1 + 0x80),puVar13);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
      local_78 = local_78 & 0xffffffffffffff00;
      FUN_00d7e7a0(*(undefined8 *)(param_1 + 0x78),&local_78);
      FUN_006cf0a0(&local_78,&DAT_0264cf80);
      FUN_016d3620(&local_78);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      lVar14 = *(long *)(*(long *)puVar1 + 0x208);
      if (lVar14 == 0) {
        FUN_01538ed0(0,uVar4 - *(int *)(lVar7 + 0x30));
        iVar5 = *(int *)(*(long *)(param_1 + 0x78) + 0x5dc);
      }
      else {
        plVar6 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_01538ed0(lVar14,uVar4 - *(int *)(lVar7 + 0x30));
        (**(code **)(*plVar6 + 0x18))(plVar6);
        iVar5 = *(int *)(*(long *)(param_1 + 0x78) + 0x5dc);
      }
      if (iVar5 == 0xb) {
        local_78._1_7_ = (undefined7)(local_78 >> 8);
        local_78 = CONCAT71(local_78._1_7_,*(undefined1 *)(puVar12[0x4f] + 0x58));
        uVar9 = FUN_00d70a10(lVar7 + 0x10,&local_78);
        FUN_00d7b930(param_1,uVar9);
      }
      else {
        lVar14 = *(long *)(*(long *)puVar1 + 0x218);
        if (lVar14 == 0) {
          FUN_0153a420(0,*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 8),1);
        }
        else {
          plVar6 = (long *)(lVar14 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0153a420(lVar14,*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 8),1);
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      local_78 = 0xb98337d3854d6606;
      pcStack_70 = "SHOPPING_CLOTHES";
      local_80 = 0;
      local_68 = 0x10;
      local_60 = 0;
      FUN_014af470(&local_78,&local_80);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      FUN_01528a20(0x1f);
      if (*(char *)(param_1 + 0x90) != '\0') {
        *(undefined1 *)(puVar12 + 0x52) = 1;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x78);
      local_84[0] = FUN_00d7e580(uVar9);
      local_88[0] = 1;
      local_78 = local_78 & 0xffffffff00000000;
      FUN_00d7e620(uVar9,local_84,local_88,&local_78);
      FUN_00d7df20(*(undefined8 *)(param_1 + 0x78));
      if ((*(char *)(puVar12[0x50] + 8) == '\0') && (*(char *)(param_1 + 0x90) != '\0')) {
        lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x5e0) + 0x18);
        lVar7 = *(long *)(lVar14 + 0x2d0);
        *(undefined8 *)(lVar14 + 0x2b8) = 0x6bf4654d15e02d1e;
        *(undefined1 *)(lVar14 + 0x478) = 0;
        *(char **)(lVar14 + 0x2c0) = "Play_UI_boutique_change";
        *(undefined8 *)(lVar14 + 0x2d0) = 0;
        *(undefined8 *)(lVar14 + 0x2c8) = 0x17;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        local_78 = 0xaf5733ee2445e3db;
        FUN_0077eb10(local_58,&local_78,puVar12[0x71]);
        (**(code **)(**(long **)(param_1 + 0x80) + 0x88))
                  (*(long **)(param_1 + 0x80),puVar13,puVar12 + 0x69);
        *(undefined4 *)(param_1 + 0x88) = 2;
      }
      else {
        local_78 = 0xaf5732ee2445e228;
        FUN_0077eb10(local_58,&local_78,puVar12[0x71]);
        FUN_01038170(*(undefined8 *)(param_1 + 0x80),puVar13);
        *(undefined4 *)(param_1 + 0x88) = 9;
      }
      if (local_58 == 0) {
        return;
      }
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      return;
    }
    break;
  case 2:
    uVar11 = FUN_010386c0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar11 & 1) == 0) {
      return;
    }
    lVar14 = *(long *)(param_1 + 0x80);
    FUN_006cf0a0(&local_a8,&DAT_0264cf98);
    lVar7 = local_90;
    lVar14 = *(long *)(lVar14 + 0x5e0);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)(lVar14 + 0x18);
    *(undefined1 *)(lVar14 + 0x478) = 0;
    *(undefined8 *)(lVar14 + 0x2b8) = local_a8;
    *(undefined8 *)(lVar14 + 0x2c0) = uStack_a0;
    *(undefined8 *)(lVar14 + 0x2c8) = local_98;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar14 + 0x2d0);
    *(long *)(lVar14 + 0x2d0) = lVar7;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    iVar5 = FUN_010386e0(*(undefined8 *)(param_1 + 0x80));
    if (iVar5 == 0) {
      uVar9 = FUN_00d7e5c0(*(undefined8 *)(param_1 + 0x78));
      lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
      if (lVar7 == 0) {
        uVar10 = FUN_01524df0(0);
        FUN_00d71540(uVar10,uVar9);
      }
      else {
        plVar6 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar10 = FUN_01524df0(lVar7);
        FUN_00d71540(uVar10,uVar9);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    break;
  default:
    goto switchD_00d7a42c_caseD_3;
  case 9:
    uVar11 = FUN_010386c0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar11 & 1) == 0) {
      return;
    }
  }
  FUN_00d7c010(param_1);
  *(undefined4 *)(param_1 + 0x88) = 0;
switchD_00d7a42c_caseD_3:
  return;
}


