/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb160; name: FUN_008fb160
 */


void FUN_008fb160(long *param_1,long param_2,ulong param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x88);
  if (*piVar4 == 2) {
    bVar2 = *(long *)(param_2 + (param_3 & 0xff) * 0x70 + 0x1e8) == 0;
    bVar1 = *(byte *)(piVar4 + 0x29d);
  }
  else {
    bVar2 = false;
    bVar1 = *(byte *)(piVar4 + 0x29d);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    bVar2 = (bool)(bVar2 | *(long *)(param_2 + (param_3 & 0xff) * 0x70 + 0x1e8) == 0);
  }
  if (!bVar2) {
    *param_1 = 0;
    return;
  }
  param_2 = param_2 + (param_3 & 0xff) * 0x70;
  if (param_4 == 1) {
    lVar3 = *(long *)(param_2 + 0x208);
    *param_1 = lVar3;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x200);
    *param_1 = lVar3;
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008fb200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  return;
}


