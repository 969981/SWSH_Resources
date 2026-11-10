/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01225c20; name: FUN_01225c20
 */


void FUN_01225c20(char *param_1,long *param_2)

{
  long local_48 [2];
  undefined1 local_38;
  long local_30;
  long lStack_28;
  
  if (param_2 != (long *)0x0) {
    if (((param_1[8] != '\0') && (*param_2 != 0)) && (0x80f < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0xfa;
      local_48[1] = 8;
      lStack_28 = param_2[5] + 0x5e;
      local_38 = 0;
      FUN_0121ac80(param_1 + 0x10,local_48);
    }
    if (((*param_1 != '\0') && (*param_2 != 0)) && (0x84f < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0x102;
      local_48[1] = 8;
      lStack_28 = param_2[5] + 0x5f;
      local_38 = 0;
      FUN_0121acf0(param_1 + 1,local_48);
    }
  }
  return;
}


