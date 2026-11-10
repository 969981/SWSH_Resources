/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e41480; name: FUN_00e41480
 */


void FUN_00e41480(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if (((*(long **)(param_1 + 0x418) != *(long **)(param_1 + 0x420)) &&
      (lVar4 = **(long **)(param_1 + 0x418), lVar4 != 0)) &&
     (puVar5 = *(undefined8 **)(lVar4 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
      uVar3 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar3;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_027150b0) {
        lVar4 = *(long *)(param_1 + 0x5b0);
        puVar5 = puVar5 + -10;
        if (*(long *)(param_1 + 0x5b8) != lVar4) {
          uVar6 = 0;
          do {
            local_38[0] = 1;
            local_34 = (undefined4)uVar6;
            FUN_0069d120(puVar5,local_38,*(undefined4 *)(lVar4 + uVar6 * 4));
            lVar4 = *(long *)(param_1 + 0x5b0);
            uVar6 = uVar6 + 1;
          } while (uVar6 < (ulong)(*(long *)(param_1 + 0x5b8) - lVar4 >> 2));
        }
        lVar4 = *(long *)(param_1 + 0x5e0);
        if (*(long *)(param_1 + 0x5e8) != lVar4) {
          uVar6 = 0;
          do {
            local_38[0] = 1;
            local_34 = (undefined4)uVar6;
            FUN_0069d190(*(undefined4 *)(lVar4 + uVar6 * 4),puVar5,local_38);
            lVar4 = *(long *)(param_1 + 0x5e0);
            uVar6 = uVar6 + 1;
          } while (uVar6 < (ulong)(*(long *)(param_1 + 0x5e8) - lVar4 >> 2));
        }
        if (*(long *)(param_1 + 0x618) == 0) {
          return;
        }
        uVar6 = 0;
        do {
          local_38[0] = 1;
          local_34 = (undefined4)uVar6;
          FUN_0069d200(puVar5,local_38,
                       (*(ulong *)(*(long *)(param_1 + 0x610) + (uVar6 >> 3 & 0x1ffffffffffffff8)) &
                       1L << (uVar6 & 0x3f)) != 0);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulong *)(param_1 + 0x618));
        return;
      }
    }
  }
  return;
}


