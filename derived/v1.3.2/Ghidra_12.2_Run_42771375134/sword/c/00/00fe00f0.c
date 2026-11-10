/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe00f0; name: FUN_00fe00f0
 */


ulong FUN_00fe00f0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 != 2) {
    if (param_2 == 5) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      iVar1 = FUN_00fd68b0(uVar3);
      if (iVar1 == 2) {
        uVar2 = FUN_00fd67c0(uVar3);
        return uVar2;
      }
      return 0;
    }
    if (param_2 != 4) {
      uVar2 = FUN_00fd67c0(*(undefined8 *)(param_1 + (long)param_2 * 8 + 8));
      return uVar2;
    }
  }
  uVar2 = FUN_00fd67c0(*(undefined8 *)(param_1 + 0x18));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  iVar1 = FUN_00fd68b0(*(undefined8 *)(param_1 + 0x18));
  if ((param_2 == 2) && (iVar1 == 0)) {
    return 1;
  }
  return (ulong)(param_2 == 4 && iVar1 == 1);
}


