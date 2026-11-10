/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8410; name: FUN_012e8410
 */


bool FUN_012e8410(long param_1)

{
  ulong uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  
  local_30 = FUN_0130fa10();
  local_40 = 0xf037268a5af0b7f7;
  uStack_38 = 0;
  uVar1 = FUN_012ecf40(local_30,&local_40);
  if ((uVar1 & 1) == 0) {
    return *(int *)(param_1 + 0x500) - 3U < 2;
  }
  return true;
}


