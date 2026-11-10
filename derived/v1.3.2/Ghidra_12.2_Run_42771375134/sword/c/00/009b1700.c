/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b1700; name: FUN_009b1700
 */


uint FUN_009b1700(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  uint local_30;
  undefined4 local_2c;
  
  lVar3 = *(long *)PTR_DAT_027185f8;
  if ((((lVar3 == 0) || (*(long *)(param_1 + 0x148) == 0)) ||
      (uVar2 = FUN_007d4b30(*(long *)(param_1 + 0x148) + 0xd0), (uVar2 & 1) == 0)) ||
     (*(short *)(*(long *)(param_1 + 0x148) + 0x84) != 0)) {
    uVar1 = 0;
  }
  else {
    FUN_009bed90(auStack_50);
    local_38 = FUN_0120e640(lVar3);
    local_30 = (uint)*(byte *)(param_1 + 0x90);
    local_2c = 0x6e;
    uVar1 = FUN_009b17a0(*(undefined8 *)(param_1 + 0x148),auStack_50,1);
    FUN_009bee00(auStack_50);
  }
  return uVar1 & 1;
}


