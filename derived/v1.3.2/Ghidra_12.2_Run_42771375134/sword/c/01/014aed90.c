/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aed90; name: FUN_014aed90
 */


byte FUN_014aed90(undefined8 param_1,ulong *param_2)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  ulong *local_90;
  undefined8 uStack_88;
  ulong local_28;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    local_90 = &local_28;
    local_b0 = &LAB_014b1e50;
    local_a8 = FUN_014b1f60;
    local_a0 = &LAB_014b1f70;
    local_28 = local_28 & 0xffffffffffffff00;
    local_98 = &LAB_014b1f80;
    uStack_88 = param_1;
    FUN_014aeea0(&local_b0);
    pcVar1 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      local_98 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar1)(&local_90);
    }
    bVar2 = (char)local_28 != '\0';
  }
  else {
    plVar3 = (long *)(uVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_014b0a00(&local_b0,param_1);
    local_28 = uVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    bVar2 = FUN_014b0fc0(&local_28,&local_b0,0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return bVar2 & 1;
}


