/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093c870; name: FUN_0093c870
 */


void FUN_0093c870(long param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = FUN_008f96e0(*(undefined8 *)(param_1 + 8),param_3);
  uVar2 = FUN_008f96e0(*(undefined8 *)(param_1 + 8),param_4);
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_008df3b0(uVar3,param_2);
  FUN_00914350(uVar3,uVar1,uVar2);
  uVar4 = FUN_00914310(uVar3,uVar1);
  uVar3 = FUN_00914310(uVar3,uVar2);
  uVar5 = FUN_008e1600(uVar4);
  if ((uVar5 & 1) == 0) {
    FUN_008e3830(uVar4,0xc);
  }
  uVar5 = FUN_008e1600(uVar3);
  if ((uVar5 & 1) == 0) {
    FUN_008e3830(uVar3,0xc);
  }
  uVar3 = FUN_009319a0(*(undefined8 *)(param_1 + 0x10));
  FUN_00913b40(uVar3,param_3,param_4);
  return;
}


