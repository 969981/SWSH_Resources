/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaf460; name: FUN_00aaf460
 */


void FUN_00aaf460(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x4b8) != 0) {
    FUN_00ac8dd0();
    puVar1 = PTR_DAT_02717598;
    if (*(int *)(param_1 + 0x4d8) != 0) {
      uVar2 = FUN_00895a90(*(undefined8 *)PTR_DAT_02717598);
      if ((uVar2 & 1) != 0) {
        FUN_00895a40(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x4d8));
      }
    }
    if (*(long *)(param_1 + 0x4b8) != 0) {
      FUN_00895d70();
      plVar3 = *(long **)(param_1 + 0x4b8);
      *(undefined8 *)(param_1 + 0x4b8) = 0;
      puVar1 = PTR_DAT_027175d0;
      if (plVar3 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x4b8) = 0;
      }
      else {
        *plVar3 = (long)(PTR_DAT_027175d0 + 0x10);
        if (plVar3[1] != 0) {
          (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
          plVar3[1] = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x4c0) + 0x18))
                  (*(long **)(param_1 + 0x4c0),plVar3,*(undefined8 *)(param_1 + 0x4c8),
                   *(undefined8 *)(param_1 + 0x4d0));
        plVar3 = *(long **)(param_1 + 0x4b8);
        *(undefined8 *)(param_1 + 0x4b8) = 0;
        if (plVar3 != (long *)0x0) {
          *plVar3 = (long)(puVar1 + 0x10);
          if (plVar3[1] != 0) {
            (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
            plVar3[1] = 0;
          }
                    /* WARNING: Could not recover jumptable at 0x00aaf554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x4c0) + 0x18))
                    (*(long **)(param_1 + 0x4c0),plVar3,*(undefined8 *)(param_1 + 0x4c8),
                     *(undefined8 *)(param_1 + 0x4d0));
          return;
        }
      }
    }
  }
  return;
}


