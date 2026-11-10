/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01196b30; name: FUN_01196b30
 */


uint FUN_01196b30(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long local_120;
  long lStack_118;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  long lStack_98;
  
  lVar3 = *(long *)(param_1 + 0x58);
  local_a0 = param_1;
  lStack_98 = lVar3;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (lVar3 != 0) {
      puStack_a8 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      local_c0 = (undefined1 *)0x0;
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
  }
  local_c0 = &LAB_01197770;
  local_b8 = FUN_011977b0;
  local_b0 = &LAB_011977f0;
  puStack_a8 = &LAB_01197820;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_130 = (undefined1 *)0x0;
  puStack_128 = (undefined1 *)0x0;
  local_140 = (undefined1 *)0x0;
  local_138 = (code *)0x0;
  local_120 = param_1;
  lStack_118 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_140 = &LAB_01197850;
  local_138 = FUN_01197880;
  local_130 = &LAB_011978c0;
  puStack_128 = &LAB_011978f0;
  uVar2 = FUN_01258bf0(&local_c0,&local_140);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(&local_120);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return uVar2 & 1;
}


