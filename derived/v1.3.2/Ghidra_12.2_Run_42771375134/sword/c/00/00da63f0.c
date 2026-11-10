/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da63f0; name: FUN_00da63f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00da63f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_98 = 0xcbf29ce484222645;
  puStack_90 = &DAT_01d38550;
  local_74 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a0[0] = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = _UNK_01d49dc8;
  uStack_50 = _DAT_01d49dc0;
  local_78 = 0;
  uStack_38 = 0;
  local_40 = 0;
  FUN_0074be70(*param_2,local_a0);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 1;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 2;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 3;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 4;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 5;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 6;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 7;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 8;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 9;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 10;
  local_78 = 0;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_78 = 1;
  FUN_0074be70(*param_2,local_a0,param_3);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_0074c1f0(*param_2,local_a0,param_3);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return;
}


