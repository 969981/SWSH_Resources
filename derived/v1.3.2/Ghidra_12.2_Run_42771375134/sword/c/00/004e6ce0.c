/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e6ce0; name: FUN_004e6ce0
 */


void FUN_004e6ce0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02712d30 + 0x10);
  FUN_0045a110();
  FUN_00458b30(param_1 + 0xc);
  FUN_00458b30(param_1 + 4);
  *param_1 = (long)(PTR_DAT_02712d28 + 0x10);
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_02712d38;
  lVar3 = param_1[3];
  plVar1 = (long *)(PTR_DAT_02712d38 + 0x10);
  if (*(long **)(PTR_DAT_02712d38 + 0x10) != param_1) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = lVar4;
  if (*(long **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


