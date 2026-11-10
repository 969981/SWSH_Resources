/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f05550; name: FUN_00f05550
 */


void FUN_00f05550(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_28;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar1 == 0) {
    FUN_00f055f0(&local_28,0);
    *param_1 = local_28;
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_00f055f0(&local_28,lVar1);
  *param_1 = local_28;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


