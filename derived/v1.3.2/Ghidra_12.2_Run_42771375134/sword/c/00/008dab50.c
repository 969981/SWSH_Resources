/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dab50; name: FUN_008dab50
 */


void FUN_008dab50(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  FUN_00931990(*(undefined8 *)(param_1 + 8));
  lVar2 = FUN_008dd020();
  if (lVar2 != 0) {
    do {
      while( true ) {
        lVar3 = FUN_008db990(lVar2);
        cVar1 = FUN_008db9d0(lVar2);
        if ((cVar1 == '\b') && (uVar4 = FUN_008dba10(lVar2), (uVar4 & 1) != 0)) break;
LAB_008dabc0:
        lVar2 = lVar3;
        if (lVar3 == 0) {
          return;
        }
      }
      uVar4 = FUN_008dba30(lVar2);
      if ((uVar4 & 1) != 0) {
        FUN_008dbb00(lVar2,1);
        goto LAB_008dabc0;
      }
      uVar5 = FUN_00931990(*(undefined8 *)(param_1 + 8));
      FUN_008dcfc0(uVar5,lVar2);
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
  return;
}


