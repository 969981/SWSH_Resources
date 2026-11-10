/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113bff0; name: FUN_0113bff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0113bff0(long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
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
  long alStack_b0 [12];
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  alStack_1b0[0] = param_1;
  alStack_130[0] = param_1;
  alStack_b0[0] = param_1;
  switch(uVar2) {
  case 1:
    if (*(long *)(param_1 + 0x80) == 0) {
      local_d0 = (undefined1 *)0x0;
      FUN_01129df0(&local_50);
    }
    else {
      FUN_01128420(&local_d0);
      FUN_01129df0(&local_50,local_d0);
    }
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    }
    if ((char)local_50 != '\0') {
      local_d0 = &LAB_0113d400;
      local_c8 = FUN_0113d410;
      local_c0 = &LAB_0113d420;
      local_b8 = &LAB_0113d430;
      local_150 = &LAB_0113d440;
      local_148 = FUN_0113d4c0;
      local_140 = &LAB_0113d4d0;
      local_138 = &LAB_0113d4e0;
      local_1d0 = &LAB_0113d4f0;
      local_1c8 = FUN_0113d500;
      local_1c0 = &LAB_0113d510;
      local_1b8 = &LAB_0113d520;
      FUN_01135190(param_1 + 0xc0,0,auStack_48,&local_d0,&local_150,&local_1d0);
      pcVar1 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = (undefined1 *)0x0;
        local_1b8 = (undefined1 *)0x0;
        local_1d0 = (undefined1 *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar1)(alStack_1b0);
      }
      pcVar1 = local_148;
      if (local_148 != (code *)0x0) {
        local_140 = (undefined1 *)0x0;
        local_138 = (undefined1 *)0x0;
        local_150 = (undefined1 *)0x0;
        local_148 = (code *)0x0;
        (*pcVar1)(alStack_130);
      }
      pcVar1 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar1)(alStack_b0);
      }
      *(undefined4 *)(param_1 + 0x7c) = 3;
      return;
    }
    uVar2 = 0xc;
    break;
  case 2:
    uVar2 = 4;
    break;
  case 3:
    if (*(long *)(param_1 + 0x80) == 0) {
      _DAT_00000064 = 4;
      goto LAB_0113c33c;
    }
    FUN_01128420(&local_d0);
    *(undefined4 *)(local_d0 + 100) = 4;
joined_r0x0113c2f0:
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = (undefined1 *)0x0;
    }
    goto LAB_0113c344;
  case 4:
    uVar2 = 10;
    break;
  case 5:
    local_50 = 0x6b20fd5e5a97efcd;
    local_d0 = &LAB_0113d530;
    local_c8 = FUN_0113d620;
    local_c0 = &LAB_0113d630;
    local_b8 = &LAB_0113d640;
    local_150 = &LAB_0113d650;
    local_148 = FUN_0113d6c0;
    local_140 = &LAB_0113d6d0;
    local_138 = &LAB_0113d6e0;
    local_1d0 = &LAB_0113d6f0;
    local_1c8 = FUN_0113d700;
    local_1c0 = &LAB_0113d710;
    local_1b8 = &LAB_0113d720;
    FUN_01135190(param_1 + 0xc0,0,&local_50,&local_d0,&local_150,&local_1d0);
    pcVar1 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = (undefined1 *)0x0;
      local_1b8 = (undefined1 *)0x0;
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (code *)0x0;
      (*pcVar1)(alStack_1b0);
    }
    pcVar1 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      local_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar1)(alStack_130);
    }
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar1)(alStack_b0);
    }
    uVar2 = 3;
    break;
  case 6:
    if (*(long *)(param_1 + 0x80) != 0) {
      FUN_01128420(&local_d0);
      *(undefined4 *)(local_d0 + 100) = 1;
      goto joined_r0x0113c2f0;
    }
    _DAT_00000064 = 1;
LAB_0113c33c:
    local_d0 = (undefined1 *)0x0;
LAB_0113c344:
    FUN_010364c0(*(undefined8 *)(param_1 + 0x360),1);
    FUN_01037030(*(undefined8 *)(param_1 + 0x368));
    uVar2 = 0xe;
    break;
  default:
    goto switchD_0113c030_default;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
switchD_0113c030_default:
  return;
}


