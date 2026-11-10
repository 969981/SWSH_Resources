/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bc420; name: FUN_004bc420
 */


void FUN_004bc420(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)PTR_DAT_02712b98;
  iVar1 = *(int *)(lVar2 + 0x40) + -1;
  *(int *)(lVar2 + 0x40) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(lVar2 + 0x38) != 0) {
    piVar3 = *(int **)(lVar2 + 0x30);
    do {
      if (*piVar3 == 1) {
        FUN_004bb9f0(lVar2,*(undefined8 *)(piVar3 + 2));
      }
      else if (*piVar3 == 0) {
        FUN_004bb330(lVar2,*(undefined8 *)(piVar3 + 2),piVar3[4]);
      }
      piVar3 = piVar3 + 6;
    } while (piVar3 != (int *)(*(long *)(lVar2 + 0x30) + (ulong)*(uint *)(lVar2 + 0x38) * 0x18));
  }
  *(undefined4 *)(lVar2 + 0x38) = 0;
  return;
}


