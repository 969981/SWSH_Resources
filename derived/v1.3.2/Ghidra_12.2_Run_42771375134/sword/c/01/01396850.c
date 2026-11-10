/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01396850; name: FUN_01396850
 */


void FUN_01396850(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_01381490(*param_2,auStack_28);
  if (lVar1 != 0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x118);
    *(long *)(param_1 + 0x118) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  return;
}


