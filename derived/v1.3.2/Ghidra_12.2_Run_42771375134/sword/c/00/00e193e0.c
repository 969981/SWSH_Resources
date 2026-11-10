/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e193e0; name: FUN_00e193e0
 */


void FUN_00e193e0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *local_58;
  long *local_48;
  
  puVar2 = PTR_DAT_0271ef98;
  puVar1 = PTR_DAT_0271ef90;
  plVar8 = *(long **)(param_1 + 0x210);
  plVar9 = *(long **)(param_1 + 0x218);
  if (plVar8 != plVar9) {
    do {
      if ((*plVar8 != 0) && (puVar7 = *(undefined8 **)(*plVar8 + 0x60), puVar7 != (undefined8 *)0x0)
         ) {
        plVar5 = (long *)(**(code **)*puVar7)(puVar7);
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar4 = FUN_00e1ca40();
          *(undefined8 *)puVar2 = uVar4;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar2) {
            plVar5 = puVar7 + -10;
            uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5);
            if ((uVar6 & 1) == 0) {
              local_58 = plVar5;
              local_48 = plVar8;
              (*(code *)*param_2)(param_2 + 4,&local_48,&local_58);
            }
            break;
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar9);
  }
  return;
}


