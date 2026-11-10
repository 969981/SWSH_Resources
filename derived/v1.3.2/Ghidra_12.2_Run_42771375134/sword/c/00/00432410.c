/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00432410; name: FUN_00432410
 */


void FUN_00432410(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_28;
  long local_20;
  undefined4 local_18;
  
  local_58 = 1;
  local_30 = 0;
  if (param_2 != 0) {
    local_30 = 2;
  }
  local_50 = 0;
  local_48 = 0;
  local_18 = 0;
  local_28 = 0xffffffff;
  uStack_54 = param_1;
  local_40 = param_3;
  uStack_38 = param_4;
  local_20 = param_2;
  (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x20))(*(long **)PTR_DAT_02712ae0,&local_58);
  return;
}


