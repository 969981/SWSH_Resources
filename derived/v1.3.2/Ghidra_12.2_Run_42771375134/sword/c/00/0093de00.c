/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093de00; name: FUN_0093de00
 */


void FUN_0093de00(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = FUN_008e0a00(param_2);
  puVar4 = (uint *)FUN_008e1580(param_2);
  uVar1 = *puVar4;
  uVar5 = FUN_008daa40(param_1);
  lVar6 = FUN_008dd0a0(uVar5,6,uVar2);
  if (lVar6 != 0) {
    do {
      while (uVar3 = FUN_008dba00(lVar6), uVar1 != (uVar3 & 0xffff)) {
        lVar6 = FUN_008dd130(uVar5,lVar6,0);
        if (lVar6 == 0) {
          return;
        }
      }
      FUN_008daae0(param_1,lVar6);
      lVar6 = FUN_008dd0a0(uVar5,6,uVar2);
    } while (lVar6 != 0);
  }
  return;
}


