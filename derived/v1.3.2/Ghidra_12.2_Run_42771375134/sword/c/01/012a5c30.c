/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a5c30; name: FUN_012a5c30
 */


void FUN_012a5c30(long param_1,long *param_2)

{
  long local_48 [2];
  undefined1 local_38;
  long local_30;
  long lStack_28;
  
  if (param_2 != (long *)0x0) {
    if (((*(char *)(param_1 + 0x120) != '\0') && (*param_2 != 0)) &&
       (0x13f < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[3];
      lStack_28 = param_2[4];
      local_48[1] = 0x28;
      local_38 = 0;
      local_48[0] = *param_2;
      FUN_0121b010(param_1 + 0x128,local_48);
    }
    if (((*(char *)(param_1 + 0x110) != '\0') && (*param_2 != 0)) &&
       (0x16f < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[3];
      local_48[0] = *param_2 + 0x28;
      local_48[1] = 6;
      lStack_28 = param_2[4] + 3;
      local_38 = 0;
      FUN_012188e0(param_1 + 0x114,local_48);
    }
  }
  FUN_012a5d30(param_1,param_2);
  return;
}


