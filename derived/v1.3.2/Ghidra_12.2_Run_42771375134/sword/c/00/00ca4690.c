/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca4690; name: FUN_00ca4690
 */


void FUN_00ca4690(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **local_180;
  int *local_178;
  long *plStack_170;
  long *local_160;
  long local_148;
  long local_140;
  int local_134;
  long local_130 [32];
  
  local_134 = 0;
  FUN_00c58c00(&local_140,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar5 = local_140;
  local_148 = *param_1;
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
  }
  local_180 = &PTR_LAB_02641808;
  local_178 = &local_134;
  plStack_170 = local_130;
  local_160 = (long *)&local_180;
  FUN_00c7a240(lVar5,&local_148,&local_180);
  if (&local_180 == (undefined ***)local_160) {
    pcVar3 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) goto LAB_00ca473c;
    pcVar3 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar3)();
LAB_00ca473c:
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  if (0 < local_134) {
    lVar5 = 0;
    iVar2 = local_134;
    do {
      ppuVar4 = (undefined **)local_130[lVar5];
      if (ppuVar4 != (undefined **)0x0) {
        plVar1 = *(long **)(param_2 + 0x20);
        local_180 = ppuVar4;
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_180);
        iVar2 = local_134;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
  }
  return;
}


