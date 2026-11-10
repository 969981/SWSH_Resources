/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01483000; name: FUN_01483000
 */


void FUN_01483000(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ff9400();
  puVar1 = PTR_DAT_0272a060;
  *param_1 = (long)(PTR_DAT_0272a060 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0xe8);
  *(undefined2 *)((long)param_1 + 0x5cb) = 0;
  *(undefined1 *)((long)param_1 + 0x5cd) = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 3;
  FUN_012b4040(param_1 + 0xf3);
  FUN_0168ad10(param_1 + 0xf6);
  puVar1 = PTR_DAT_027233e8 + 0x10;
  param_1[0xf6] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x170);
  param_1[0x170] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x1ea);
  param_1[0x1ea] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x264);
  param_1[0x264] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x2de);
  param_1[0x2de] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x358);
  param_1[0x358] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x3d2);
  param_1[0x3d2] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x44c);
  param_1[0x44c] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x4c6);
  param_1[0x4c6] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x540);
  param_1[0x540] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x5ba);
  param_1[0x5ba] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x634);
  param_1[0x634] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x6ae);
  param_1[0x6ae] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x728);
  param_1[0x728] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x7a2);
  param_1[0x7a2] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x81c);
  param_1[0x81c] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x896);
  param_1[0x896] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x910);
  param_1[0x910] = (long)puVar1;
  FUN_0168ad10(param_1 + 0x98a);
  param_1[0x98a] = (long)puVar1;
  FUN_0168ad10(param_1 + 0xa04);
  param_1[0xa04] = (long)puVar1;
  FUN_0168ad10(param_1 + 0xa7e);
  param_1[0xa7e] = (long)puVar1;
  FUN_0168ad10(param_1 + 0xaf8);
  param_1[0xaf8] = (long)puVar1;
  FUN_0168ad10(param_1 + 0xb72);
  param_1[0xb72] = (long)puVar1;
  FUN_0168ad10(param_1 + 0xbec);
  param_1[0xbec] = (long)puVar1;
  FUN_0168ad10(param_1 + 0xc66);
  param_1[0xc66] = (long)puVar1;
  *(undefined4 *)(param_1 + 0xce0) = 0xff;
  *(undefined4 *)(param_1 + 0xce3) = 0;
  param_1[0xce2] = 0;
  param_1[0xce1] = 0;
  return;
}


