/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01138b90; name: FUN_01138b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01138b90(long param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  long local_1a0 [12];
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    puVar8 = (undefined1 *)0x0;
LAB_01138bdc:
    local_c0 = (undefined1 *)0x0;
  }
  else {
    FUN_011303e0(&local_c0);
    puVar8 = local_c0;
    if (local_c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_c0 + 0x50) + 0x18))();
      goto LAB_01138bdc;
    }
  }
  if (*(int *)(puVar8 + 0x428) == 0) {
    if (*(char *)(param_1 + 0x398) == '\0') {
      if (*(long *)(param_1 + 0xa8) == 0) {
        local_c0 = (undefined1 *)0x0;
        iVar3 = FUN_011ba090();
      }
      else {
        FUN_011303e0(&local_c0);
        iVar3 = FUN_011ba090(local_c0);
      }
      if (local_c0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_c0 + 0x50) + 0x18))();
        local_c0 = (undefined1 *)0x0;
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x39c) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x39c) = 0;
      }
      *(undefined1 *)(param_1 + 0x398) = 1;
    }
    goto switchD_01138c14_default;
  }
  if (*(char *)(param_1 + 0x398) != '\0') goto switchD_01138c14_default;
  uVar7 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  switch(uVar7) {
  case 1:
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined1 *)(param_1 + 0x390) = 1;
    FUN_0113f630(*(undefined8 *)(param_1 + 0x360),3);
    goto switchD_01138c14_default;
  case 2:
    if (*(long *)(param_1 + 0xa8) == 0) {
      local_c0 = (undefined1 *)0x0;
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_01138e3c;
LAB_01138cc0:
      puVar8 = local_c0;
      FUN_01133e40(&local_140);
    }
    else {
      FUN_011303e0(&local_c0);
      if (*(long *)(param_1 + 0x90) != 0) goto LAB_01138cc0;
LAB_01138e3c:
      local_140 = (undefined1 *)0x0;
      puVar8 = local_c0;
    }
    uVar5 = FUN_01128b50(local_140);
    uVar6 = FUN_011ba000(puVar8,uVar5);
    if (local_140 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
      local_140 = (undefined1 *)0x0;
    }
    if (local_c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_c0 + 0x50) + 0x18))();
      local_c0 = (undefined1 *)0x0;
    }
    if ((uVar6 & 1) == 0) goto switchD_01138c14_default;
    if (*(long *)(param_1 + 0x90) == 0) {
      local_c0 = (undefined1 *)0x0;
      uVar4 = FUN_01128b60();
    }
    else {
      FUN_01133e40(&local_c0);
      uVar4 = FUN_01128b60(local_c0);
    }
    if (local_c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = (undefined1 *)0x0;
    }
    if (uVar4 < 4) {
      cVar1 = DAT_00000231;
      if (*(long *)(param_1 + 0x88) != 0) {
        FUN_0112c100(&local_c0);
        cVar1 = local_c0[0x231];
        if (local_c0 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        }
      }
      if (cVar1 == '\0') {
        if (*(long *)(param_1 + 0x88) == 0) {
          DAT_00000231 = '\x01';
        }
        else {
          FUN_0112c100(&local_c0);
          local_c0[0x231] = 1;
          if (local_c0 != (undefined1 *)0x0) {
            (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
          }
        }
        local_38 = 0x6b20f75e5a97e59b;
        local_c0 = &LAB_0113a630;
        local_b8 = (code *)&LAB_0113a6c0;
        local_b0 = &LAB_0113a6d0;
        local_a8 = &LAB_0113a6e0;
        local_140 = &LAB_0113a6f0;
        local_138 = (code *)&LAB_0113a730;
        local_130 = &LAB_0113a740;
        local_128 = &LAB_0113a750;
        local_1c0 = &LAB_0113a760;
        local_1b8 = (code *)&LAB_0113a770;
        local_1b0 = &LAB_0113a780;
        local_1a8 = &LAB_0113a790;
        goto LAB_01138db4;
      }
      *(undefined2 *)(param_1 + 0x3a7) = 0;
      uVar7 = 0x13;
      if (1 < uVar4) {
        uVar7 = 7;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x3a7) = 0;
      uVar7 = 7;
    }
    break;
  case 3:
    if (*(long *)(param_1 + 0x80) == 0) {
      local_c0 = (undefined1 *)0x0;
      _DAT_00000064 = 4;
    }
    else {
      FUN_01128420(&local_c0);
      *(undefined4 *)(local_c0 + 100) = 4;
      if (local_c0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        local_c0 = (undefined1 *)0x0;
      }
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x360),1);
    FUN_01037030(*(undefined8 *)(param_1 + 0x368));
    *(undefined2 *)(param_1 + 0x3a7) = 0;
    uVar7 = 0x17;
    break;
  case 4:
    local_38 = 0x6b20f95e5a97e901;
    local_c0 = &LAB_0113a7a0;
    local_b8 = FUN_0113a7c0;
    local_b0 = &LAB_0113a7d0;
    local_a8 = &LAB_0113a7e0;
    local_140 = &LAB_0113a7f0;
    local_138 = FUN_0113a830;
    local_130 = &LAB_0113a840;
    local_128 = &LAB_0113a850;
    local_1c0 = &LAB_0113a860;
    local_1b8 = FUN_0113a870;
    local_1b0 = &LAB_0113a880;
    local_1a8 = &LAB_0113a890;
LAB_01138db4:
    local_1a0[0] = param_1;
    alStack_120[0] = param_1;
    alStack_a0[0] = param_1;
    FUN_01135190(param_1 + 0xc0,0,&local_38,&local_c0,&local_140,&local_1c0);
    pcVar2 = local_1b8;
    if (local_1b8 != (code *)0x0) {
      local_1b0 = (undefined1 *)0x0;
      local_1a8 = (undefined1 *)0x0;
      local_1c0 = (undefined1 *)0x0;
      local_1b8 = (code *)0x0;
      (*pcVar2)(local_1a0);
    }
    pcVar2 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar2)(alStack_120);
    }
    pcVar2 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar2)(alStack_a0);
    }
    *(undefined2 *)(param_1 + 0x3a7) = 0x101;
    uVar7 = 2;
    break;
  default:
    goto switchD_01138c14_default;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
switchD_01138c14_default:
  FUN_01139090(param_1);
  return;
}


