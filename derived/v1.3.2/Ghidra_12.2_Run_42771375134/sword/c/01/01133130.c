/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01133130; name: FUN_01133130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01133130(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 auStack_120 [96];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [13];
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    local_c0 = (undefined1 *)0x0;
  }
  else {
    FUN_01133e40(&local_c0);
  }
  uVar2 = FUN_01128b40(local_c0,1);
  if (local_c0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = (undefined1 *)0x0;
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x88) == 0) {
      local_c0 = (undefined1 *)0x0;
    }
    else {
      FUN_01133e40(&local_c0);
    }
    uVar2 = FUN_01128b40(local_c0,2);
    if (local_c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    }
    if ((uVar2 & 1) == 0) {
      return;
    }
    local_38 = 0x6b23fa5e5a9a208b;
    local_c0 = &LAB_011346b0;
    local_b8 = FUN_01134740;
    local_b0 = &LAB_01134750;
    local_a8 = &LAB_01134760;
    local_140 = &LAB_01134770;
    local_138 = FUN_01134780;
    local_130 = &LAB_01134790;
    local_128 = &LAB_011347a0;
    alStack_a0[0] = param_1;
    FUN_01134f50(param_1 + 0xa0,0,&local_38,&local_c0,&local_140);
    pcVar1 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar1)(auStack_120);
    }
    pcVar1 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar1)(alStack_a0);
    }
    uVar3 = 2;
  }
  else {
    if (*(long *)(param_1 + 0x80) == 0) {
      local_c0 = (undefined1 *)0x0;
      _DAT_00000064 = 1;
    }
    else {
      FUN_01128420(&local_c0);
      *(undefined4 *)(local_c0 + 100) = 1;
      if (local_c0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        local_c0 = (undefined1 *)0x0;
      }
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x340),1);
    FUN_01037030(*(undefined8 *)(param_1 + 0x348));
    uVar3 = 0x11;
  }
  *(undefined2 *)(param_1 + 0x385) = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  return;
}


