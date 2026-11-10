/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ddd10; name: FUN_004ddd10
 */


undefined4 FUN_004ddd10(long *param_1,uint *param_2)

{
  long local_58 [2];
  undefined2 local_48;
  uint local_46;
  undefined8 local_40;
  undefined4 local_28;
  
  local_46 = 0;
  local_58[0] = 0;
  local_58[1] = 0x2b00000000;
  local_40 = 0;
  local_48 = (undefined2)*param_2;
  (**(code **)(*param_1 + 0x60))(param_1,local_58);
  if (local_58[0] == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = local_46 & 0xffff;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return local_28;
}


