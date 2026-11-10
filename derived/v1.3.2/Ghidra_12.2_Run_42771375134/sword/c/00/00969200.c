/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969200; name: FUN_00969200
 */


int FUN_00969200(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                char param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined1 local_48;
  char local_38 [8];
  
  *param_2 = 0;
  local_50 = param_4;
  if (param_6 == 0) {
    if (param_5 == '\x04') {
      local_48 = 1;
      FUN_00942450(param_1);
      uVar1 = FUN_00925130();
      FUN_0094a2a0(uVar1,local_38,&local_50);
      if (local_38[0] == '\0') {
        return 7;
      }
    }
    param_6 = 0;
  }
  else if (param_5 == '\x04') {
    local_48 = 0;
    FUN_00942450(param_1);
    uVar1 = FUN_00925130();
    FUN_0094a2a0(uVar1,local_38,&local_50);
    if (local_38[0] != '\0') {
      uVar1 = FUN_009423e0(param_1);
      uVar2 = FUN_00928030(uVar1,param_3,param_4);
      if ((uVar2 & 1) == 0) {
        param_6 = 0;
        *param_2 = 1;
      }
    }
  }
  return param_6;
}


