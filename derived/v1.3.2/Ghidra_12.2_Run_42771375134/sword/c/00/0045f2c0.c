/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f2c0; name: FUN_0045f2c0
 */


undefined8 FUN_0045f2c0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = *(int **)PTR_DAT_02712fd0;
  uVar1 = *(uint *)(PTR_DAT_02712fd0 + 8);
  piVar3 = piVar2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * 0x18;
    while( true ) {
      if (*piVar3 == param_1) break;
      lVar4 = lVar4 + -0x18;
      piVar3 = piVar3 + 6;
      if (lVar4 == 0) {
        return 0;
      }
    }
  }
  if (piVar3 == piVar2 + (ulong)uVar1 * 6) {
    return 0;
  }
  return *(undefined8 *)(piVar3 + 2);
}


