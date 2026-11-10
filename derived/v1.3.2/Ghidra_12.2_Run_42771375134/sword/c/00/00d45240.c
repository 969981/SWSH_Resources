/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d45240; name: FUN_00d45240
 */


void FUN_00d45240(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_0271d038;
  puVar1 = PTR_DAT_0271d030;
  if (*(long *)(param_2 + 0x108) != 0) {
    plVar7 = *(long **)(param_2 + 0x100);
    do {
      plVar4 = (long *)(*(code *)**(undefined8 **)(*plVar7 + 0x50))();
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar5 = FUN_00d18170();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar1);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)puVar2) {
          lVar6 = *plVar7;
          plVar7 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
          if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0271d030), iVar3 != 0)) {
            uVar5 = FUN_00d18170();
            *(undefined8 *)puVar2 = uVar5;
            __cxa_guard_release(PTR_DAT_0271d030);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar2) {
              *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00d45360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
              return;
            }
          }
          goto LAB_00d45324;
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != (long *)(*(long *)(param_2 + 0x100) + *(long *)(param_2 + 0x108) * 8));
  }
LAB_00d45324:
  *param_1 = 0;
  return;
}


