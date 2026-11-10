/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113c5b0; name: FUN_0113c5b0
 */


void FUN_0113c5b0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
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
  
  if (*(long *)(param_1 + 0x90) == 0) {
    local_c0 = (undefined1 *)0x0;
  }
  else {
    FUN_01133e40(&local_c0);
  }
  uVar2 = FUN_01128b40(local_c0,0);
  if (local_c0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = (undefined1 *)0x0;
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
      local_c0 = (undefined1 *)0x0;
    }
    else {
      FUN_01133e40(&local_c0);
    }
    uVar2 = FUN_01128b40(local_c0,2);
    if (local_c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    }
    if ((uVar2 & 1) != 0) {
      local_38 = 0x6b23fa5e5a9a208b;
      local_c0 = &LAB_0113d850;
      local_b8 = FUN_0113d8d0;
      local_b0 = &LAB_0113d8e0;
      local_a8 = &LAB_0113d8f0;
      local_140 = &LAB_0113d900;
      local_138 = FUN_0113d910;
      local_130 = &LAB_0113d920;
      local_128 = &LAB_0113d930;
      alStack_a0[0] = param_1;
      FUN_01134f50(param_1 + 0xc0,0,&local_38,&local_c0,&local_140);
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
      *(undefined4 *)(param_1 + 0x7c) = 3;
    }
  }
  else {
    FUN_01135500(param_1 + 0xc0);
  }
  return;
}


