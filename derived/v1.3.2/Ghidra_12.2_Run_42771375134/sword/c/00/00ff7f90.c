/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff7f90; name: FUN_00ff7f90
 */


undefined8 FUN_00ff7f90(long param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(uint *)(param_1 + 0xc90) < 8) {
    strncpy((char *)(param_1 + 0x10 + (ulong)*(uint *)(param_1 + 0xc90) * 400),param_3,0x7f);
    uVar2 = (ulong)*(uint *)(param_1 + 0xc90);
    lVar3 = param_1 + 0x10 + uVar2 * 400;
    *(undefined1 *)(lVar3 + 0x7f) = 0;
    FUN_006dddd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,*(undefined8 *)(param_1 + 8),
                 0);
    plVar4 = (long *)(lVar3 + 0x88);
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *plVar4 = local_38;
    if (local_38 != 0) {
      plVar4 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((*(long *)(param_1 + uVar2 * 400 + 0xa0) != 0) ||
         (*(long *)(param_1 + uVar2 * 400 + 0x120) != 0)) {
        FUN_006e1e70(local_38,param_1 + uVar2 * 400 + 0x90,1);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    uVar1 = 1;
    *(int *)(param_1 + 0xc90) = *(int *)(param_1 + 0xc90) + 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


