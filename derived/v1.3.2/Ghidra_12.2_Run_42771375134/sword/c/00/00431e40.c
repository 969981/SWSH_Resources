/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431e40; name: FUN_00431e40
 */


undefined8
FUN_00431e40(ulong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_58;
  ulong local_50;
  uint local_48;
  
  if ((param_1 & 0xf) == 0) {
    uVar2 = 0x1f;
    if ((param_1 != 0) && (0x1b < param_2)) {
      uStack_84 = FUN_00447140(param_1,param_2);
      puVar1 = PTR_DAT_02712ae0;
      *param_5 = uStack_84;
      local_88 = 0;
      local_60 = 2;
      local_80 = 0;
      local_78 = 0;
      local_58 = 0xffffffff;
      local_70 = param_3;
      uStack_68 = param_4;
      local_50 = param_1;
      local_48 = param_2;
      uVar2 = (**(code **)(**(long **)puVar1 + 0x20))(*(long **)puVar1,&local_88);
    }
  }
  else {
    uVar2 = 0x59;
  }
  return uVar2;
}


