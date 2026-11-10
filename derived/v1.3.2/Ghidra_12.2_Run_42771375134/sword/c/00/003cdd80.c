/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cdd80; name: FUN_003cdd80
 */


void FUN_003cdd80(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_30;
  char local_24 [4];
  
  local_30 = param_3;
  puVar2 = (undefined8 *)FUN_003d6d40(param_1 + 0x1498,&local_30,local_24);
  if (local_24[0] == '\0') {
    *puVar2 = local_30;
    puVar2[1] = 0;
    puVar2[2] = 0;
    return;
  }
  plVar3 = (long *)puVar2[2];
  plVar1 = puVar2 + 2;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return;
    }
    plVar4 = plVar3 + 1;
    if (*plVar3 == param_2) break;
    plVar3 = (long *)*plVar4;
    plVar1 = plVar4;
  }
  *plVar1 = plVar3[1];
  *(int *)(param_1 + 0x1484) = *(int *)(param_1 + 0x1484) + -1;
  *plVar3 = *(long *)(param_1 + 0x1490);
  *(long **)(param_1 + 0x1490) = plVar3;
  return;
}


