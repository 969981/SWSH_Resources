/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6c8d0; name: FUN_00d6c8d0
 */


void FUN_00d6c8d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  FUN_006dae20(param_1,0);
  puVar5 = PTR_DAT_0271e2b0;
  param_1[0x25] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[9] = (long)(puVar5 + 0xa8);
  param_1[10] = (long)(puVar5 + 0x118);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar5 = PTR_DAT_02715420;
  param_1[0x23] = 0x1010100ffffffff;
  param_1[0x24] = 0;
  lVar1 = *(long *)puVar5;
  lVar3 = *(long *)(puVar5 + 8);
  param_1[0x28] = lVar1;
  param_1[0x29] = lVar3;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  lVar2 = *(long *)PTR_DAT_027152c0;
  lVar4 = *(long *)(PTR_DAT_027152c0 + 8);
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x2e] = lVar1;
  param_1[0x2f] = lVar3;
  param_1[0x2c] = lVar2;
  param_1[0x2d] = lVar4;
  param_1[0x30] = lVar1;
  param_1[0x31] = lVar3;
  return;
}


