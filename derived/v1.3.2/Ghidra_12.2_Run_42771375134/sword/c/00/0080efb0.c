/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080efb0; name: FUN_0080efb0
 */


long FUN_0080efb0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = param_3 + 7U & 0xfffffffffffffff8;
  if ((param_1[6] != 0) && ((code *)param_1[0x10] != (code *)0x0)) {
    (*(code *)param_1[0x10])(param_2,uVar3);
  }
  lVar1 = tpidr_el0;
  if ((((*(long *)(lVar1 + 0x10) == *param_1) &&
       (plVar2 = *(long **)(lVar1 + 0x18), plVar2 != (long *)0x0)) ||
      ((plVar2 = (long *)param_1[2], plVar2 != (long *)0x0 && (*plVar2 == lVar1 + 0x10)))) &&
     (lVar1 = plVar2[2], uVar3 <= (ulong)(plVar2[3] - lVar1))) {
    plVar2[2] = lVar1 + uVar3;
    return (long)plVar2 + lVar1;
  }
  lVar1 = FUN_0080f090(param_1,uVar3);
  return lVar1;
}


