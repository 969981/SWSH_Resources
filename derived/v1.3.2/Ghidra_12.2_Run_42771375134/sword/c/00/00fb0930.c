/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb0930; name: FUN_00fb0930
 */


void FUN_00fb0930(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [8];
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x198);
  *(long *)(param_1 + 0x198) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar6 = *(long *)(param_1 + 0x198);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if ((lVar6 == 0) || (puVar7 = *(undefined8 **)(lVar6 + 0x60), puVar7 == (undefined8 *)0x0)) {
    lVar6 = FUN_007959b0(0,auStack_28);
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar7 + -10;
          goto LAB_00fb09e8;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
LAB_00fb09e8:
    lVar6 = FUN_007959b0(puVar4,auStack_28);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x350);
    iVar1 = FUN_00722fb0(lVar6,param_3);
    if (iVar1 < 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x1b8) + (long)iVar1 * 0x130;
    }
    *(long *)(param_1 + 0x1a0) = lVar6;
  }
  return;
}


