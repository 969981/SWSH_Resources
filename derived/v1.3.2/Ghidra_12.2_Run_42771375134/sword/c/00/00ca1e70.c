/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca1e70; name: FUN_00ca1e70
 */


void FUN_00ca1e70(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  int *local_1b0;
  long *local_1a8;
  long local_150;
  long local_148;
  long local_140 [32];
  int local_34;
  
  local_34 = 0;
  FUN_00c58c00(&local_148,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar3 = local_148;
  local_150 = *param_1;
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x10))();
  }
  local_1b0 = &local_34;
  local_1a8 = local_140;
  local_1c0 = &LAB_00ca5a60;
  local_1b8 = &LAB_00ca5a70;
  local_1d0 = &LAB_00ca5a20;
  local_1c8 = FUN_00ca5a50;
  FUN_00c7a2b0(lVar3,&local_150,&local_1d0);
  pcVar1 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar1)(&local_1b0);
  }
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
    local_150 = 0;
  }
  if (0 < local_34) {
    lVar3 = 0;
    iVar2 = local_34;
    do {
      if ((undefined1 *)local_140[lVar3] != (undefined1 *)0x0) {
        local_1d0 = (undefined1 *)local_140[lVar3];
        (*(code *)*param_2)(param_2 + 4,&local_1d0);
        iVar2 = local_34;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
  }
  return;
}


