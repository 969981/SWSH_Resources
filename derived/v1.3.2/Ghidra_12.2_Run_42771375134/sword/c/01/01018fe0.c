/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01018fe0; name: FUN_01018fe0
 */


undefined8 FUN_01018fe0(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x6c);
  if (iVar1 == 2) {
    return 1;
  }
  if (iVar1 != 1) {
    if ((iVar1 != 0) || (uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2), (uVar2 & 1) == 0))
    {
      return 0;
    }
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    *(undefined4 *)((long)param_1 + 0x6c) = 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((int)uVar3 == 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2);
    *(undefined4 *)((long)param_1 + 0x6c) = 2;
    uVar3 = 1;
  }
  return uVar3;
}


