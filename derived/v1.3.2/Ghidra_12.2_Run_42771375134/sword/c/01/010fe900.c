/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fe900; name: FUN_010fe900
 */


void FUN_010fe900(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long local_150;
  long lStack_148;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_68;
  long lStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  
  local_68 = *(undefined8 *)(param_1 + 8);
  lStack_60 = param_1 + 0x78;
  local_58 = "gpoke";
  uStack_50 = 0;
  local_48 = 0x101;
  lVar3 = *(long *)(param_1 + 0x58);
  local_d0 = param_1;
  lStack_c8 = lVar3;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (lVar3 != 0) {
      local_d8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      local_f0 = (undefined1 *)0x0;
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
  }
  local_f0 = &LAB_010ff9f0;
  local_e8 = FUN_010ffb70;
  local_e0 = &LAB_010ffbb0;
  local_d8 = &LAB_010ffbe0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_150 = param_1;
  lStack_148 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_170 = &LAB_010ffc10;
  local_168 = FUN_010ffc40;
  local_160 = &LAB_010ffc80;
  puStack_158 = &LAB_010ffcb0;
  uVar2 = FUN_01273c90(&local_68,&local_f0,&local_170);
  pcVar1 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar1)(&local_150);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar1)(&local_d0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x88) == 0) {
      local_f0 = (undefined1 *)0x0;
      FUN_010f0db0(0,0);
    }
    else {
      FUN_010eb5e0(&local_f0);
      FUN_010f0db0(local_f0,0);
    }
    if (local_f0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = (undefined1 *)0x0;
    }
    *(undefined4 *)(param_1 + 0x80) = 8;
  }
  else {
    local_f0 = &LAB_010ffce0;
    local_e8 = FUN_010ffd00;
    local_e0 = &LAB_010ffd10;
    local_d8 = &LAB_010ffd20;
    local_d0 = param_1;
    FUN_010f5e90(param_1 + 0xa0,0x13,&local_f0);
    pcVar1 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar1)(&local_d0);
    }
    *(undefined4 *)(param_1 + 0x80) = 7;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


