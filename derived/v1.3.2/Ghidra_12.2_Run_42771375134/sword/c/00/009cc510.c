/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cc510; name: FUN_009cc510
 */


uint FUN_009cc510(long param_1)

{
  uint uVar1;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  uint local_28;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_009da670(auStack_40);
    local_2c = 2;
    local_28 = (uint)*(byte *)(param_1 + 0x28);
    uVar1 = FUN_009cc3e0(*(undefined8 *)(param_1 + 0xd8),auStack_40);
    FUN_009da6d0(auStack_40);
  }
  return uVar1 & 1;
}


