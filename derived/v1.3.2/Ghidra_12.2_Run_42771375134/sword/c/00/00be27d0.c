/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be27d0; name: FUN_00be27d0
 */


undefined4 FUN_00be27d0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00be2600();
  if ((*(ushort *)(param_1 + 0x90) <= uVar1) && (uVar1 <= *(ushort *)(param_1 + 0x92))) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x94) <= uVar1) && (uVar1 <= *(ushort *)(param_1 + 0x96))) {
    return 1;
  }
  if ((*(ushort *)(param_1 + 0x98) <= uVar1) && (uVar1 <= *(ushort *)(param_1 + 0x9a))) {
    return 2;
  }
  if (uVar1 < *(ushort *)(param_1 + 0x9c)) {
    return 4;
  }
  uVar2 = 3;
  if (*(ushort *)(param_1 + 0x9e) < uVar1) {
    uVar2 = 4;
  }
  return uVar2;
}


