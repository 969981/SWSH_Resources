/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b1ec0; name: FUN_009b1ec0
 */


uint FUN_009b1ec0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  if ((*(long *)(param_1 + 0x148) == 0) ||
     (uVar2 = FUN_007d4b30(*(long *)(param_1 + 0x148) + 0xd0), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x148);
    FUN_009bbd40(auStack_38);
    uVar1 = FUN_009b1cb0(uVar3,auStack_38,2);
    FUN_009bbd90(auStack_38);
  }
  return uVar1 & 1;
}


