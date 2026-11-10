/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5af0; name: FUN_005c5af0
 */


undefined8 FUN_005c5af0(char *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (((param_4 == 0x10) || (param_4 == 10)) || (param_4 == 8)) {
    sprintf(param_1,"%llo");
    return 1;
  }
  return 0;
}


