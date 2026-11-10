/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482f80; name: FUN_00482f80
 */


undefined8 FUN_00482f80(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x38);
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      FUN_004a5530(param_1 + 0x30,param_2,0,param_3,param_4);
      pbVar1 = *(byte **)(param_1 + 0x38);
      if (pbVar1 == (byte *)0x0) {
        return 1;
      }
    }
    if ((char)*pbVar1 < '\0') {
      FUN_004a5530(param_1 + 0x30,param_2,7,param_3,param_4);
    }
  }
  return 1;
}


