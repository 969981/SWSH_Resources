/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aeff0; name: FUN_014aeff0
 */


byte FUN_014aeff0(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 local_bc;
  ulong local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  ulong *local_90;
  undefined8 uStack_88;
  undefined4 *local_80;
  
  uVar3 = FUN_014af120(param_2);
  uVar5 = *param_3;
  local_bc = uVar3;
  if (uVar5 == 0) {
    local_90 = &local_b8;
    local_80 = &local_bc;
    local_b0 = &LAB_014b1f90;
    local_a8 = FUN_014b20a0;
    local_a0 = &LAB_014b20b0;
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_98 = &LAB_014b20d0;
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
    bVar2 = (char)local_b8 != '\0';
  }
  else {
    plVar4 = (long *)(uVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014b0a00(&local_b0,param_1);
    local_b8 = uVar5;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    bVar2 = FUN_014b0fc0(&local_b8,&local_b0,uVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return bVar2 & 1;
}


