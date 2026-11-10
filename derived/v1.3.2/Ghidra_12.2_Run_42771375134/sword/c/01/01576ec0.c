/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01576ec0; name: FUN_01576ec0
 */


void FUN_01576ec0(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_0272afa0;
  puVar3 = PTR_DAT_0272af98;
  puVar2 = PTR_DAT_02710b90;
  puVar1 = PTR_DAT_027107f0;
  if ((*param_3 != -0x340d631b7bddd9bb) && (*param_4 != -0x340d631b7bddd9bb)) {
    plVar9 = *(long **)(param_2 + 0x3c8);
    for (plVar8 = *(long **)(param_2 + 0x3c0); plVar8 != plVar9; plVar8 = plVar8 + 1) {
      if (((*plVar8 != 0) && (plVar6 = (long *)FUN_01577a30(), *param_3 == *plVar6)) &&
         (plVar6 = (long *)FUN_01577a50(*plVar8), *param_4 == *plVar6)) {
        lVar7 = *plVar8;
        plVar6 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          if (((*PTR_DAT_02710ba0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02710ba0), iVar5 != 0)) {
            if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
              *(undefined8 *)PTR_DAT_027107f8 = 0;
              __cxa_guard_release(puVar1);
            }
            *(undefined **)puVar2 = PTR_DAT_027107f8;
            __cxa_guard_release(PTR_DAT_02710ba0);
          }
          *(undefined **)puVar4 = puVar2;
          __cxa_guard_release(puVar3);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar4) {
            *param_1 = lVar7;
                    /* WARNING: Could not recover jumptable at 0x015770a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
            return;
          }
        }
      }
    }
  }
  *param_1 = 0;
  return;
}


