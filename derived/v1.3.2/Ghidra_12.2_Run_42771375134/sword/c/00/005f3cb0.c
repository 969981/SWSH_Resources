/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f3cb0; name: FUN_005f3cb0
 */


uint FUN_005f3cb0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_6c;
  long *local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  local_38 = 0;
  local_70 = 0;
  local_6e = 1;
  local_6c = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_60 = (long *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = FUN_005bc740();
  if (lVar3 == 0) {
    local_60 = (long *)FUN_005bc6f0();
  }
  else {
    local_60 = (long *)FUN_005bc740();
  }
  plVar4 = (long *)FUN_005cbff0();
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))();
  if (plVar4 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar1 = &local_70;
    if (param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined2 *)param_3;
    }
    uVar2 = (**(code **)(*plVar4 + 0x80))(plVar4,param_1,param_2,puVar1);
    if ((local_38 & 1) != 0) goto LAB_005f3d84;
  }
  if ((local_58 != 0) && (local_60 != (long *)0x0)) {
    (**(code **)(*local_60 + 0x48))
              (local_60,local_58,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
LAB_005f3d84:
  return uVar2 & 1;
}


