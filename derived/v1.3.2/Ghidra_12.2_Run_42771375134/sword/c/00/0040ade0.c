/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ade0; name: FUN_0040ade0
 */


void FUN_0040ade0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_02712b10;
  *param_1 = (long)(PTR_DAT_02712b10 + 0x10);
  param_1[3] = (long)(puVar1 + 0xa0);
  plVar2 = param_1 + 5;
  *plVar2 = (long)(puVar1 + 200);
  if (param_1[7] != 0) {
    FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,param_1[7],plVar2);
  }
  if (param_1[8] != 0) {
    FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,param_1[8],plVar2);
  }
  param_1[6] = 0;
  FUN_004097c0(param_1);
  return;
}


