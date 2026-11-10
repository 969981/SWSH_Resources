/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951970; name: FUN_00951970
 */


void FUN_00951970(undefined4 param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  if (param_3[1] != '\0') {
    bVar1 = FUN_00951b40(param_1,param_3);
    *param_2 = bVar1 & 1;
    return;
  }
  if (param_3[4] == '\0') {
    FUN_00951a80();
    return;
  }
  FUN_009519f0(param_1,*param_3,param_3[0x2c],param_3 + 8);
  *param_2 = 1;
  return;
}


