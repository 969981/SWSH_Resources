/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db99d0; name: FUN_00db99d0
 */


void FUN_00db99d0(long param_1)

{
  ulong uVar1;
  long local_28;
  
  *(undefined1 *)(param_1 + 0x85) = 0;
  if (*(char *)(param_1 + 0x84) != '\0') {
    local_28 = param_1 + 0x110;
    uVar1 = (**(code **)(param_1 + 0x90))(param_1 + 0xb0,&local_28);
    if ((uVar1 & 1) != 0) {
      FUN_006c83a0(*(undefined8 *)(param_1 + 0x78),param_1 + 0x110,param_1 + 0x120,
                   *(undefined4 *)(param_1 + 0x80),param_1 + 0x130);
      *(undefined1 *)(param_1 + 0x85) = 1;
    }
  }
  return;
}


