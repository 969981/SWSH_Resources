/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120e6c0; name: FUN_0120e6c0
 */


undefined8 FUN_0120e6c0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int local_28 [4];
  undefined8 local_18;
  
  uVar1 = 0;
  if (*(long *)PTR_DAT_02716710 != 0) {
    FUN_01962bf0(local_28,*(long *)PTR_DAT_02716710,&local_18,param_2);
    if (local_28[0] != 0) {
      local_18 = 0;
    }
    uVar1 = local_18;
  }
  return uVar1;
}


