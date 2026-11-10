/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01453840; name: FUN_01453840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01453840(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  lVar3 = _DAT_00000060;
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = *(long *)(lVar1 + 0x60);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00fd6670(*(undefined8 *)(param_1 + 0x720));
  return;
}


