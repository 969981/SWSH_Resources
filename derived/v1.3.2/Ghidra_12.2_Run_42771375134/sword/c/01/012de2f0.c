/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012de2f0; name: FUN_012de2f0
 */


undefined8 FUN_012de2f0(long param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x248) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar3 = puVar5 + -10;
          goto LAB_012de36c;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_012de36c:
  uVar4 = FUN_00c89870(puVar3,*(undefined8 *)(param_1 + 8),param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x460) = uVar4;
  local_38 = 8;
  FUN_00727220(uVar4,*(undefined8 *)(*param_2 + 0x68),&local_38);
  if (*(long *)(param_1 + 0x358) != 0) {
    uVar4 = FUN_012de440(param_1,param_1 + 0x460);
    *(undefined8 *)(param_1 + 0x468) = uVar4;
    FUN_0069ae40(uVar4,*(undefined8 *)(param_1 + 0x100),param_1 + 0x350,1);
  }
  return 1;
}


