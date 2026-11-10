/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146c3c0; name: FUN_0146c3c0
 */


int FUN_0146c3c0(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0087afd0(*(undefined8 *)(param_1 + 0x18));
    uVar3 = FUN_0087ac70(*(undefined8 *)(param_1 + 0x18));
    iVar1 = *(int *)(param_1 + 0x210);
    *(int *)(param_1 + 0x210) = iVar2;
    if (*(long *)(param_1 + 0x200) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_016a8b10(&local_38,*(undefined8 *)(param_1 + 0x1e8),
                 *(undefined8 *)(*(long *)(param_1 + 0x200) + 8),iVar1,uVar3,iVar2,param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x208);
    local_40 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_015f6330(uVar4,&local_40,0x10);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    iVar2 = iVar2 - iVar1;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return iVar2;
}


