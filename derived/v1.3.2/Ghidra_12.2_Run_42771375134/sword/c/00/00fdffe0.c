/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdffe0; name: FUN_00fdffe0
 */


void FUN_00fdffe0(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_28;
  
  switch(param_2) {
  case 0:
  case 1:
    if ((param_3 & 1) == 0) {
      FUN_00fd6380(*(undefined8 *)(param_1 + (long)param_2 * 8 + 8));
      return;
    }
    FUN_00fd6400();
    return;
  case 2:
    if ((param_3 & 1) == 0) {
      FUN_00fd6380(*(undefined8 *)(param_1 + 0x18));
    }
    else {
      FUN_00fd6400();
    }
    lVar2 = *(long *)(param_1 + 0x18);
    iVar1 = 0;
    break;
  default:
    return;
  case 4:
    if ((param_3 & 1) == 0) {
      FUN_00fd6380(*(undefined8 *)(param_1 + 0x18));
    }
    else {
      FUN_00fd6400();
    }
    lVar2 = *(long *)(param_1 + 0x18);
    iVar1 = 1;
    break;
  case 5:
    lVar2 = *(long *)(param_1 + 0x18);
    if ((param_3 & 1) == 0) {
      FUN_00fd6380(lVar2);
    }
    else {
      FUN_00fd6400();
    }
    iVar1 = 2;
  }
  uStack_28 = 0x8bdf9891903f8e9c;
  FUN_0167ba30(*(undefined8 *)(lVar2 + 0x1a0),&uStack_28);
  uStack_28 = 0x8bdf9891903f8e9c;
  FUN_0167bdb0((float)iVar1,*(undefined8 *)(lVar2 + 0x1a0),&uStack_28);
  return;
}


