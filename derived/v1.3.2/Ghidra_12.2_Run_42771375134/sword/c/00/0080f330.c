/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080f330; name: FUN_0080f330
 */


void FUN_0080f330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_50 = auStack_a0;
  local_58 = &local_60;
  local_48 = 0xffffff80ffffffc8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_98 = param_3;
  local_90 = param_4;
  uStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_7;
  local_70 = param_8;
  uStack_68 = param_9;
  local_60 = (undefined1 *)register0x00000008;
  FUN_0080f210(param_1,param_2,&local_60);
  return;
}


