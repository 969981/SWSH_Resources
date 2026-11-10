/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a47e20; name: FUN_00a47e20
 */


void FUN_00a47e20(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_48;
  long *plStack_40;
  long local_38;
  
  plVar4 = (long *)*param_2;
  uVar2 = (**(code **)(*plVar4 + 0x890))(plVar4);
  *(undefined1 *)(param_1 + 0x5d4) = 0;
  FUN_00ffd450((float)(uVar2 & 1),param_1 + 0x100,"anime_switch");
  local_48 = param_1;
  plStack_40 = plVar4;
  local_38 = param_1 + 0x100;
  uVar1 = (**(code **)(*plVar4 + 0x8b8))(plVar4);
  if ((uVar2 & 1) == 0) {
    FUN_00a47f60(&local_48,0,uVar1,0);
    uVar1 = (**(code **)(*plVar4 + 0x8c8))(plVar4,0);
    uVar3 = 1;
  }
  else {
    FUN_00a47f60(&local_48,2,uVar1,0);
    uVar1 = (**(code **)(*plVar4 + 0x8c0))(plVar4);
    FUN_00a47f60(&local_48,3,uVar1,0);
    uVar1 = (**(code **)(*plVar4 + 0x8c8))(plVar4,0);
    FUN_00a47f60(&local_48,4,uVar1,1);
    uVar1 = (**(code **)(*plVar4 + 0x8c8))(plVar4,1);
    uVar3 = 5;
  }
  FUN_00a47f60(&local_48,uVar3,uVar1,1);
  FUN_010364c0(param_1,2);
  return;
}


