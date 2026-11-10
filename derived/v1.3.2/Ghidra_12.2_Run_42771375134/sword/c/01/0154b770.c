/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154b770; name: FUN_0154b770
 */


uint FUN_0154b770(uint param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined8 local_18;
  
  if ((int)param_1 < 6) {
    local_24 = 0;
    local_18 = param_2;
    uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
    uVar1 = FUN_0154b7f0(uVar2,PTR_DAT_0272ad48 + (ulong)param_1 * 4,&local_18,
                         PTR_DAT_0272ad50 + (ulong)param_1 * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


