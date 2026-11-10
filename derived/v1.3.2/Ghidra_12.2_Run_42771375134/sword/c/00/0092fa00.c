/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092fa00; name: FUN_0092fa00
 */


void FUN_0092fa00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 auStack_38 [2];
  
  uVar2 = FUN_008e0a00(param_3);
  uVar3 = FUN_008e12a0(param_3,0x12);
  FUN_0093a6a0(param_1,uVar2,uVar3);
  bVar1 = FUN_009260c0(param_2,uVar2,auStack_38);
  if (bVar1 != 0) {
    uVar4 = (ulong)bVar1;
    puVar5 = auStack_38;
    do {
      FUN_0093a6a0(param_1,uVar2,*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  return;
}


