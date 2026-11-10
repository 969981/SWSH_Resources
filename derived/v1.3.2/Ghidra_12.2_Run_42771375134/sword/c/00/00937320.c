/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937320; name: FUN_00937320
 */


void FUN_00937320(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_008e0a00(param_2);
  uVar4 = FUN_009319a0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_00913e70(uVar4,uVar2);
  if ((uVar3 & 0xff) != 5) {
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xa3,uVar3,0x2f);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  FUN_00917e70(uVar4,0xbb,0x1d8,uVar1,0xffff0000);
  return;
}


