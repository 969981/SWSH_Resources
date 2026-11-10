/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138bcd0; name: FUN_0138bcd0
 */


void FUN_0138bcd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [8];
  
  lVar2 = FUN_0137c8d0(param_1,param_3);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x80);
  }
  FUN_00794370(lVar2,param_2);
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
    lVar2 = FUN_0137a500(0,auStack_28);
  }
  else {
    puVar4 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_02715080) {
          puVar5 = puVar7 + -10;
          goto LAB_0138bd98;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      puVar5 = (undefined8 *)0x0;
    }
LAB_0138bd98:
    lVar2 = FUN_0137a500(puVar5,auStack_28);
  }
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    iVar1 = FUN_01383c00();
    FUN_00794650(uVar6,&DAT_02a71010 + (long)iVar1 * 4);
  }
  return;
}


