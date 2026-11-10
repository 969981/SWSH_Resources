/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2cfa0; name: FUN_00f2cfa0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00f2cfa0(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar6 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar6 == plVar1) {
      *param_1 = 0;
      return;
    }
    lVar8 = *plVar6;
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))((undefined8 *)(lVar8 + 0x50));
    lVar4 = FUN_015bed20();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        if ((*(long *)(lVar8 + 0x3a0) == 0x776775717ea4468b) &&
           (uVar5 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar5 & 1) == 0)) {
          lVar4 = *(long *)(lVar8 + 0x618);
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          plVar6 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x50))((undefined8 *)(lVar4 + 0x50));
          if (((*PTR_DAT_02720968 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_02720968), iVar2 != 0)) {
            uVar7 = FUN_00f10020();
            *(undefined8 *)PTR_DAT_02720970 = uVar7;
            __cxa_guard_release(PTR_DAT_02720968);
          }
          goto joined_r0x00f2d138;
        }
        break;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
joined_r0x00f2d138:
  if (plVar6 == (long *)0x0) {
    *param_1 = 0;
joined_r0x00f2d0d4:
    if (lVar4 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00f2d0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    return;
  }
  if (plVar6 == (long *)PTR_DAT_02720970) {
    *param_1 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
    goto joined_r0x00f2d0d4;
  }
  plVar6 = (long *)*plVar6;
  goto joined_r0x00f2d138;
}


