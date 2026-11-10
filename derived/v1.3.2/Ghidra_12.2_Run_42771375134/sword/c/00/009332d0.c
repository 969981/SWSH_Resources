/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009332d0; name: FUN_009332d0
 */


void FUN_009332d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  *(undefined8 *)(param_1 + 200) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  return;
}


