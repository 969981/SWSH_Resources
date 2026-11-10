/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007df980; name: FUN_007df980
 */


undefined4 FUN_007df980(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  local_20[0] = 0;
  if (param_1[0x12] != 0) {
    if (*(int *)(param_1 + 1) == 0x23) {
      local_18 = 0;
      iVar1 = FUN_01965f20(*param_1,0x200032,&local_18);
    }
    else {
      if (*(int *)(param_1 + 1) != 0x33) {
        return 0;
      }
      local_18 = 0;
      iVar1 = FUN_01965f20(*param_1,0x20000d,&local_18);
    }
    if (iVar1 == 0) {
      nn::ssl::GetSslResultFromValue((Result *)local_20,(char *)&local_18,8);
      return local_20[0];
    }
  }
  return local_20[0];
}


