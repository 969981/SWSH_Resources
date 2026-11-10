/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dad50; name: FUN_008dad50
 */


void FUN_008dad50(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  FUN_00931990(*(undefined8 *)(param_1 + 8));
  lVar2 = FUN_008dd020();
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_008dae40(param_1,param_2,param_3,param_4 & 1,lVar2);
      if (lVar3 == 0) break;
      uVar4 = FUN_008dba10();
      if ((uVar4 & 1) == 0) {
        lVar3 = FUN_008db990(lVar2);
      }
      lVar2 = lVar3;
    } while (lVar2 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x78) + -1;
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar1 == 0) {
    FUN_00931990(*(undefined8 *)(param_1 + 8));
    lVar2 = FUN_008dd020();
    if (lVar2 != 0) {
      do {
        FUN_008db9c0(lVar2,0);
        lVar2 = FUN_008db990(lVar2);
      } while (lVar2 != 0);
    }
  }
  return;
}


