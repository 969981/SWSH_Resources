/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149b0f0; name: FUN_0149b0f0
 */


void FUN_0149b0f0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x628),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x630),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5e0),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x638),0);
  lVar2 = *(long *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 5;
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x610),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x618),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x648),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x640),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x638),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x620),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x628),0);
  lVar2 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar2 + 0x650) == 3) {
    if (*(char *)(*(long *)(lVar2 + 0x5e8) + 0x15) != '\0') {
      FUN_014876d0();
    }
  }
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x630),0);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 4) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),2);
    return;
  }
  if (iVar1 == 1) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0x98),2);
    return;
  }
  if (iVar1 == 0) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0xa8),2);
    return;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0x88),1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x80),1);
  return;
}


