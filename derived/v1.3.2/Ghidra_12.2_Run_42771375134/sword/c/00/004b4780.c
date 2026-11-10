/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b4780; name: FUN_004b4780
 */


undefined8 FUN_004b4780(undefined8 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 4;
    while( true ) {
      if (*piVar3 == param_2) break;
      lVar4 = lVar4 + -0x10;
      piVar3 = piVar3 + 4;
      if (lVar4 == 0) {
        return 0x14;
      }
    }
  }
  if (piVar3 == piVar2 + (ulong)uVar1 * 4) {
    return 0x14;
  }
  **(undefined4 **)(piVar3 + 2) = param_3;
  return 1;
}


