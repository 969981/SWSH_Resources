/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121a7d0; name: FUN_0121a7d0
 */


void FUN_0121a7d0(char *param_1,long *param_2)

{
  long local_48 [2];
  undefined1 local_38;
  long local_30;
  long lStack_28;
  
  if (param_2 != (long *)0x0) {
    if (((param_1[0x24] != '\0') && (*param_2 != 0)) && (0x6cf < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0xd1;
      local_48[1] = 9;
      lStack_28 = param_2[5] + 0x59;
      local_38 = 0;
      FUN_0121b460(param_1 + 0x28,local_48);
    }
    if (((*param_1 != '\0') && (*param_2 != 0)) && (1999 < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0xda;
      local_48[1] = 0x20;
      lStack_28 = param_2[5] + 0x5d;
      local_38 = 0;
      FUN_011f5490(param_1 + 2,local_48);
    }
  }
  return;
}


