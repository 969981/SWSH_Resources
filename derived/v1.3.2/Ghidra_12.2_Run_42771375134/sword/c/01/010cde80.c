/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cde80; name: FUN_010cde80
 */


void FUN_010cde80(long param_1,undefined4 param_2,byte param_3)

{
  long local_50;
  long local_48;
  ulong local_40;
  ushort local_38;
  byte local_36;
  
  FUN_00ffa290(*(undefined8 *)(param_1 + 200),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 200),0);
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_010ccbc0(&local_50,*(undefined8 *)(param_1 + 0xb0),param_2,*(undefined8 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa8));
  local_48 = local_50;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if ((param_3 & 1) != 0) {
    local_38 = local_38 & 0xff00;
    local_40 = local_40 & 0xffffffff00000000;
  }
  local_36 = param_3 & 1;
  FUN_01038170(*(undefined8 *)(param_1 + 200),&local_48);
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}


