/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acd3a0; name: FUN_00acd3a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acd3a0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_00ac5750();
  *(undefined1 *)((long)param_1 + 0x4ba) = 0;
  puVar3 = PTR_DAT_02719920;
  *(undefined4 *)((long)param_1 + 0x4bc) = 0xffff;
  *(undefined2 *)(param_1 + 0x97) = 1;
  *(undefined4 *)((long)param_1 + 0x4c4) = 1;
  *(undefined2 *)((long)param_1 + 0x4d4) = 1;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  param_1[9] = (long)(puVar3 + 0x250);
  param_1[10] = (long)(puVar3 + 0x290);
  param_1[0x9b] = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x4e4) = 0x3f8000000000000f;
  *(undefined1 *)((long)param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined2 *)((long)param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined2 *)((long)param_1 + 0x4fc) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x50c) = 0;
  *(undefined1 *)((long)param_1 + 0x50e) = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  FUN_012b4040(param_1 + 0xa4);
  FUN_012b4040(param_1 + 0xa6);
  FUN_012b4040(param_1 + 0xa8);
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)((long)param_1 + 0x554) = 0;
  lVar2 = _UNK_01d4a138;
  lVar1 = _DAT_01d4a130;
  *(undefined8 *)((long)param_1 + 0x56a) = 0;
  *(undefined8 *)((long)param_1 + 0x564) = 0;
  *(undefined8 *)((long)param_1 + 0x55c) = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x10;
  param_1[0xb1] = lVar2;
  param_1[0xb0] = lVar1;
  return;
}


