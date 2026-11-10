/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397960; name: FUN_00397960
 */


void FUN_00397960(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_1[1] != 0) {
    lVar2 = *param_1;
    uVar1 = 0;
    do {
      lVar3 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *(int *)(lVar2 + lVar3) = *(int *)(lVar2 + lVar3) + param_2;
    } while (uVar1 < *(uint *)(param_1 + 1));
  }
  return;
}


