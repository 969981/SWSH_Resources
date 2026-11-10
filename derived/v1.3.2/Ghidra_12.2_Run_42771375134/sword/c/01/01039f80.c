/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01039f80; name: FUN_01039f80
 */


void FUN_01039f80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_0103a6b0(auStack_38,*(undefined8 *)(param_1 + 8));
  if (lVar1 == 0) {
    FUN_0103c820(0,param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar3 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_0103c820(lVar1,param_2);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_0103bbf0(param_1);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar2 = *(long *)(param_1 + 0xba0);
  *(long *)(param_1 + 0xba0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar1 = *(long *)(param_1 + 0xba0);
  }
  FUN_0103c8d0(lVar1);
  if ((*(char *)(param_1 + 0xba8) == '\0') || (*(int *)(*(long *)(param_1 + 0xba0) + 0x198) != 3)) {
    *(undefined4 *)(param_1 + 0xbac) = 1;
  }
  else {
    FUN_01039d30(param_1);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


