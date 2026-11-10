/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564f90; name: FUN_01564f90
 */


undefined4 FUN_01564f90(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0076cd80(param_1,"g_command_regist_id");
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
  }
  return uVar1;
}


