/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00930500; name: FUN_00930500
 */


void FUN_00930500(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  return;
}


