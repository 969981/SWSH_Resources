/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a62b0; name: FUN_012a62b0
 */


void FUN_012a62b0(char *param_1,long *param_2)

{
  long local_48 [2];
  undefined1 local_38;
  long local_30;
  long lStack_28;
  
  if (param_2 != (long *)0x0) {
    if (((param_1[0x10] != '\0') && (*param_2 != 0)) && (0x5ff < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0xa0;
      local_48[1] = 0x20;
      lStack_28 = param_2[5] + 0x44;
      local_38 = 0;
      FUN_011f5490(param_1 + 0x12,local_48);
    }
    if (((*param_1 != '\0') && (*param_2 != 0)) && (0x63f < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0xc0;
      local_48[1] = 8;
      lStack_28 = param_2[5] + 0x45;
      local_38 = 0;
      FUN_0121ac80(param_1 + 8,local_48);
    }
  }
  return;
}


