/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dcd50; name: FUN_008dcd50
 */


void FUN_008dcd50(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1608) != 0) {
    uVar1 = FUN_008db9e0();
    uVar2 = FUN_008db9e0(param_2);
    lVar5 = *(long *)(param_1 + 0x1608);
    if (uVar2 <= uVar1) {
      do {
        lVar3 = FUN_008db990(lVar5);
        if (lVar3 == 0) {
          FUN_008db960(lVar5,param_2);
          return;
        }
        uVar1 = FUN_008db9e0();
        uVar2 = FUN_008db9e0(param_2);
        lVar5 = lVar3;
      } while (uVar2 <= uVar1);
      uVar4 = FUN_008db9a0(lVar3);
      FUN_008db960(uVar4,param_2);
      FUN_008db960(param_2,lVar3);
      return;
    }
    FUN_008db960(param_2,*(long *)(param_1 + 0x1608));
  }
  *(undefined8 *)(param_1 + 0x1608) = param_2;
  return;
}


