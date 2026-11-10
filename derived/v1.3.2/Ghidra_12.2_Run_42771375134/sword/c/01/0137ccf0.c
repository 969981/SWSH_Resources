/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137ccf0; name: FUN_0137ccf0
 */


void FUN_0137ccf0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 auStack_50 [24];
  long local_38;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    lVar4 = FUN_00c754c0(0,auStack_50);
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar3 = puVar6 + -10;
          goto LAB_0137cd70;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
LAB_0137cd70:
    lVar4 = FUN_00c754c0(puVar3,auStack_50);
  }
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_006cf0a0(auStack_50,&DAT_02696d98);
    local_28 = FUN_0069d160(lVar4,auStack_50);
    FUN_0069d190(*(float *)(param_1 + 0x94) / *(float *)(param_1 + 0x88),lVar4,&local_28);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  return;
}


