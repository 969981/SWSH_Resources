/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a09a0; name: FUN_002a09a0
 */


void FUN_002a09a0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_0029fec0();
  puVar1 = PTR_DAT_02711f98;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[2] = (long)(puVar1 + 0xd0);
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x90);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_3 + 0x94);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_3 + 0x98);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(param_3 + 0x9c);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_3 + 0xa0);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_3 + 0xa4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_3 + 0xa8);
  *(undefined4 *)((long)param_1 + 0xbc) = *(undefined4 *)(param_3 + 0xac);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0xb0);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(param_3 + 0xb4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_3 + 0xb8);
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)(param_3 + 0xbc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_3 + 0xc0);
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_3 + 0xc4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_3 + 200);
  *(undefined4 *)((long)param_1 + 0xdc) = *(undefined4 *)(param_3 + 0xcc);
  param_1[0x1f] = *(long *)(param_3 + 0xe8);
  param_1[0x1e] = *(long *)(param_3 + 0xe0);
  param_1[0x1d] = *(long *)(param_3 + 0xd8);
  param_1[0x1c] = *(long *)(param_3 + 0xd0);
  *(undefined8 *)(param_3 + 0xe8) = 0;
  return;
}


