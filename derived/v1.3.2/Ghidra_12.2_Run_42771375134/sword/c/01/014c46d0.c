/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c46d0; name: FUN_014c46d0
 */


void FUN_014c46d0(long param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_41;
  undefined4 local_40;
  
  FUN_01991be0(&local_50);
  local_48 = param_3;
  local_50 = FUN_014c4ec0(*(undefined8 *)(param_1 + 0x58));
  local_41 = 1;
  local_44 = param_2;
  local_40 = param_4;
  FUN_01991cb0(param_1 + 0x60,&local_50);
  return;
}


