/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01399620; name: FUN_01399620
 */


void FUN_01399620(long *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  *param_1 = 0;
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
    lVar5 = FUN_01392ce0(0,auStack_38);
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
          goto LAB_0139970c;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
LAB_0139970c:
    lVar5 = FUN_01392ce0(puVar4,auStack_38);
  }
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x118), lVar5 != 0)) {
    plVar8 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar5 = FUN_01381490(lVar5,auStack_28);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar3 = *param_1;
    *param_1 = lVar5;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  return;
}


