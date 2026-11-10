/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119b750; name: FUN_0119b750
 */


uint FUN_0119b750(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    FUN_011b0af0(auStack_38);
    uVar1 = FUN_0119b7c0(uVar3,auStack_38,*(byte *)(param_1 + 0x149) + 2000);
    FUN_011b0b40(auStack_38);
  }
  return uVar1 & 1;
}


