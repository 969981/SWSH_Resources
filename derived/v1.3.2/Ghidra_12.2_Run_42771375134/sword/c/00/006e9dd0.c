/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e9dd0; name: FUN_006e9dd0
 */


undefined8 FUN_006e9dd0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 < 2) {
    plVar4 = *(long **)(param_1 + 8);
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
      param_1 = param_1 + (long)(int)param_2 * 0x20;
      puVar1 = (undefined8 *)(param_1 + 0x10);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_006f1ab0(uVar2);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      plVar5 = (long *)*puVar1;
      *puVar1 = uVar2;
      if (plVar5 != (long *)0x0) {
        if (plVar5[1] != 0) {
          (**(code **)(*(long *)(plVar5[1] + 0x48) + 0x18))();
          plVar5[1] = 0;
        }
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          *plVar5 = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                  (*(long **)(param_1 + 0x18),plVar5,*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28));
        uVar2 = *puVar1;
      }
      *(long **)(param_1 + 0x18) = plVar4;
      *(undefined8 *)(param_1 + 0x20) = 0x18;
      *(undefined8 *)(param_1 + 0x28) = 8;
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


