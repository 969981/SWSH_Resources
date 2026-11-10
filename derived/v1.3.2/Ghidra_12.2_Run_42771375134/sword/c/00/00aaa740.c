/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaa740; name: FUN_00aaa740
 */


void FUN_00aaa740(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_28;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x4c0) + 0x60), puVar5 == (undefined8 *)0x0)) {
    FUN_00da1bc0(0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
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
          goto LAB_00aaa7c0;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
LAB_00aaa7c0:
    FUN_00da1bc0(puVar3);
    lVar6 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_28 = *(long *)(param_1 + 0x4c0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_00c7a010(lVar6,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  FUN_00ac8dd0(param_1);
  *(undefined1 *)(param_1 + 0x4c8) = 0;
  return;
}


