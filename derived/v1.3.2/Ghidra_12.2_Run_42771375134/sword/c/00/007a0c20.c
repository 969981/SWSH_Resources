/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a0c20; name: FUN_007a0c20
 */


void FUN_007a0c20(long *param_1)

{
  undefined *puVar1;
  
  FUN_006d00e0(param_1,0x6000);
  puVar1 = PTR_DAT_02716628;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined1 *)((long)param_1 + 0x30c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xb] = (long)(puVar1 + 0xa0);
  param_1[9] = (long)(puVar1 + 0x70);
  *(undefined8 *)((long)param_1 + 0x371) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  return;
}


