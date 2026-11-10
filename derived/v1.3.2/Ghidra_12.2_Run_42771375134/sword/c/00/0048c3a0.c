/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c3a0; name: FUN_0048c3a0
 */


int FUN_0048c3a0(undefined8 *param_1,int *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0x43) = 0;
    FUN_0048c4c0(param_1,1,0x1000000,*(undefined8 *)param_2,param_2[2]);
  }
  if (((param_3 & 1) == 0) && ((*(byte *)((long)param_1 + 0x26a) & 7) != 1)) {
    iVar1 = FUN_00468170(0,param_1);
  }
  else {
    *(uint *)((long)param_1 + 0x26b) = *(uint *)((long)param_1 + 0x26b) | 0x4000;
    iVar1 = FUN_00468170(1,param_1);
    if (param_1[0x3c] != 0) {
      FUN_004be2e0(*(undefined8 *)PTR_DAT_02712b18);
    }
    FUN_00451560(param_1 + 3,1);
    if (param_1[0xd] != 0) {
      FUN_00479850();
    }
  }
  if (iVar1 == 1) {
    if ((*(byte *)((long)param_1 + 0x26a) & 7) == 2) {
      (**(code **)*param_1)(param_1,0,0);
    }
    if ((param_4 & 1) != 0) {
      *(int *)PTR_DAT_02712ee8 = *(int *)PTR_DAT_02712ee8 + 1;
    }
  }
  return iVar1;
}


