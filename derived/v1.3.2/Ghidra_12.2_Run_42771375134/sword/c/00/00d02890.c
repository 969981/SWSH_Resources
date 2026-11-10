/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d02890; name: FUN_00d02890
 */


uint FUN_00d02890(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long *local_120;
  long lStack_118;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long *local_a0;
  long lStack_98;
  long local_38;
  
  (**(code **)(*param_1 + 0x10))(&local_38);
  lVar2 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  lStack_98 = lVar2;
  local_a0 = param_1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = local_38;
  local_c0 = &LAB_00d05050;
  local_b8 = FUN_00d05090;
  local_b0 = &LAB_00d050d0;
  puStack_a8 = &LAB_00d05100;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_130 = (undefined1 *)0x0;
  puStack_128 = (undefined1 *)0x0;
  local_140 = (undefined1 *)0x0;
  local_138 = (code *)0x0;
  lStack_118 = lVar3;
  local_120 = param_1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_140 = &LAB_00d05130;
  local_138 = FUN_00d05160;
  local_130 = &LAB_00d051a0;
  puStack_128 = &LAB_00d051d0;
  uVar4 = FUN_0125b8d0(0,&local_c0,&local_140);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(&local_120);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return uVar4 & 1;
}


