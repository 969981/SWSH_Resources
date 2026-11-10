/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468aa0; name: FUN_00468aa0
 */


void FUN_00468aa0(void *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712e50;
  if (param_1 == (void *)0x0) {
    FUN_00433950(PTR_DAT_02712e50);
    return;
  }
  memcpy(PTR_DAT_02712e50,param_1,0x90);
  if (*(short *)(puVar1 + 0x8c) == 0) {
    *(undefined2 *)(puVar1 + 0x8c) = 4;
  }
  memcpy(param_1,PTR_DAT_02712e50,0x90);
  return;
}


