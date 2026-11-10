/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef2bd0; name: FUN_00ef2bd0
 */


void FUN_00ef2bd0(undefined8 param_1,undefined4 param_2,byte param_3,byte param_4)

{
  undefined8 local_140 [2];
  undefined1 auStack_130 [144];
  undefined4 local_a0;
  byte local_9c;
  byte local_9b;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 local_50;
  
  local_140[0] = 0;
  FUN_00db17d0(auStack_130);
  local_50 = 0;
  local_a0 = 0x10100;
  local_58 = 0;
  local_98 = 0xffffffff;
  local_90 = 0xcbf29ce484222645;
  local_70 = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  uStack_60 = 0;
  local_140[0] = CONCAT44(local_140[0]._4_4_,param_2);
  local_80 = 0;
  uStack_78 = 0;
  local_9c = param_3 & 1;
  local_9b = param_4 & 1;
  FUN_00ef2ca0(param_1,local_140);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


