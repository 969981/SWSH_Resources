/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ba5890; name: FUN_00ba5890
 */


void FUN_00ba5890(long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  long local_48;
  undefined8 local_40;
  undefined2 local_38;
  byte local_36;
  long local_28;
  
  FUN_00bc46a0(*(undefined8 *)(param_1 + 0x78),param_2,0);
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_00bc53e0(&local_28,*(undefined8 *)(param_1 + 0x78));
  local_48 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  local_40 = CONCAT44(local_40._4_4_,param_3);
  local_38 = CONCAT11(local_38._1_1_,param_4) & 0xff01;
  local_36 = FUN_00bc4680(*(undefined8 *)(param_1 + 0x78));
  local_36 = local_36 & 1;
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_48);
  return;
}


