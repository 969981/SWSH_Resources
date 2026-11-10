/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00911010; name: FUN_00911010
 */


undefined8 FUN_00911010(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar1 = 1;
    lVar3 = *(long *)(param_1 + 0x98);
  }
  else {
    uVar1 = FUN_009c4f90();
    lVar3 = *(long *)(param_1 + 0x98);
  }
  if (lVar3 != 0) {
    uVar2 = FUN_009c4f90();
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar2 = FUN_009c4f90();
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 200) != 0) {
    uVar2 = FUN_009c4f90();
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar2 = FUN_009c4f90();
    if ((uVar1 & uVar2 & 1) == 0) {
      return 0;
    }
  }
  FUN_009b2b60();
  return 1;
}


