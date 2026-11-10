/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbf0f0; name: FUN_00dbf0f0
 */


void FUN_00dbf0f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_b0 [104];
  undefined8 *local_48;
  
  puVar2 = PTR_DAT_027150b0;
  puVar1 = PTR_DAT_027150a8;
  plVar7 = *(long **)(param_1 + 0x418);
  plVar8 = *(long **)(param_1 + 0x420);
  if (plVar7 != plVar8) {
    do {
      if ((*plVar7 != 0) && (puVar6 = *(undefined8 **)(*plVar7 + 0x60), puVar6 != (undefined8 *)0x0)
         ) {
        plVar5 = (long *)(**(code **)*puVar6)(puVar6);
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar4 = FUN_00706e40();
          *(undefined8 *)puVar2 = uVar4;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar2) {
            local_48 = puVar6 + -10;
            FUN_00dc24d0(auStack_b0,&local_48);
            break;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
  }
  FUN_00dc24e0(auStack_b0);
  return;
}


