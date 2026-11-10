/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080db90; name: FUN_0080db90
 */


void FUN_0080db90(undefined8 *param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 2)) {
    (**(code **)(*(long *)*param_1 + 0x18))();
    iVar1 = *(int *)(param_1 + 2);
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) - iVar1;
    param_1[1] = 0;
  }
  return;
}


