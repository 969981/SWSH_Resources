/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01493470; name: FUN_01493470
 */


void FUN_01493470(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x78) = 4;
  FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5e0),0);
  lVar1 = *(long *)(param_1 + 0x98);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x610),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x618),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x648),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x640),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x638),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x620),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x628),0);
  lVar1 = *(long *)(param_1 + 0x80);
  *(undefined1 *)(*(long *)(lVar1 + 0x5e8) + 0x84) = 1;
  *(undefined1 *)(*(long *)(lVar1 + 0x608) + 0x84) = 1;
  *(undefined1 *)(*(long *)(lVar1 + 0x628) + 0x84) = 1;
  if (*(int *)(param_1 + 0x7c) == 2) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x80),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0x90),2);
    return;
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x80),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),2);
    return;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0x80),1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x98),1);
  return;
}


