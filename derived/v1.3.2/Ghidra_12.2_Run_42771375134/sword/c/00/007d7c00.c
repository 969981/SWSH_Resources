/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d7c00; name: FUN_007d7c00
 */


void FUN_007d7c00(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[1];
  for (param_1 = (long *)*param_1; param_1 != plVar1; param_1 = param_1 + 1) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      *(undefined1 *)(lVar2 + 0x60) = 1;
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return;
}


