/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eabe0; name: FUN_008eabe0
 */


void FUN_008eabe0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  FUN_01622e00(*(undefined8 *)(param_1 + 0xa8));
  *(short *)(param_1 + 0x68) = (short)param_3;
  uVar1 = FUN_01623020(*(undefined8 *)(param_1 + 0xa8));
  *(undefined1 *)(param_1 + 0x6e) = uVar1;
  bVar2 = FUN_01623000(*(undefined8 *)(param_1 + 0xa8));
  *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) & 0xf0 | bVar2 & 0xf;
  bVar2 = FUN_01623010(*(undefined8 *)(param_1 + 0xa8));
  *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) & 0xcf | (bVar2 & 3) << 4;
  bVar2 = FUN_01623170(*(undefined8 *)(param_1 + 0xa8));
  *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) & 0xbf | (bVar2 & 1) << 6;
  uVar3 = FUN_01623150(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  uVar3 = FUN_01623160(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  FUN_01623180(*(undefined8 *)(param_1 + 0x90),param_1 + 0x6c,param_2,param_3);
  return;
}


