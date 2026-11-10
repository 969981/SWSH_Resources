/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01479440; name: FUN_01479440
 */


void FUN_01479440(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
  FUN_01470b40(*(undefined8 *)(param_1 + 0x90));
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x618);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
  return;
}


