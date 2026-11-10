/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a60a0; name: FUN_012a60a0
 */


void FUN_012a60a0(long param_1,long *param_2)

{
  long local_48 [2];
  uint local_38;
  long local_30;
  long lStack_28;
  
  if (param_2 != (long *)0x0) {
    if (((*(char *)(param_1 + 0x110) != '\0') && (*param_2 != 0)) &&
       (0x16f < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0x28;
      local_48[1] = 6;
      lStack_28 = param_2[5] + 3;
      local_38 = local_38 & 0xffffff00;
      FUN_012188e0(param_1 + 0x114,local_48);
    }
    if (((*(char *)(param_1 + 0xc0) != '\0') && (*param_2 != 0)) &&
       (0x2f7 < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0x2e;
      local_48[1] = 0x31;
      lStack_28 = param_2[5] + 5;
      local_38 = 0;
      FUN_0121d220(param_1 + 0xc4,local_48);
    }
  }
  FUN_012a61a0(param_1,param_2);
  return;
}


