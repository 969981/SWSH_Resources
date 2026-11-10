/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138cbb0; name: FUN_0138cbb0
 */


void FUN_0138cbb0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar7 + -10;
          goto LAB_0138cc18;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_0138cc18:
  plVar3 = (long *)FUN_01378f50(puVar4,auStack_30);
  (**(code **)(*plVar3 + 0xe0))(plVar3,param_1 + 0x80);
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
    lVar5 = FUN_0138d570(0,auStack_28);
  }
  else {
    puVar4 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar2 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_02715080) {
          puVar2 = puVar7 + -10;
          goto LAB_0138cca0;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      puVar2 = (undefined8 *)0x0;
    }
LAB_0138cca0:
    lVar5 = FUN_0138d570(puVar2,auStack_28);
  }
  if (lVar5 != 0) {
    *(undefined2 *)(lVar5 + 0x75) = 0x101;
    *(undefined8 *)(lVar5 + 0x100) = 0x4479c0004479c000;
    *(undefined4 *)(param_1 + 0x7c) = 0x4479c000;
  }
  FUN_012dc480(param_1,1);
  return;
}


