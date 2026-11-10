/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014edf30; name: FUN_014edf30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_014edf30(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined *local_1200;
  code *local_11f8;
  undefined1 *local_11f0;
  undefined1 *local_11e8;
  long alStack_11e0 [270];
  undefined1 *local_970;
  code *local_968;
  undefined1 *local_960;
  undefined1 *local_958;
  undefined1 auStack_950 [2160];
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 auStack_c0 [104];
  undefined8 local_58;
  
  lVar1 = param_1 + 0xb0;
  FUN_014e21a0(lVar1);
  if (*(char *)(*(long *)(param_1 + 0xa8) + 0x5f8) != '\0') {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  uVar5 = 1;
  alStack_11e0[0] = param_1;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    if (*(long *)(param_1 + 0x98) == 0) {
      local_1200 = (undefined *)0x0;
      uVar6 = FUN_014dee10();
    }
    else {
      FUN_014dde40(&local_1200);
      uVar6 = FUN_014dee10(local_1200);
    }
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_01036fd0(*(undefined8 *)(param_1 + 0x2d0));
      if (local_1200 != (undefined *)0x0) {
        (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))();
        local_1200 = (undefined *)0x0;
      }
      if ((uVar6 & 1) == 0) break;
      FUN_014ddc70(&local_1200,*(undefined8 *)(param_1 + 0x88));
      if (local_1200[0x88] == '\0') {
        if (local_1200 != (undefined *)0x0) {
          bVar2 = false;
          goto LAB_014ee5b4;
        }
        uVar5 = *(undefined8 *)(param_1 + 0xa8);
      }
      else {
        bVar2 = true;
LAB_014ee5b4:
        (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))();
        uVar5 = *(undefined8 *)(param_1 + 0xa8);
        if (bVar2) {
          FUN_014f1520(uVar5,0x1000000000000);
          uVar8 = 2;
          goto LAB_014ee5e8;
        }
      }
      FUN_014f1520(uVar5,0x2000000000000);
      uVar8 = 1;
      goto LAB_014ee5e8;
    }
LAB_014ee25c:
    if (local_1200 != (undefined *)0x0) {
      (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))();
    }
    break;
  case 1:
    FUN_014ee620(param_1);
    break;
  case 2:
    if (*(char *)(*(long *)(param_1 + 0xa8) + 0x5f8) != '\0') {
      FUN_014ddc70(&local_1200,*(undefined8 *)(param_1 + 0x88));
      if (local_1200[0x88] != '\0') {
        (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))();
        local_e0 = (undefined1 *)0x5bc318fa6f751356;
        local_1200 = &LAB_014eead0;
        local_11f8 = FUN_014eeb60;
        local_11f0 = &LAB_014eeb70;
        local_11e8 = &LAB_014eeb80;
        local_970 = &LAB_014eeb90;
        local_968 = FUN_014eeba0;
        local_960 = &LAB_014eebb0;
        local_958 = &LAB_014eebc0;
        FUN_014e2700(lVar1,0,&local_e0,&local_1200,&local_970);
        pcVar3 = local_968;
        goto joined_r0x014ee070;
      }
      if (local_1200 != (undefined *)0x0) {
        (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))();
      }
    }
    break;
  case 3:
    lVar7 = *(long *)(param_1 + 0x2d8);
    if (lVar7 == 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        local_1200 = (undefined *)0x0;
        uVar11 = _DAT_00000080;
        uVar8 = _DAT_00000084;
LAB_014ee2d0:
        if (*(long *)(param_1 + 0x88) == 0) goto LAB_014ee1e0;
LAB_014ee2d8:
        FUN_014ddc70(&local_970);
        local_1200 = (undefined *)((ulong)local_1200 & 0xffffffffffffff00);
        if (local_970[0x88] != '\0') goto LAB_014ee2f0;
LAB_014ee1f4:
        puVar10 = local_970;
        if (local_970 != (undefined1 *)0x0) goto LAB_014ee30c;
      }
      else {
        FUN_014ddc70(&local_1200);
        uVar11 = *(uint *)(local_1200 + 0x80);
        uVar8 = *(undefined4 *)(local_1200 + 0x84);
        if (local_1200 == (undefined *)0x0) goto LAB_014ee2d0;
        (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))();
        local_1200 = (undefined *)0x0;
        if (*(long *)(param_1 + 0x88) != 0) goto LAB_014ee2d8;
LAB_014ee1e0:
        local_970 = (undefined1 *)0x0;
        local_1200 = (undefined *)((ulong)local_1200 & 0xffffffffffffff00);
        if (DAT_00000088 == '\0') goto LAB_014ee1f4;
LAB_014ee2f0:
        puVar10 = local_970;
        memcpy(&local_11f8,local_970 + 0x90,0x880);
        local_1200 = (undefined *)CONCAT71(local_1200._1_7_,1);
LAB_014ee30c:
        (**(code **)(*(long *)(puVar10 + 0x48) + 0x18))(puVar10 + 0x48);
        if (((uVar11 & 0xff) != 0) && ((char)local_1200 != '\0')) {
          FUN_015306e0(uVar8,&local_11f8);
        }
      }
      plVar9 = *(long **)(param_1 + 8);
      uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0xc,4);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      FUN_01562e10(uVar5,1);
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      lVar7 = *(long *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x2d8) = uVar5;
      if (lVar7 != 0) {
        FUN_01562e20(lVar7);
        (**(code **)(**(long **)(param_1 + 0x2e0) + 0x18))
                  (*(long **)(param_1 + 0x2e0),lVar7,*(undefined8 *)(param_1 + 0x2e8),
                   *(undefined8 *)(param_1 + 0x2f0));
      }
      *(long **)(param_1 + 0x2e0) = plVar9;
      *(undefined8 *)(param_1 + 0x2e8) = 0xc;
      *(undefined8 *)(param_1 + 0x2f0) = 4;
      local_58 = 0x5bbf9cfa6f720acb;
      local_970 = &LAB_014eebd0;
      local_968 = FUN_014eebe0;
      local_960 = &LAB_014eebf0;
      local_958 = &LAB_014eec00;
      local_e0 = &LAB_014eec10;
      local_d8 = FUN_014eec20;
      local_d0 = &LAB_014eec30;
      local_c8 = &LAB_014eec40;
      FUN_014e2ad0(lVar1,0,&local_58,&local_970,&local_e0);
      pcVar3 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        local_c8 = (undefined1 *)0x0;
        local_e0 = (undefined1 *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar3)(auStack_c0);
      }
      pcVar3 = local_968;
      if (local_968 != (code *)0x0) {
        local_958 = (undefined1 *)0x0;
        local_960 = (undefined1 *)0x0;
        local_968 = (code *)0x0;
        local_970 = (undefined1 *)0x0;
        (*pcVar3)(auStack_950);
      }
      FUN_012ae5a0(param_1 + 0x2f8,3000);
      if ((char)local_1200 != '\0') {
        local_1200 = (undefined *)((ulong)local_1200 & 0xffffffffffffff00);
      }
      lVar7 = *(long *)(param_1 + 0x2d8);
    }
    FUN_01562e70(lVar7);
    uVar6 = FUN_01562f10(*(undefined8 *)(param_1 + 0x2d8));
    if ((uVar6 & 1) != 0) {
      FUN_014ddc70(&local_1200,*(undefined8 *)(param_1 + 0x88));
      puVar4 = local_1200;
      if (local_1200[0x88] == '\0') {
        if (local_1200 != (undefined *)0x0) {
          (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))(local_1200 + 0x48);
        }
      }
      else {
        memcpy((void *)((ulong)&local_970 | 7),local_1200 + 0x90,0x880);
        (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))(puVar4 + 0x48);
        FUN_010348f0(&local_1200,*(undefined8 *)(param_1 + 8));
        memcpy(&local_11f0,(void *)((ulong)&local_970 | 7),0x880);
        local_1200 = PTR_DAT_0272a668 + 0x10;
        FUN_01034150(&local_e0,&local_1200);
        FUN_01034430(&local_e0);
        FUN_01031e00(&local_e0);
      }
      uVar8 = 4;
      goto LAB_014ee5e8;
    }
    break;
  case 4:
    uVar6 = FUN_012ae5d0(param_1 + 0x2f8);
    if ((uVar6 & 1) != 0) {
      FUN_014e2b10(lVar1);
      uVar8 = 5;
      goto LAB_014ee5e8;
    }
    break;
  case 5:
    local_e0 = (undefined1 *)0x5bbf9bfa6f720918;
    local_1200 = &LAB_014eec50;
    local_11f8 = FUN_014eecc0;
    local_11f0 = &LAB_014eecd0;
    local_11e8 = &LAB_014eece0;
    local_970 = &LAB_014eecf0;
    local_968 = FUN_014eed00;
    local_960 = &LAB_014eed10;
    local_958 = &LAB_014eed20;
    FUN_014e2510(lVar1,0,&local_e0,&local_1200,&local_970);
    pcVar3 = local_968;
joined_r0x014ee070:
    local_968 = pcVar3;
    if (pcVar3 != (code *)0x0) {
      local_958 = (undefined1 *)0x0;
      local_960 = (undefined1 *)0x0;
      local_968 = (code *)0x0;
      local_970 = (undefined1 *)0x0;
      (*pcVar3)(auStack_950);
    }
    pcVar3 = local_11f8;
    if (local_11f8 != (code *)0x0) {
      local_11f0 = (undefined1 *)0x0;
      local_11e8 = (undefined1 *)0x0;
      local_1200 = (undefined *)0x0;
      local_11f8 = (code *)0x0;
      (*pcVar3)(alStack_11e0);
    }
    uVar8 = 6;
LAB_014ee5e8:
    *(undefined4 *)(param_1 + 0x80) = uVar8;
    break;
  case 8:
    if (*(long *)(param_1 + 0x98) == 0) {
      local_1200 = (undefined *)0x0;
      uVar6 = FUN_014dee10();
    }
    else {
      FUN_014dde40(&local_1200);
      uVar6 = FUN_014dee10(local_1200);
    }
    if ((uVar6 & 1) != 0) goto LAB_014ee25c;
    uVar6 = FUN_01037070(*(undefined8 *)(param_1 + 0x2d0));
    if (local_1200 != (undefined *)0x0) {
      (**(code **)(*(long *)(local_1200 + 0x48) + 0x18))();
    }
    if ((uVar6 & 1) != 0) {
      uVar8 = 9;
      goto LAB_014ee5e8;
    }
    break;
  case 9:
    goto switchD_014edf98_caseD_9;
  }
  uVar5 = 0;
switchD_014edf98_caseD_9:
  return uVar5;
}


