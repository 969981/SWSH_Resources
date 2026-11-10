/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fb370; name: FUN_004fb370
 */


int FUN_004fb370(long *param_1)

{
  int iVar1;
  
  if (param_1[3] == 0) {
    return 1;
  }
  if ((char)param_1[0xd] != '\0') {
    return 1;
  }
  iVar1 = FUN_004f8920(param_1[3],param_1[4]);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (param_1[3] != 0) {
    FUN_004f8840();
    param_1[3] = 0;
  }
  return iVar1;
}


