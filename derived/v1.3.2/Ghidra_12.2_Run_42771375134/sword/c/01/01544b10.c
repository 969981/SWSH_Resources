/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01544b10; name: FUN_01544b10
 */


uint FUN_01544b10(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_1c = 0;
  local_18 = param_1;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_1c);
  local_28 = 0x33d0;
  uVar1 = FUN_01544950(uVar2,&DAT_02172fac,&local_18,&local_28);
  return uVar1 & 1;
}


