/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a5370; name: FUN_012a5370
 */


void FUN_012a5370(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = *(long *)PTR_DAT_02727290;
  if ((lVar3 == 0) || (uVar2 = FUN_012a88c0(lVar3), (uVar2 & 1) != 0)) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_02710958;
  if (lVar4 != 0) {
    FUN_01210ee0(lVar4);
    FUN_01210e50(lVar4);
  }
  FUN_012a88e0(lVar3,param_1 + 0x368);
  FUN_012a8940(lVar3,param_1 + 0x370);
  FUN_012a85e0(lVar3);
  if ((*(long *)PTR_DAT_02710798 != 0) &&
     (lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8), lVar4 != 0)) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar1 = FUN_01524c00(lVar4);
    FUN_012a89a0(lVar3,uVar1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  FUN_012a9d80(lVar3);
  return;
}


