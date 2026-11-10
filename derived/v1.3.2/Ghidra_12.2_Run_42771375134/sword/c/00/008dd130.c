/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd130; name: FUN_008dd130
 */


long FUN_008dd130(undefined8 param_1,long param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    cVar1 = FUN_008db9d0(param_2);
    cVar2 = FUN_008db9f0(param_2);
    lVar4 = FUN_008db990(param_2);
    if (lVar4 != 0) {
      if ((param_3 & 1) == 0) {
        do {
          cVar3 = FUN_008db9d0(lVar4);
          if (((cVar3 == cVar1) && (cVar3 = FUN_008db9f0(lVar4), cVar3 == cVar2)) &&
             (uVar5 = FUN_008dba20(lVar4), (uVar5 & 1) == 0)) {
            return lVar4;
          }
          lVar4 = FUN_008db990(lVar4);
        } while (lVar4 != 0);
      }
      else {
        do {
          cVar2 = FUN_008db9d0(lVar4);
          if ((cVar2 == cVar1) && (uVar5 = FUN_008dba20(lVar4), (uVar5 & 1) == 0)) {
            return lVar4;
          }
          lVar4 = FUN_008db990(lVar4);
        } while (lVar4 != 0);
      }
    }
  }
  return 0;
}


