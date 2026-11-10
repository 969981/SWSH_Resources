/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01492340; name: FUN_01492340
 */


void FUN_01492340(long param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x78) = 5;
  FUN_01485840(*(undefined8 *)(param_1 + 0x80),4,0);
  lVar2 = *(long *)(param_1 + 0x80);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x610),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x618),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x648),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x640),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x638),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x620),0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x628),0);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 3) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0x98),2);
    return;
  }
  if (iVar1 == 2) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0x90),2);
    return;
  }
  if (iVar1 == 0) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
    FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),2);
    return;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0x88),1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x80),1);
  return;
}


