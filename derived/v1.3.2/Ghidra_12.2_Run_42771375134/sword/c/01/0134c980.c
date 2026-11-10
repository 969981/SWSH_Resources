/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134c980; name: FUN_0134c980
 */


void FUN_0134c980(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_01311a80(param_1,0);
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  puVar2 = PTR_DAT_027152c0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  puVar3 = PTR_DAT_02728388;
  *param_1 = (long)(PTR_DAT_02728388 + 0x10);
  param_1[9] = (long)(puVar3 + 0x90);
  param_1[10] = (long)(puVar3 + 0xd0);
  lVar1 = *(long *)(puVar2 + 8);
  param_1[0x16] = *(long *)puVar2;
  param_1[0x17] = lVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}


