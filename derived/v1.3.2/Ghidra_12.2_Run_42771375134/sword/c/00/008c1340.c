/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c1340; name: FUN_008c1340
 */


void FUN_008c1340(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_48;
  
  iVar1 = *(int *)(param_1 + 0x640);
  iVar4 = *(int *)(param_1 + 0x644);
  if ((param_2 < 1) || (iVar1 != iVar4)) {
    if ((-1 < param_2) || (iVar1 != 1)) {
      if (iVar1 + param_2 <= iVar4) {
        iVar4 = iVar1 + param_2;
      }
      if (iVar4 < 2) {
        iVar4 = 1;
      }
    }
  }
  else {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x640) = iVar4;
  FUN_008c0ec0(param_1);
  bVar2 = *(int *)(param_1 + 0x640) == *(int *)(param_1 + 0x644);
  bVar3 = *(int *)(param_1 + 0x640) == 1;
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e0),!bVar2);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x600),bVar2);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),!bVar3);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x608),bVar3);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f8),!bVar2);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x618),bVar2);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f0),!bVar3);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x610),bVar3);
  if (param_2 < 1) {
    local_48 = 0x8365d102289604c8;
  }
  else {
    local_48 = 0x21c94826ad681fa5;
  }
  FUN_00ffd010(param_1 + 0x100,&local_48);
  return;
}


