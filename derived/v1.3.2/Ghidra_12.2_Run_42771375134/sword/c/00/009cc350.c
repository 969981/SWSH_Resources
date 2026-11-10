/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cc350; name: FUN_009cc350
 */


uint FUN_009cc350(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  uint local_28;
  
  if ((((*(long *)PTR_DAT_027185f8 == 0) || (*(long *)(param_1 + 0xd8) == 0)) ||
      (uVar2 = FUN_007d4b30(*(long *)(param_1 + 0xd8) + 0xd0), (uVar2 & 1) == 0)) ||
     (*(short *)(*(long *)(param_1 + 0xd8) + 0x84) != 0)) {
    uVar1 = 0;
  }
  else {
    FUN_009da670(auStack_40);
    local_2c = 1;
    local_28 = (uint)*(byte *)(param_1 + 0x28);
    uVar1 = FUN_009cc3e0(*(undefined8 *)(param_1 + 0xd8),auStack_40);
    FUN_009da6d0(auStack_40);
  }
  return uVar1 & 1;
}


