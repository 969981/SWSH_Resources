/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01157330; name: FUN_01157330
 */


uint FUN_01157330(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_01158d00(*(undefined8 *)(param_1 + 0x88));
  uVar2 = FUN_0115ce30(*(undefined8 *)(param_1 + 0x90));
  uVar3 = FUN_0115c860(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0115b400(*(undefined8 *)(param_1 + 0xa8));
  uVar5 = FUN_0115f460(*(undefined8 *)(param_1 + 0xa0));
  uVar5 = uVar1 & uVar2 & uVar3 & uVar4 & uVar5;
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_01160c30(*(undefined8 *)(param_1 + 0xb0));
    uVar5 = uVar5 & uVar1;
  }
  uVar1 = FUN_01036fd0(*(undefined8 *)(param_1 + 0xd0));
  uVar2 = FUN_01037070(*(undefined8 *)(param_1 + 0xd0));
  return uVar5 & uVar1 & uVar2 & 1;
}


