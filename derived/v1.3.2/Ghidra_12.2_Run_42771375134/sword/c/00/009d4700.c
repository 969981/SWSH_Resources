/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d4700; name: FUN_009d4700
 */


void FUN_009d4700(long *param_1,long *param_2)

{
  byte bVar1;
  
  if (param_2 == param_1) {
    return;
  }
  (**(code **)(*param_1 + 0x38))();
  if (*(int *)((long)param_2 + 0x14) != 0) {
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
  }
  if ((int)param_2[3] != 0) {
    *(int *)(param_1 + 3) = (int)param_2[3];
  }
  if ((int)param_2[5] != 0) {
    *(int *)(param_1 + 5) = (int)param_2[5];
  }
  bVar1 = *(byte *)param_2[4];
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)((byte *)param_2[4] + 8) == 0) {
    return;
  }
  FUN_00860e40(param_1 + 4,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


