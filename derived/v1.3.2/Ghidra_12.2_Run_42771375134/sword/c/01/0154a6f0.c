/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154a6f0; name: FUN_0154a6f0
 */


uint FUN_0154a6f0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_1c = 0;
  local_18 = param_1;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_1c);
  local_28 = 0x2955;
  uVar1 = FUN_0154a750(uVar2,&DAT_02172fd8,&local_18,&local_28);
  return uVar1 & 1;
}


