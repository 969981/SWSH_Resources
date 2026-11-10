/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b8230; name: FUN_007b8230
 */


undefined8 FUN_007b8230(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)PTR_DAT_02716a30 == 0) {
    if ((int)param_1[0x3e] == 0) {
      return 0;
    }
  }
  else {
    uVar1 = FUN_01940840();
    if (*(uint *)(param_1 + 0x3e) <= (uVar1 & 0xffff)) {
      return 0;
    }
  }
  uVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  if (param_1[0x99] != 0) {
    plVar3 = (long *)(param_1[0x98] + 8);
    lVar4 = param_1[0x99] << 4;
    do {
      if ((plVar3[-1] == *param_2) && (*plVar3 == param_2[1])) {
        return 1;
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return 0;
}


