/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133e370; name: FUN_0133e370
 */


void FUN_0133e370(long *param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  FUN_01306130(*(undefined8 *)(param_2 + 0x58),3);
  if ((*(long *)(param_5 + 8) == 0) || (*(char *)(*(long *)(param_5 + 8) + 0x170) == '\0')) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = FUN_00adc640(*param_1,*(undefined8 *)(*param_1 + 8),param_5);
  local_38 = 8;
  FUN_00727220(uVar1,param_4,&local_38);
  lVar2 = FUN_01341a70(*param_3,&local_38);
  if (lVar2 == 0) {
    lVar3 = *param_3;
    lVar2 = FUN_01341cb0(&local_38,*(undefined8 *)(lVar3 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_38 = lVar2;
    FUN_006d9640(lVar3,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  FUN_013663a0(lVar2,uVar1);
  return;
}


