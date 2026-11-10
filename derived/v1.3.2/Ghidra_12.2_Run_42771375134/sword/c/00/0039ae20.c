/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ae20; name: FUN_0039ae20
 */


void FUN_0039ae20(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + (param_2 & 0xffffffff) * 0x30);
  if (((plVar1 != (long *)0x0) && (*(int *)(param_1 + (param_2 & 0xffffffff) * 0x30 + 0x28) == 1))
     && (uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,0), (uVar2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}


