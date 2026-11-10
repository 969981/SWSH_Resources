/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b770; name: FUN_0087b770
 */


void FUN_0087b770(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar3 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar4 = FUN_00880a40(uVar2,uVar3);
  uVar5 = FUN_0086a040(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar5 = (uVar5 & 0xff) + (param_3 & 0xff);
  if (uVar5 <= (uVar4 & 0xff)) {
    uVar4 = uVar5;
  }
  uVar2 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar3 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar5 = FUN_00880a40(uVar2,uVar3);
  if ((uVar4 & 0xff) <= (uVar5 & 0xff)) {
    uVar5 = uVar4;
  }
  FUN_00870d20(*(undefined8 *)(param_1 + 0x98),param_2,uVar5);
  return;
}


