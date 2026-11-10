/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c3480; name: FUN_014c3480
 */


void FUN_014c3480(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *__dest;
  long lVar10;
  long lVar11;
  long lVar12;
  
  plVar8 = (long *)FUN_00786900(param_2);
  puVar6 = PTR_DAT_02716320;
  puVar5 = PTR_DAT_02716318;
  puVar4 = PTR_DAT_02716310;
  puVar3 = PTR_DAT_02716308;
  if (plVar8 == (long *)0x0) {
LAB_014c35c8:
    if (*(long *)(*(long *)(param_1 + 0xaf0) + 0x48) == 0) {
      *(undefined1 *)(param_1 + 0xc20) = 1;
      return;
    }
    FUN_014c4ee0(*(undefined8 *)(param_1 + 0x260));
    FUN_014c4ee0(*(undefined8 *)(param_1 + 0x260));
    FUN_014c4ee0(*(undefined8 *)(param_1 + 0x268));
    FUN_014c4ee0(*(undefined8 *)(param_1 + 0x268));
    return;
  }
LAB_014c3520:
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      *(undefined8 *)puVar6 = 0;
      __cxa_guard_release(puVar5);
    }
    *(undefined **)puVar4 = puVar6;
    __cxa_guard_release(puVar3);
  }
  for (plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8); plVar9 != (long *)0x0;
      plVar9 = (long *)*plVar9) {
    if (plVar9 == (long *)puVar4) {
      lVar12 = *(long *)(param_1 + 0xaf0);
      __dest = *(undefined8 **)(lVar12 + 0x40);
      lVar10 = *(long *)(lVar12 + 0x48);
      puVar2 = __dest + lVar10 * 2;
      if ((lVar10 == 0) || ((long *)*__dest == plVar8)) goto LAB_014c3594;
      lVar11 = lVar10 * 0x10;
      goto LAB_014c3574;
    }
  }
  goto LAB_014c35b8;
  while (puVar1 = __dest + 2, __dest = __dest + 2, (long *)*puVar1 != plVar8) {
LAB_014c3574:
    lVar11 = lVar11 + -0x10;
    if (lVar11 == 0) goto LAB_014c35b8;
  }
LAB_014c3594:
  if (puVar2 != __dest) {
    __n = (long)puVar2 - (long)(__dest + 2);
    if (__n != 0) {
      memmove(__dest,__dest + 2,__n);
      lVar10 = *(long *)(lVar12 + 0x48);
    }
    *(long *)(lVar12 + 0x48) = lVar10 + -1;
  }
LAB_014c35b8:
  plVar8 = (long *)FUN_019cddc0(plVar8);
  if (plVar8 == (long *)0x0) goto LAB_014c35c8;
  goto LAB_014c3520;
}


