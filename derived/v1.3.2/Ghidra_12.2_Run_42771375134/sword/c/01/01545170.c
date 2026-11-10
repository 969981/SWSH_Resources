/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01545170; name: FUN_01545170
 */


uint FUN_01545170(byte param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_18;
  byte local_14 [4];
  
  local_14[0] = param_1 & 1;
  local_18 = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_18);
  uVar1 = FUN_01513800(uVar2,&DAT_02172fc0,local_14);
  return uVar1 & 1;
}


