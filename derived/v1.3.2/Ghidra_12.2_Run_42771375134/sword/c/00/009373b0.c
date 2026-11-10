/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009373b0; name: FUN_009373b0
 */


void FUN_009373b0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_008e1a60(param_2,7);
  uVar3 = FUN_008e0a00(param_2);
  uVar5 = FUN_009319a0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = FUN_00913e70(uVar5,uVar3);
  if ((uVar4 & 0xff) != 5) {
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xa3,uVar4,0x30);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  FUN_00917e70(uVar5,0xbb,0x1c4,uVar1,uVar2,0xffff0000);
  return;
}


