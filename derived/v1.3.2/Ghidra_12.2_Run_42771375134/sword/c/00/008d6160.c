/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d6160; name: FUN_008d6160
 */


undefined4
FUN_008d6160(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
            byte param_5,byte param_6)

{
  undefined8 uVar1;
  undefined4 local_58 [2];
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  byte local_48;
  byte local_47;
  
  FUN_009317d0(param_1[1],*param_1);
  FUN_008da630(param_1[5]);
  FUN_00915300();
  local_50 = param_2;
  local_4f = param_3;
  local_4c = param_4;
  local_48 = param_5 & 1;
  local_47 = param_6 & 1;
  FUN_008da670(param_1[5]);
  uVar1 = FUN_00925e70();
  FUN_009ae5d0(uVar1,local_58,&local_50);
  return local_58[0];
}


