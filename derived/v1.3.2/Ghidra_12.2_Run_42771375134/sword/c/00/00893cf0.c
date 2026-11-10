/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00893cf0; name: FUN_00893cf0
 */


void FUN_00893cf0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = PTR_DAT_02717598;
  local_40 = 0x23d2494bda324f18;
  local_38 = "Init.bnk";
  local_30 = 8;
  local_28 = 0;
  FUN_00895660(*(undefined8 *)PTR_DAT_02717598,&local_40,0,0,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0xfe549a9035f6458f;
  local_38 = "Common.bnk";
  local_30 = 10;
  local_28 = 0;
  FUN_00895660(*(undefined8 *)puVar1,&local_40,0,0,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0xc4cd89928f58baa4;
  local_38 = "Common_UI.bnk";
  local_30 = 0xd;
  local_28 = 0;
  FUN_00895660(*(undefined8 *)puVar1,&local_40,0,0,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0x8ed605200ae18d86;
  local_38 = "BGM.bnk";
  local_30 = 7;
  local_28 = 0;
  FUN_00895660(*(undefined8 *)puVar1,&local_40,0,0,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00895640(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x128));
  FUN_00895600(*(undefined8 *)puVar1);
  lVar2 = FUN_00893b80(param_1,param_1 + 0x108,0);
  if (lVar2 != -1) {
    FUN_00895720(*(undefined8 *)puVar1,lVar2);
  }
  return;
}


