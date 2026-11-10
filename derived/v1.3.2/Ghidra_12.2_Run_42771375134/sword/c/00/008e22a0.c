/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e22a0; name: FUN_008e22a0
 */


void FUN_008e22a0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x2c8);
  uVar2 = *(undefined8 *)(param_1 + 0x2d0);
  uVar3 = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_2 + 0x2e0) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_2 + 0x2d8) = uVar3;
  *(undefined8 *)(param_2 + 0x2d0) = uVar2;
  *(undefined8 *)(param_2 + 0x2c8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x2f4);
  uVar1 = *(undefined8 *)(param_1 + 0x2e4);
  uVar2 = *(undefined8 *)(param_1 + 0x2ec);
  *(undefined4 *)(param_2 + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined8 *)(param_2 + 0x2f4) = uVar3;
  *(undefined8 *)(param_2 + 0x2ec) = uVar2;
  *(undefined8 *)(param_2 + 0x2e4) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x300);
  uVar2 = *(undefined8 *)(param_1 + 0x308);
  uVar3 = *(undefined8 *)(param_1 + 0x310);
  *(undefined4 *)(param_2 + 0x318) = *(undefined4 *)(param_1 + 0x318);
  *(undefined8 *)(param_2 + 0x310) = uVar3;
  *(undefined8 *)(param_2 + 0x308) = uVar2;
  *(undefined8 *)(param_2 + 0x300) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x32c);
  uVar1 = *(undefined8 *)(param_1 + 0x31c);
  uVar2 = *(undefined8 *)(param_1 + 0x324);
  *(undefined4 *)(param_2 + 0x334) = *(undefined4 *)(param_1 + 0x334);
  *(undefined8 *)(param_2 + 0x31c) = uVar1;
  *(undefined8 *)(param_2 + 0x32c) = uVar3;
  *(undefined8 *)(param_2 + 0x324) = uVar2;
  *(undefined1 *)(param_2 + 0x33c) = *(undefined1 *)(param_1 + 0x33c);
  return;
}


