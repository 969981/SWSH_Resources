/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01495ec0; name: FUN_01495ec0
 */


void FUN_01495ec0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x78) = 5;
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x5f8),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x600),0);
  lVar1 = *(long *)(param_1 + 0x80);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x610),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x618),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x648),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x640),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x638),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x620),0);
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x628),0);
  lVar1 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar1 + 0x650) == 3) {
    if (*(char *)(*(long *)(lVar1 + 0x5e8) + 0x15) != '\0') {
      FUN_014876d0();
    }
  }
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x630),0);
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0x98),2);
    return;
  }
  if (*(int *)(param_1 + 0x7c) == 4) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),2);
    return;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0x88),1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x80),1);
  return;
}


