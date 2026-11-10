/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cff20; name: FUN_003cff20
 */


void FUN_003cff20(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_20;
  char local_14 [4];
  
  local_20 = param_2;
  puVar1 = (undefined8 *)FUN_003d81a0(param_1 + 0x60,&local_20,local_14);
  if (local_14[0] == '\0') {
    *puVar1 = local_20;
    return;
  }
  return;
}


