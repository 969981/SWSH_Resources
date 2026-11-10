/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d14540; name: FUN_00d14540
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d14540(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)(*(code *)**(undefined8 **)(*param_3 + 0x50))();
  puVar2 = PTR_DAT_0271cdf8;
  plVar1 = (long *)PTR_DAT_0271ce00;
  if ((*PTR_DAT_0271cdf8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_0271cdf8);
    plVar1 = (long *)PTR_DAT_0271ce00;
    if (iVar3 != 0) {
      uVar5 = FUN_00d18170();
      *(undefined8 *)PTR_DAT_0271ce00 = uVar5;
      __cxa_guard_release(PTR_DAT_0271cdf8);
      plVar1 = (long *)PTR_DAT_0271ce00;
    }
  }
  while( true ) {
    PTR_DAT_0271ce00 = (undefined *)plVar1;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)(*(code *)**(undefined8 **)(*param_3 + 0x50))();
      if (((*PTR_DAT_0271ce08 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0271ce08), iVar3 != 0)) {
        uVar5 = FUN_00d18170();
        *(undefined8 *)PTR_DAT_0271ce10 = uVar5;
        __cxa_guard_release(PTR_DAT_0271ce08);
      }
      while( true ) {
        if (plVar4 == (long *)0x0) {
          return;
        }
        if (plVar4 == (long *)PTR_DAT_0271ce10) break;
        plVar4 = (long *)*plVar4;
      }
      if (*(int *)(*(long *)(param_1 + 0x2b8) + 0x720) < *(int *)(param_2 + 0xc)) {
        *(undefined1 *)(*(long *)(param_1 + 0x2b8) + 0x700) = 0;
        lVar6 = *(long *)(param_1 + 0x2b8);
        *(undefined8 *)(lVar6 + 0x718) = 0;
        *(undefined8 *)(lVar6 + 0x710) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x2b8) + 0x720) = 0xffffffff;
        return;
      }
      return;
    }
    if (plVar4 == plVar1) break;
    plVar4 = (long *)*plVar4;
  }
  lVar6 = *param_3;
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0271cdf8), iVar3 != 0)) {
    lVar7 = FUN_00d18170();
    *plVar1 = lVar7;
    __cxa_guard_release(PTR_DAT_0271cdf8);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == plVar1) goto LAB_00d14650;
  }
  lVar6 = 0;
LAB_00d14650:
  if (*(int *)(param_2 + 0xc) < *(int *)(*(long *)(param_1 + 0x2b8) + 0x720)) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x2b8) + 0x700) = 1;
  uVar5 = *(undefined8 *)(lVar6 + 0x360);
  lVar7 = *(long *)(param_1 + 0x2b8);
  *(undefined8 *)(lVar7 + 0x718) = *(undefined8 *)(lVar6 + 0x368);
  *(undefined8 *)(lVar7 + 0x710) = uVar5;
  *(undefined4 *)(*(long *)(param_1 + 0x2b8) + 0x720) = *(undefined4 *)(param_2 + 0xc);
  return;
}


