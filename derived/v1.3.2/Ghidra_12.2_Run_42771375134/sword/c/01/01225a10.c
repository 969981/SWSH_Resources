/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01225a10; name: FUN_01225a10
 */


void FUN_01225a10(long param_1,long *param_2)

{
  long local_48 [2];
  undefined2 local_38;
  undefined1 local_36;
  long local_30;
  long lStack_28;
  
  if (param_2 != (long *)0x0) {
    if (((*(char *)(param_1 + 0x8c) != '\0') && (*param_2 != 0)) &&
       (0x5a7 < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0x90;
      local_48[1] = 0x25;
      lStack_28 = param_2[5] + 0x33;
      local_38 = 0;
      FUN_0121bcc0(param_1 + 0x90,local_48);
    }
    if (((*(char *)(param_1 + 0x50) != '\0') && (*param_2 != 0)) &&
       (0x687 < (ulong)(param_2[1] << 3))) {
      local_30 = param_2[4];
      local_48[0] = *param_2 + 0xb5;
      local_48[1] = 0x1c;
      lStack_28 = param_2[5] + 0x42;
      local_36 = 0;
      local_38 = 0;
      FUN_0121c760(param_1 + 0x54,local_48);
    }
  }
  FUN_01225b20(param_1,param_2);
  return;
}


