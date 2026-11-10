/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015306e0; name: FUN_015306e0
 */


uint FUN_015306e0(uint param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_18;
  
  local_24 = 0;
  local_18 = param_2;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
  local_30 = 0x880;
  uVar1 = FUN_01530750(uVar2,PTR_DAT_0272a9c8 + (ulong)param_1 * 4,&local_18,&local_30);
  return uVar1 & 1;
}


