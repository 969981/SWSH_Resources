/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dac70; name: FUN_008dac70
 */


void FUN_008dac70(long param_1,ushort param_2,char param_3)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  
  FUN_00931990(*(undefined8 *)(param_1 + 8));
  lVar3 = FUN_008dd020();
  if (lVar3 != 0) {
    do {
      uVar2 = FUN_008db8c0(lVar3);
      if (((uVar2 & 0xff) == param_2) && (cVar1 = FUN_008db9d0(lVar3), cVar1 == param_3)) {
        FUN_008db940(lVar3);
      }
      lVar3 = FUN_008db990(lVar3);
    } while (lVar3 != 0);
  }
  return;
}


