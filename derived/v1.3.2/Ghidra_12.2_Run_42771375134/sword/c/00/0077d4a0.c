/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d4a0; name: FUN_0077d4a0
 */


undefined8 FUN_0077d4a0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_3 == 0) || (*(char *)(param_1 + 0x7c) == '\0')) {
    return 0;
  }
  uVar1 = FUN_0077d7e0(param_2,*(undefined8 *)(param_1 + 0x58));
  return uVar1;
}


