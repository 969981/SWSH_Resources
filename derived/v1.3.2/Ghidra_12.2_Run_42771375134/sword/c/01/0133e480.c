/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133e480; name: FUN_0133e480
 */


void FUN_0133e480(long *param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  FUN_01306130(*(undefined8 *)(param_2 + 0x58),3);
  if ((*(long *)(param_5 + 8) == 0) || (*(char *)(*(long *)(param_5 + 8) + 0x170) == '\0')) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar3 = *param_1;
  lVar1 = FUN_01341d90(&local_38,*(undefined8 *)(lVar3 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38 = lVar1;
  FUN_006d9640(lVar3,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_00794370(lVar1,param_5);
  FUN_00794790(lVar1,param_4);
  FUN_007946a0(lVar1,1);
  lVar3 = FUN_01341a70(*param_3,&local_38);
  if (lVar3 == 0) {
    lVar2 = *param_3;
    lVar3 = FUN_01341cb0(&local_38,*(undefined8 *)(lVar2 + 8));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_38 = lVar3;
    FUN_006d9640(lVar2,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  FUN_01366640(lVar3,lVar1);
  return;
}


