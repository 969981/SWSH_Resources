/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482cf0; name: FUN_00482cf0
 */


bool FUN_00482cf0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = (int *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  piVar3 = piVar2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    do {
      if ((*(int *)(param_1 + 0x10) == *piVar3) &&
         ((uint)*(byte *)(piVar3 + 1) == (*(uint *)(param_1 + 0x9c) >> 0x11 & 1)))
      goto LAB_00482d40;
      lVar4 = lVar4 + -8;
      piVar3 = piVar3 + 2;
    } while (lVar4 != 0);
    piVar3 = piVar2 + (ulong)uVar1 * 2;
  }
LAB_00482d40:
  return piVar3 != (int *)0x0 && piVar2 + (ulong)uVar1 * 2 != piVar3;
}


