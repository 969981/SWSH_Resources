/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013965d0; name: FUN_013965d0
 */


void FUN_013965d0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long local_48;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar8 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar8;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar9 + -10;
          goto LAB_0139664c;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_0139664c:
  lVar5 = FUN_00adc640(puVar4,*(undefined8 *)(param_1 + 8),param_2);
  local_48 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_38 = 8;
  FUN_00727220(lVar5,*param_3,&local_38);
  local_38 = 0;
  FUN_007273c0(lVar5,1,&local_38);
  lVar5 = FUN_0138a9b0(param_1,&local_48);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_0069ae40(lVar5,*(undefined8 *)(param_1 + 8),param_4,1);
  uVar6 = FUN_00da32a0(lVar5);
  if ((uVar6 & 1) != 0) {
    local_38 = lVar5;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar7 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
        uVar8 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar8;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)PTR_DAT_02715080) {
          puVar9 = puVar9 + -10;
          goto LAB_0139673c;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_0139673c:
    uVar8 = FUN_0134e790(puVar9,*(undefined8 *)(param_1 + 8),&local_38);
    FUN_012ba510(&local_38);
    uVar1 = FUN_012f7310(local_38);
    FUN_00da30e0(uVar8,uVar1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


