/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137e350; name: FUN_0137e350
 */


void FUN_0137e350(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_28 [8];
  
  iVar1 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xb4) = iVar1 + -1;
  lVar4 = (long)(iVar1 + -2) * 8;
  *(float *)(param_1 + 0xb0) =
       (*(float *)(&DAT_0216c568 + lVar4) * DAT_01d4bba4 +
       *(float *)(&DAT_0216c56c + lVar4) * DAT_01d4be10) * DAT_01d4c6b8;
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    lVar4 = FUN_0137e800(0,auStack_28);
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
          goto LAB_0137e418;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
LAB_0137e418:
    lVar4 = FUN_0137e800(puVar3,auStack_28);
  }
  if (lVar4 != 0) {
    FUN_0137fc10(lVar4,*(undefined4 *)(param_1 + 0xb4));
  }
  return;
}


