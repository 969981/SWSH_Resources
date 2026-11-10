/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db9a40; name: FUN_00db9a40
 */


void FUN_00db9a40(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  long local_38;
  
  uVar1 = *(undefined1 *)(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x85) = 0;
  local_38 = param_1 + 0x110;
  uVar2 = (**(code **)(param_1 + 0x90))(param_1 + 0xb0,&local_38);
  if ((uVar2 & 1) != 0) {
    FUN_006c83a0(*(undefined8 *)(param_1 + 0x78),param_1 + 0x110,param_1 + 0x120,
                 *(undefined4 *)(param_1 + 0x80),param_1 + 0x130);
    *(undefined1 *)(param_1 + 0x85) = 1;
  }
  *(undefined1 *)(param_1 + 0x84) = uVar1;
  return;
}


