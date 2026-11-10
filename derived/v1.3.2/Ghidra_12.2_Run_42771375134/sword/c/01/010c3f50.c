/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c3f50; name: FUN_010c3f50
 */


void FUN_010c3f50(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5e8),1);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5f0),1);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5f8),*(undefined1 *)(lVar2 + 0x618));
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x600),1);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x608),1);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x610),1);
  lVar2 = *(long *)(param_1 + 0x90);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5e0),1);
  (**(code **)(**(long **)(lVar2 + 0x5e0) + 0x50))();
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  return;
}


