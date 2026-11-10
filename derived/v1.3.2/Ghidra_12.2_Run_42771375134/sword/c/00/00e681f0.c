/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e681f0; name: FUN_00e681f0
 */


bool FUN_00e681f0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(long *)(param_2 + 0x298);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5ecc0(param_2,0xffffffff);
    *(long *)(param_2 + 0x298) = lVar5;
  }
  if ((*(long *)(lVar5 + 0x80) == 0) || (*(int *)(*(long *)(lVar5 + 0x80) + 0x54) == 0))
  goto LAB_00e682c0;
  if (*(long *)(lVar5 + 0x80) == 0) {
LAB_00e68298:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x80) + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      if (((*PTR_DAT_02715280 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02715280), iVar2 != 0)) {
        uVar4 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715288 = uVar4;
        __cxa_guard_release(PTR_DAT_02715280);
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)PTR_DAT_02715288) {
          puVar6 = puVar6 + -10;
          goto LAB_00e6829c;
        }
      }
      goto LAB_00e68298;
    }
  }
LAB_00e6829c:
  FUN_006cb610(puVar6);
  FUN_006cb440(param_1,puVar6,param_3);
  FUN_00dc84d0(lVar5,*(undefined4 *)(lVar5 + 0xa8));
LAB_00e682c0:
  FUN_00dc84d0(*(undefined8 *)(param_2 + 0x298),param_4);
  lVar5 = *(long *)(*(long *)(param_2 + 0x298) + 0x80);
  if (lVar5 == 0) {
    bVar1 = false;
  }
  else {
    plVar3 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    bVar1 = *(int *)(lVar5 + 0x54) != 0;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return bVar1;
}


