/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebced0; name: FUN_00ebced0
 */


void FUN_00ebced0(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)(lVar7 + 0x128) + 0x298);
  lVar6 = *(long *)(lVar4 + 0x128);
  if (lVar6 != 0) {
    lVar4 = lVar6;
  }
  plVar2 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x50))((undefined8 *)(lVar4 + 0x50));
  if (((*PTR_DAT_027153a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027153a0), iVar1 != 0))
  {
    uVar3 = FUN_006ec130();
    *(undefined8 *)PTR_DAT_027153a8 = uVar3;
    __cxa_guard_release(PTR_DAT_027153a0);
  }
  do {
    if (plVar2 == (long *)0x0) {
LAB_00ebcfa4:
      if (lVar7 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00ebcfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      return;
    }
    if (plVar2 == (long *)PTR_DAT_027153a8) {
      pcVar5 = *(code **)(lVar4 + 0x2a8);
      if (pcVar5 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x2b0) = 0;
        *(undefined8 *)(lVar4 + 0x2b8) = 0;
        *(undefined8 *)(lVar4 + 0x2a0) = 0;
        *(undefined8 *)(lVar4 + 0x2a8) = 0;
        (*pcVar5)(lVar4 + 0x2c0);
      }
      *(undefined1 **)(lVar4 + 0x2a0) = &LAB_00ec2740;
      *(undefined1 **)(lVar4 + 0x2a8) = &LAB_00ec2750;
      *(undefined1 **)(lVar4 + 0x2b0) = &LAB_00ec2760;
      *(undefined1 **)(lVar4 + 0x2b8) = &LAB_00ec2770;
      goto LAB_00ebcfa4;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}


