/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d97bf0; name: FUN_00d97bf0
 */


void FUN_00d97bf0(long param_1,char *param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  long local_a0 [2];
  undefined1 *local_90;
  long local_88;
  long local_80;
  char *local_70;
  char *local_68;
  
  *(undefined8 *)(param_1 + 0x60) = param_3;
  lVar8 = *param_4;
  local_70 = param_2;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar8 = param_1 + 0x1a0;
  FUN_00784d00(lVar8,&DAT_02160420,PTR_DAT_027162c0);
  local_a0[0] = 0x438078000000000;
  FUN_00784d30(lVar8,local_a0);
  pcVar3 = local_70;
  puVar1 = PTR_s_data___02710918;
  sVar6 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp(pcVar3,puVar1,sVar6);
  if (iVar4 == 0) {
    local_68 = pcVar3;
    FUN_00d99c10(local_a0,&local_68,0);
  }
  else {
    FUN_008d51b0(&local_68,PTR_s_data___02710918,&local_70);
    FUN_006e5870(local_a0,&local_68,0);
    if (local_68 != (char *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = (char *)0x0;
    }
  }
  puVar1 = PTR_DAT_02710788;
  FUN_00d99d50(&local_68,*(undefined8 *)PTR_DAT_02710788,0,local_a0,0,
               *(undefined8 *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  pcVar3 = local_68;
  *(char **)(param_1 + 0x88) = local_68;
  if (local_68 != (char *)0x0) {
    plVar10 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((*(long *)(param_1 + 0x90) != 0) || (*(long *)(param_1 + 0x110) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x80,1);
    }
    FUN_006e1be0(pcVar3);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  puVar12 = (undefined4 *)PTR_DAT_02710860;
  plVar10 = *(long **)(param_1 + 0x60);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00d98670;
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x200,0x10);
  if (lVar7 == 0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  FUN_0167e1b0(lVar7,*(undefined8 *)(param_1 + 0x60),param_1 + 0x80);
  *(long **)(lVar7 + 8) = plVar10;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x200;
  *(undefined8 *)(lVar7 + 0x20) = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  *(undefined1 *)(lVar7 + 0x1f1) = 0;
  FUN_00d98680(local_a0,lVar7,*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 400) = 0;
  }
  lVar9 = local_a0[0];
  *(long *)(param_1 + 400) = local_a0[0];
  FUN_0167c600(local_a0[0],*(undefined8 *)(param_1 + 0x68));
  lVar5 = *(long *)(lVar9 + 0x188);
  if (lVar5 == 0) {
    FUN_0167cd30(*(undefined8 *)(param_1 + 400),0);
LAB_00d97f88:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  else {
    lVar5 = lVar5 << 4;
    plVar10 = (long *)(*(long *)(lVar9 + 0x180) + 8);
    do {
      while (lVar9 = *plVar10, lVar9 == 0) {
        FUN_007868f0(0,lVar8);
        lVar5 = lVar5 + -0x10;
        plVar10 = plVar10 + 2;
        if (lVar5 == 0) goto LAB_00d97f54;
      }
      plVar11 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_007868f0(lVar9,lVar8);
      (**(code **)(*plVar11 + 0x18))(plVar11);
      lVar5 = lVar5 + -0x10;
      plVar10 = plVar10 + 2;
    } while (lVar5 != 0);
LAB_00d97f54:
    FUN_0167cd30(*(undefined8 *)(param_1 + 400),0);
    puVar12 = (undefined4 *)PTR_DAT_02710860;
    if (lVar7 != 0) goto LAB_00d97f88;
  }
  puVar2 = PTR_s_data___02710918;
  sVar6 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/appli/loading_fly/bin/loading_fly_00_lyt.bin",puVar2,sVar6);
  if (iVar4 == 0) {
    local_68 = "bin/appli/loading_fly/bin/loading_fly_00_lyt.bin";
    FUN_00d99c10(local_a0,&local_68,0);
  }
  else {
    FUN_00aa5430(&local_68,PTR_s_data___02710918,"bin/appli/loading_fly/bin/loading_fly_00_lyt.bin")
    ;
    FUN_006e5870(local_a0,&local_68,0);
    if (local_68 != (char *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = (char *)0x0;
    }
  }
  FUN_00d99d50(&local_68,*(undefined8 *)puVar1,0,local_a0,0,*(undefined8 *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0x288) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x288) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  pcVar3 = local_68;
  *(char **)(param_1 + 0x288) = local_68;
  if (local_68 != (char *)0x0) {
    plVar10 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((*(long *)(param_1 + 0x290) != 0) || (*(long *)(param_1 + 0x310) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x280,1);
    }
    FUN_006e1be0(pcVar3);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  plVar10 = *(long **)(param_1 + 0x60);
  lVar5 = nn::os::GetTlsValue(*puVar12);
  if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00d98670;
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x200,0x10);
  if (lVar7 == 0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  FUN_0167e1b0(lVar7,*(undefined8 *)(param_1 + 0x60),param_1 + 0x280);
  *(long **)(lVar7 + 8) = plVar10;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x200;
  *(undefined8 *)(lVar7 + 0x20) = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  *(undefined1 *)(lVar7 + 0x1f1) = 0;
  FUN_00d98680(local_a0,lVar7,*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x390) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x390) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  lVar9 = local_a0[0];
  *(long *)(param_1 + 0x390) = local_a0[0];
  FUN_0167c600(local_a0[0],*(undefined8 *)(param_1 + 0x68));
  lVar5 = *(long *)(lVar9 + 0x188);
  if (lVar5 == 0) {
    FUN_0167cd30(*(undefined8 *)(param_1 + 0x390),0);
LAB_00d98280:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  else {
    lVar5 = lVar5 << 4;
    plVar10 = (long *)(*(long *)(lVar9 + 0x180) + 8);
    do {
      while (lVar9 = *plVar10, lVar9 == 0) {
        FUN_007868f0(0,lVar8);
        lVar5 = lVar5 + -0x10;
        plVar10 = plVar10 + 2;
        if (lVar5 == 0) goto LAB_00d9824c;
      }
      plVar11 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_007868f0(lVar9,lVar8);
      (**(code **)(*plVar11 + 0x18))(plVar11);
      lVar5 = lVar5 + -0x10;
      plVar10 = plVar10 + 2;
    } while (lVar5 != 0);
LAB_00d9824c:
    FUN_0167cd30(*(undefined8 *)(param_1 + 0x390),0);
    puVar12 = (undefined4 *)PTR_DAT_02710860;
    if (lVar7 != 0) goto LAB_00d98280;
  }
  puVar2 = PTR_s_data___02710918;
  sVar6 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/appli/loading/bin/loading_00_lyt.bin",puVar2,sVar6);
  if (iVar4 == 0) {
    local_68 = "bin/appli/loading/bin/loading_00_lyt.bin";
    FUN_00d99c10(local_a0,&local_68,0);
  }
  else {
    FUN_00d9a5e0(&local_68,PTR_s_data___02710918,"bin/appli/loading/bin/loading_00_lyt.bin");
    FUN_006e5870(local_a0,&local_68,0);
    if (local_68 != (char *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = (char *)0x0;
    }
  }
  FUN_00d99d50(&local_68,*(undefined8 *)puVar1,0,local_a0,0,*(undefined8 *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0x3a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3a8) = 0;
  }
  pcVar3 = local_68;
  *(char **)(param_1 + 0x3a8) = local_68;
  if (local_68 != (char *)0x0) {
    plVar10 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((*(long *)(param_1 + 0x3b0) != 0) || (*(long *)(param_1 + 0x430) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x3a0,1);
    }
    FUN_006e1be0(pcVar3);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  plVar10 = *(long **)(param_1 + 0x60);
  lVar5 = nn::os::GetTlsValue(*puVar12);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x200,0x10);
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0xb8))(plVar10);
    }
    FUN_0167e1b0(lVar7,*(undefined8 *)(param_1 + 0x60),param_1 + 0x3a0);
    *(long **)(lVar7 + 8) = plVar10;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x200;
    *(undefined8 *)(lVar7 + 0x20) = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    *(undefined1 *)(lVar7 + 0x1f1) = 0;
    FUN_00d98680(local_a0,lVar7,*(undefined8 *)(param_1 + 0x60));
    if (*(long *)(param_1 + 0x4b0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x4b0) = 0;
    }
    lVar9 = local_a0[0];
    *(long *)(param_1 + 0x4b0) = local_a0[0];
    FUN_0167c600(local_a0[0],*(undefined8 *)(param_1 + 0x68));
    lVar5 = *(long *)(lVar9 + 0x188);
    if (lVar5 != 0) {
      lVar5 = lVar5 << 4;
      plVar10 = (long *)(*(long *)(lVar9 + 0x180) + 8);
      do {
        while (lVar9 = *plVar10, lVar9 == 0) {
          FUN_007868f0(0,lVar8);
          lVar5 = lVar5 + -0x10;
          plVar10 = plVar10 + 2;
          if (lVar5 == 0) goto LAB_00d98538;
        }
        plVar11 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_007868f0(lVar9,lVar8);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar5 = lVar5 + -0x10;
        plVar10 = plVar10 + 2;
      } while (lVar5 != 0);
    }
LAB_00d98538:
    local_a0[0] = 0x7b623278470ff2b5;
    FUN_0167b9b0(*(undefined8 *)(param_1 + 0x4b0),local_a0,0);
    FUN_0167cd30(*(undefined8 *)(param_1 + 0x4b0),0);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    plVar10 = *(long **)(param_1 + 8);
    lVar8 = nn::os::GetTlsValue(*puVar12);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar10 + 0x10))(plVar10,0x1e0,0x10);
      if (lVar5 == 0) {
        (**(code **)(*plVar10 + 0xb8))(plVar10);
      }
      FUN_00d9a6b0(lVar5,plVar10);
      *(long **)(lVar5 + 8) = plVar10;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x1e0;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x4c0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x4c0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x4c0) = 0;
      }
      *(long *)(param_1 + 0x4c0) = lVar5;
      FUN_0160fde0(lVar5);
      FUN_0160ff30(*(undefined8 *)(param_1 + 0x4c0));
      FUN_00d987b0(param_1);
      *(undefined4 *)(param_1 + 0x70) = 1;
      return;
    }
  }
LAB_00d98670:
                    /* WARNING: Subroutine does not return */
  abort();
}


