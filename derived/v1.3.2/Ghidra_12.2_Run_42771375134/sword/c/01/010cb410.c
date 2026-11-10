/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cb410; name: FUN_010cb410
 */


void FUN_010cb410(long param_1,undefined4 param_2)

{
  long local_48;
  ulong local_40;
  ushort local_38;
  undefined1 local_36;
  long local_28;
  
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x80),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_010ccbc0(&local_28,*(undefined8 *)(param_1 + 0x78),param_2,0,0);
  local_48 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  local_36 = 1;
  local_38 = local_38 & 0xff00;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_01038170(*(undefined8 *)(param_1 + 0x80),&local_48);
  return;
}


