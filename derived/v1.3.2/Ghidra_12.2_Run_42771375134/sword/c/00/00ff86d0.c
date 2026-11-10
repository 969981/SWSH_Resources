/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff86d0; name: FUN_00ff86d0
 */


ulong FUN_00ff86d0(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  
  if (*(uint *)(param_1 + 400) == 0) {
    return 0xffffffff;
  }
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x20);
  while( true ) {
    plVar1 = (long *)PTR_DAT_02710920;
    if (*(long *)(piVar3 + -4) != 0) {
      plVar1 = (long *)(*(long *)(piVar3 + -4) + 0x58);
    }
    if ((*plVar1 == *param_2) && (*piVar3 == param_3)) break;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 6;
    if (*(uint *)(param_1 + 400) <= uVar2) {
      return 0xffffffff;
    }
  }
  return uVar2 & 0xffffffff;
}


