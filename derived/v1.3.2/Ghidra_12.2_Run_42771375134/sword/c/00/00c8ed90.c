/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8ed90; name: FUN_00c8ed90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c8ed90(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long local_28;
  
  if (*(int *)(param_1 + 0x5fc) == 1) {
LAB_00c8ee68:
    FUN_00cc17e0(param_1 + 0x1d8);
    return;
  }
  if (*(int *)(param_1 + 0x5fc) == 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    bVar1 = DAT_00000106;
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      bVar1 = *(byte *)(lVar2 + 0x106);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((bVar1 >> 1 & 1) != 0) goto LAB_00c8ee68;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  local_28 = _DAT_00000148;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = *(long *)(lVar2 + 0x148);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_28 = lVar2;
  }
  if (local_28 != 0) {
    FUN_00cc25f0(param_1 + 0x1d8,&local_28);
  }
  return;
}


