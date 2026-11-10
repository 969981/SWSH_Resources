/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8420; name: FUN_00ff8420
 */


undefined8 FUN_00ff8420(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_60 [3];
  long local_48;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 400);
  if ((*(uint *)(param_1 + 400) < 0x10) &&
     (lVar2 = param_1 + uVar3 * 0x18, *(long *)(lVar2 + 0x18) == 0)) {
    plVar1 = (long *)(lVar2 + 0x10);
    if (**(char **)(param_2 + 8) == '\0') {
      local_60[0] = FUN_006e5e60();
      if (local_60[0] != 0) {
        (**(code **)(*(long *)(local_60[0] + 0x48) + 0x10))();
      }
      lVar2 = *plVar1;
    }
    else {
      FUN_006cf520(local_60,*(undefined8 *)PTR_DAT_02710440);
      lVar2 = *plVar1;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    *plVar1 = local_60[0];
    lVar2 = FUN_009e3950(local_60,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    plVar4 = (long *)(param_1 + uVar3 * 0x18 + 0x18);
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *plVar4 = lVar2;
    if (lVar2 != 0) {
      FUN_006cf0c0(local_60,plVar1);
      FUN_014bc450(lVar2,local_60,param_3,1);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + uVar3 * 0x18 + 0x20) = param_3;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      return 1;
    }
  }
  return 0;
}


