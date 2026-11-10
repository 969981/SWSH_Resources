/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024f230; name: FUN_0024f230
 */


void FUN_0024f230(long *param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x30001;
  puVar1 = PTR_DAT_02711e78;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = param_2;
  param_1[2] = (long)(puVar1 + 0xe0);
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 5) = param_3[2];
  *(undefined4 *)((long)param_1 + 0x2c) = param_3[3];
  *(undefined4 *)(param_1 + 6) = param_3[4];
  *(undefined4 *)((long)param_1 + 0x34) = param_3[5];
  memcpy(param_1 + 7,param_3 + 6,0x28);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 100) = param_3[0x11];
  *(undefined8 *)(param_3 + 0xc) = 0;
  return;
}


