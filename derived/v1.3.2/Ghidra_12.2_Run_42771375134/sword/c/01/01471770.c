/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01471770; name: FUN_01471770
 */


void FUN_01471770(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_0087d610(*(undefined8 *)(param_1 + 0x18),2);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = FUN_0087b540(*(undefined8 *)(param_1 + 0x18)), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_0087b180(*(undefined8 *)(param_1 + 0x18)), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    if ((*(long *)(param_1 + 0x1f8) == -0x340d631b7bddd9bb) || (*(long *)(param_1 + 0x1f8) == 0)) {
      lVar3 = param_1 + 0xa8;
    }
    else {
      lVar3 = param_1 + 0x1f8;
      FUN_0167bdb0(0,uVar2,lVar3);
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
    FUN_0167bb70(uVar2,lVar3);
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0xd8);
  }
  return;
}


