/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154e7c0; name: FUN_0154e7c0
 */


uint FUN_0154e7c0(uint param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  ulong local_38;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_02710798;
  local_38 = local_38 & 0xffffffff00000000;
  uVar3 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_38);
  FUN_01502d70(uVar3,PTR_DAT_0272ad80 + (ulong)param_1 * 4,param_2);
  local_24 = 0;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,&local_24);
  local_38 = param_2 + 4;
  local_40 = 0x2304;
  uVar2 = FUN_0154e860(uVar3,PTR_DAT_0272ad88 + (ulong)param_1 * 4,&local_38,&local_40);
  return uVar2 & 1;
}


