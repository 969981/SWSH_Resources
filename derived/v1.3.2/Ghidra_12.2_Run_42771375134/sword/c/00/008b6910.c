/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b6910; name: FUN_008b6910
 */


void FUN_008b6910(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
  lVar2 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x688),1);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x690),1);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),1);
  FUN_008c8180(*(undefined8 *)(param_1 + 0x88),0);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
  FUN_008c61d0(*(undefined8 *)(param_1 + 0x88),1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  return;
}


