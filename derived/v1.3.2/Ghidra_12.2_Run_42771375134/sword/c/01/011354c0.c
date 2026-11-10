/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011354c0; name: FUN_011354c0
 */


void FUN_011354c0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (*(char *)(param_1 + 0x290) == '\0') {
    *(undefined8 *)(param_1 + 0x38) = 0xffffffff00000002;
    FUN_01134da0(param_1,0,0,1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}


