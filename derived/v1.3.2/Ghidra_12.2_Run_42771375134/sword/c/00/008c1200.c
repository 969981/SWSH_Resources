/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c1200; name: FUN_008c1200
 */


void FUN_008c1200(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_38;
  
  local_38 = 0x23dab45e4fac5f6d;
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  bVar1 = *(int *)(param_1 + 0x640) == *(int *)(param_1 + 0x644);
  bVar2 = *(int *)(param_1 + 0x640) == 1;
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e0),!bVar1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x600),bVar1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),!bVar2);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x608),bVar2);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f8),!bVar1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x618),bVar1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f0),!bVar2);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x610),bVar2);
  return;
}


