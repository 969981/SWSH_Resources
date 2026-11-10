/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2ce0; name: FUN_004c2ce0
 */


int FUN_004c2ce0(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((long)param_1 + 0x4c) + -1;
  *(int *)((long)param_1 + 0x4c) = iVar2;
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*param_1)(param_1);
    FUN_00404870(uVar1,param_1);
  }
  return iVar2;
}


