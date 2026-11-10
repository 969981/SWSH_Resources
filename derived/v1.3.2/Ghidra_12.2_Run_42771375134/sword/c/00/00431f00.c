/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431f00; name: FUN_00431f00
 */


void FUN_00431f00(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined *puVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  uStack_84 = FUN_00447140();
  puVar1 = PTR_DAT_02712ae0;
  *param_6 = uStack_84;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 3;
  local_70 = param_3;
  uStack_68 = param_4;
  local_58 = param_5;
  local_50 = param_1;
  local_48 = param_2;
  (**(code **)(**(long **)puVar1 + 0x20))(*(long **)puVar1,&local_88);
  return;
}


