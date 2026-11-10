/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c83a0; name: FUN_006c83a0
 */


void FUN_006c83a0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  (**(code **)(*param_5 + 0x10))(param_5);
  puVar2 = PTR_DAT_02715298;
  puVar1 = PTR_DAT_02715290;
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x48) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0xa8) + 0x40);
    do {
      if ((*plVar7 != 0) && (puVar6 = *(undefined8 **)(*plVar7 + 0x60), puVar6 != (undefined8 *)0x0)
         ) {
        plVar5 = (long *)(**(code **)*puVar6)(puVar6);
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar4 = FUN_01590a70();
          *(undefined8 *)puVar2 = uVar4;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar2) {
            if ((((*(int *)(puVar6 + 8) == 4) && (*(char *)(puVar6 + 2) != '\0')) &&
                ((*(uint *)(puVar6 + 0x2c) & param_4) != 0)) && (puVar6[0x20] != 0)) {
              FUN_006c84f0(param_1,param_2,param_3,puVar6[0x20],param_5);
            }
            break;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != (long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x40) +
                               *(long *)(*(long *)(param_1 + 0xa8) + 0x48) * 8));
  }
  FUN_006c5d60(param_5);
  return;
}


