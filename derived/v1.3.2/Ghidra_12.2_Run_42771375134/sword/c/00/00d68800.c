/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d68800; name: FUN_00d68800
 */


undefined1  [16] FUN_00d68800(undefined8 param_1,int param_2)

{
  undefined1 auStack_50 [4];
  float local_4c;
  float local_48;
  float local_44;
  
  FUN_00771ef0(auStack_50);
  if (param_2 == 1) {
    FUN_00771ef0(auStack_50,param_1);
    local_48 = local_44;
  }
  else {
    if (param_2 != 0) {
      local_4c = 0.0;
      goto LAB_00d68864;
    }
    FUN_00771ef0(auStack_50,param_1);
  }
  local_4c = local_4c + local_48;
LAB_00d68864:
  return ZEXT416((uint)local_4c) << 0x20;
}


