/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01195170; name: FUN_01195170
 */


void FUN_01195170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_01195040(param_1,1,1,0,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}


