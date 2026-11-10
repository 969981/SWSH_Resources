/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a61a0; name: FUN_012a61a0
 */


void FUN_012a61a0(long param_1,long *param_2)

{
  long local_48 [2];
  undefined2 local_38;
  undefined1 local_36;
  long local_30;
  long lStack_28;
  
  if (param_2 != (long *)0x0) {
    if (((*(char *)(param_1 + 0x70) != '\0') && (*param_2 != 0)) &&
       (0x41f < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0x5f;
      local_48[1] = 0x25;
      lStack_28 = param_2[5] + 0x1e;
      local_38 = 0;
      FUN_0121bcc0(param_1 + 0x74,local_48);
    }
    if (((*(char *)(param_1 + 0x34) != '\0') && (*param_2 != 0)) &&
       (0x4ff < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0x84;
      local_48[1] = 0x1c;
      lStack_28 = param_2[5] + 0x2d;
      local_36 = 0;
      local_38 = 0;
      FUN_0121c760(param_1 + 0x38,local_48);
    }
  }
  FUN_012a62b0(param_1,param_2);
  return;
}


