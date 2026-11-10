/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01131a60; name: FUN_01131a60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01131a60(long param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  long alStack_1b0 [12];
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [13];
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    puVar6 = (undefined1 *)0x0;
LAB_01131aac:
    local_d0 = (undefined1 *)0x0;
  }
  else {
    FUN_011303e0(&local_d0);
    puVar6 = local_d0;
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x50) + 0x18))();
      goto LAB_01131aac;
    }
  }
  if (*(int *)(puVar6 + 0x428) == 0) {
    if (*(char *)(param_1 + 0x378) == '\0') {
      if (*(long *)(param_1 + 0x90) == 0) {
        local_d0 = (undefined1 *)0x0;
        iVar4 = FUN_011ba090();
      }
      else {
        FUN_011303e0(&local_d0);
        iVar4 = FUN_011ba090(local_d0);
      }
      if (local_d0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_d0 + 0x50) + 0x18))();
        local_d0 = (undefined1 *)0x0;
      }
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x37c) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x37c) = 0;
      }
      *(undefined1 *)(param_1 + 0x378) = 1;
      FUN_01131fd0(param_1);
      cVar1 = puVar6[0x490];
      goto joined_r0x01131e78;
    }
  }
  else if (*(char *)(param_1 + 0x378) == '\0') {
    iVar4 = *(int *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (iVar4 == 3) {
      local_48 = 0x6b20fb5e5a97ec67;
      local_d0 = &LAB_011344a0;
      local_c8 = FUN_011344c0;
      local_c0 = &LAB_011344d0;
      local_b8 = &LAB_011344e0;
      local_150 = &LAB_011344f0;
      local_148 = FUN_01134530;
      local_140 = &LAB_01134540;
      local_138 = &LAB_01134550;
      local_1d0 = &LAB_01134560;
      local_1c8 = FUN_01134570;
      local_1c0 = &LAB_01134580;
      local_1b8 = &LAB_01134590;
      alStack_1b0[0] = param_1;
      alStack_130[0] = param_1;
      alStack_b0[0] = param_1;
      FUN_01135190(param_1 + 0xa0,0,&local_48,&local_d0,&local_150,&local_1d0);
      pcVar2 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = (undefined1 *)0x0;
        local_1b8 = (undefined1 *)0x0;
        local_1d0 = (undefined1 *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar2)(alStack_1b0);
      }
      pcVar2 = local_148;
      if (local_148 != (code *)0x0) {
        local_140 = (undefined1 *)0x0;
        local_138 = (undefined1 *)0x0;
        local_150 = (undefined1 *)0x0;
        local_148 = (code *)0x0;
        (*pcVar2)(alStack_130);
      }
      pcVar2 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar2)(alStack_b0);
      }
      *(undefined2 *)(param_1 + 0x385) = 0x101;
      uVar3 = 2;
    }
    else {
      if (iVar4 != 2) {
        if (iVar4 == 1) {
          FUN_0113f630(*(undefined8 *)(param_1 + 0x340),3);
          *(undefined4 *)(param_1 + 0x374) = 0;
          *(undefined1 *)(param_1 + 0x370) = 1;
          FUN_01131fd0(param_1);
          cVar1 = puVar6[0x490];
          goto joined_r0x01131e78;
        }
        goto LAB_01131b10;
      }
      if (*(long *)(param_1 + 0x80) == 0) {
        local_d0 = (undefined1 *)0x0;
        _DAT_00000064 = 4;
      }
      else {
        FUN_01128420(&local_d0);
        *(undefined4 *)(local_d0 + 100) = 4;
        if (local_d0 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
          local_d0 = (undefined1 *)0x0;
        }
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x340),1);
      FUN_01037030(*(undefined8 *)(param_1 + 0x348));
      *(undefined2 *)(param_1 + 0x385) = 0;
      uVar3 = 0x11;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    FUN_01131fd0(param_1);
    cVar1 = puVar6[0x490];
    goto joined_r0x01131e78;
  }
LAB_01131b10:
  FUN_01131fd0(param_1);
  cVar1 = puVar6[0x490];
joined_r0x01131e78:
  if (cVar1 == '\0') {
    lVar5 = *(long *)(param_1 + 0x88);
  }
  else {
    local_1d0 = (undefined1 *)0x65a873e5d75aba64;
    local_d0 = &LAB_011345a0;
    local_c8 = FUN_011345b0;
    local_c0 = &LAB_011345c0;
    local_b8 = &LAB_011345d0;
    local_150 = &LAB_011345e0;
    local_148 = FUN_011345f0;
    local_140 = &LAB_01134600;
    local_138 = &LAB_01134610;
    FUN_011354c0(param_1 + 0xa0,0,&local_1d0,&local_d0,&local_150);
    pcVar2 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      local_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar2)(alStack_130);
    }
    pcVar2 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar2)(alStack_b0);
    }
    FUN_012ae5a0(param_1 + 0x360,0x5dc);
    if (*(long *)(param_1 + 0x88) == 0) {
      local_d0 = (undefined1 *)0x0;
      DAT_00000099 = 1;
      lVar5 = *(long *)PTR_DAT_027185f8;
    }
    else {
      FUN_01133e40(&local_d0);
      local_d0[0x99] = 1;
      if (local_d0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        local_d0 = (undefined1 *)0x0;
      }
      lVar5 = *(long *)PTR_DAT_027185f8;
    }
    if (lVar5 != 0) {
      uVar3 = FUN_0120e820(lVar5);
      FUN_0120e5b0(lVar5,uVar3);
    }
    *(undefined2 *)(param_1 + 0x385) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 7;
    lVar5 = *(long *)(param_1 + 0x88);
  }
  if (lVar5 == 0) {
    cVar1 = DAT_00000098;
  }
  else {
    FUN_01133e40(&local_d0);
    cVar1 = local_d0[0x98];
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    }
  }
  if (cVar1 != '\0') {
    local_1d0 = (undefined1 *)0x6b24005e5a9a2abd;
    local_d0 = &LAB_01134620;
    local_c8 = FUN_01134640;
    local_c0 = &LAB_01134650;
    local_b8 = &LAB_01134660;
    local_150 = &LAB_01134670;
    local_148 = FUN_01134680;
    local_140 = &LAB_01134690;
    local_138 = &LAB_011346a0;
    alStack_b0[0] = param_1;
    FUN_01134f50(param_1 + 0xa0,0,&local_1d0,&local_d0,&local_150);
    pcVar2 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      local_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar2)(alStack_130);
    }
    pcVar2 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar2)(alStack_b0);
    }
    *(undefined2 *)(param_1 + 0x385) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 2;
  }
  return;
}


