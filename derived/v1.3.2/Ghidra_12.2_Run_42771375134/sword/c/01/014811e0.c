/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014811e0; name: FUN_014811e0
 */


void FUN_014811e0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long local_48;
  long local_40;
  long local_38;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)
           (*(code *)**(undefined8 **)(param_3 + 0x50))((undefined8 *)(param_3 + 0x50));
  if (((*PTR_DAT_0272a018 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0272a018), iVar1 != 0))
  {
    uVar3 = FUN_008a4980();
    *(undefined8 *)PTR_DAT_0272a020 = uVar3;
    __cxa_guard_release(PTR_DAT_0272a018);
  }
  do {
    lVar4 = param_3;
    if (puVar2 == (undefined8 *)PTR_DAT_0272a020) goto joined_r0x01481250;
    puVar2 = (undefined8 *)*puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  lVar4 = 0;
joined_r0x01481250:
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar5 = 0;
  if (*(char *)(lVar4 + 0x7c) != '\0') {
    uVar5 = 5;
  }
  *(undefined4 *)(param_2[0xe8] + 0xc) = uVar5;
  uVar3 = FUN_00ff5cf0(param_2);
  (**(code **)(*param_2 + 0x10))(&local_40,param_2);
  (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
  local_48 = local_38;
  lVar4 = FUN_01483ac0(&local_38,uVar3,&local_40,&local_48);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = lVar4;
  return;
}


