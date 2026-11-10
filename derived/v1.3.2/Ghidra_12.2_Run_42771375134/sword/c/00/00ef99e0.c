/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef99e0; name: FUN_00ef99e0
 */


void FUN_00ef99e0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long local_30;
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  local_30 = *param_3;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  FUN_0101bff0(param_1,&local_28,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  puVar1 = PTR_DAT_027202c0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  param_1[0x15] = 0;
  param_1[0x13] = -0x340d631b7bddd9bb;
  param_1[0x14] = -0x340d631b7bddd9bb;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)((long)param_1 + 0x8c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xc0);
  param_1[10] = (long)(puVar1 + 0x100);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_008d4290(param_1 + 0x1e);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_006c5dc0(param_1 + 0x22);
  FUN_006c5dc0(param_1 + 0x45);
  param_1[0x68] = 0;
  FUN_00796e80(param_1 + 0x6a);
  param_1[0xc4] = 0xf4b17a579f18960;
  param_1[0xc5] = -0x7d5d4e8add6295a5;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  *(undefined8 *)((long)param_1 + 0x66c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x674) = 0;
  *(undefined2 *)((long)param_1 + 0x67c) = 0x100;
  *(undefined1 *)((long)param_1 + 0x6aa) = 0;
  *(undefined2 *)(param_1 + 0xd5) = 0;
  param_1[0xd4] = 0;
  *(undefined8 *)((long)param_1 + 0x6ac) = 0x800000000;
  *(undefined8 *)((long)param_1 + 0x695) = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  *(undefined1 *)((long)param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)((long)param_1 + 0x6bc) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xda] = (long)PTR_LAB_02718fa8;
  param_1[0xdb] = (long)PTR_FUN_02718fa0;
  param_1[0xdc] = (long)PTR_LAB_02718fb0;
  param_1[0xdd] = (long)PTR_LAB_02718fb8;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  *(undefined4 *)((long)param_1 + 0x794) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 1;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  return;
}


