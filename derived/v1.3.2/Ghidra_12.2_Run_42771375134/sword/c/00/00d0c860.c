/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0c860; name: FUN_00d0c860
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00d0c860(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_60 [3];
  long local_48;
  
  plVar3 = *(long **)(param_1 + 0x78);
  plVar6 = *(long **)(param_1 + 0x80);
  lVar7 = *param_2;
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  do {
    if (plVar6 == plVar3) {
LAB_00d0c8ec:
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      if ((*(long **)(param_1 + 0x80) != plVar6) && (lVar5 = *plVar6, lVar5 != 0)) {
        plVar3 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
        if (((*PTR_DAT_0271cc58 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_0271cc58), iVar2 != 0)) {
          uVar4 = FUN_00cf4bb0();
          *(undefined8 *)PTR_DAT_0271cc60 = uVar4;
          __cxa_guard_release(PTR_DAT_0271cc58);
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)PTR_DAT_0271cc60) {
            return lVar5;
          }
        }
      }
      return 0;
    }
    FUN_006cf0c0(local_60,*plVar3 + 0x5c0);
    lVar1 = local_60[0];
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar1 == lVar7) {
      plVar6 = plVar3;
      goto LAB_00d0c8ec;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


