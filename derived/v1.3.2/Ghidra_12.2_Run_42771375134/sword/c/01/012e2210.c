/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e2210; name: FUN_012e2210
 */


void FUN_012e2210(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_0130ebb0();
  *(undefined4 *)(param_1 + 0x61) = 0;
  puVar4 = PTR_DAT_02727aa0;
  *(undefined2 *)((long)param_1 + 0x30c) = 0;
  puVar3 = PTR_DAT_027152c0;
  param_1[0x66] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0xc0);
  param_1[10] = (long)(puVar4 + 0x130);
  lVar1 = *(long *)puVar3;
  lVar2 = *(long *)(puVar3 + 8);
  param_1[99] = lVar2;
  param_1[0x62] = lVar1;
  param_1[0x65] = lVar2;
  param_1[100] = lVar1;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6c] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_0131ad70(param_1 + 0x6e);
  FUN_0131f4b0(param_1 + 0x7c);
  FUN_0131e1c0(param_1 + 0x8a);
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0xa2,0,0x218);
}


