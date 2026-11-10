/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d31170; name: FUN_00d31170
 */


void FUN_00d31170(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long local_48;
  
  puVar4 = PTR_DAT_027195c0;
  puVar3 = PTR_DAT_027195b8;
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar2 = *(long **)(param_1 + 0xb8);
joined_r0x00d31190:
  do {
    if (plVar1 == plVar2) {
      return;
    }
    uVar7 = (**(code **)(*(long *)*plVar1 + 0x88))();
    if ((uVar7 & 1) == 0) {
      lVar9 = *plVar1;
      plVar8 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar6 = FUN_00a8c480();
        *(undefined8 *)puVar4 = uVar6;
        __cxa_guard_release(puVar3);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar4) {
          local_48 = *param_2;
          *(undefined1 *)(local_48 + 0x349) = *(undefined1 *)(lVar9 + 0x218);
          FUN_00d31280(lVar9,&local_48);
          plVar1 = plVar1 + 1;
          goto joined_r0x00d31190;
        }
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


