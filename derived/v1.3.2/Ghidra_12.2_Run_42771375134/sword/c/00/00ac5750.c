/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac5750; name: FUN_00ac5750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac5750(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_00db5850(param_1,param_3,param_4,param_5);
  param_1[0x78] = param_2;
  puVar3 = PTR_DAT_02719760;
  *(undefined4 *)((long)param_1 + 0x3fc) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[9] = (long)(puVar3 + 0x250);
  param_1[10] = (long)(puVar3 + 0x290);
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  lVar2 = _UNK_01d4a138;
  lVar1 = _DAT_01d4a130;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  param_1[0x81] = lVar2;
  param_1[0x80] = lVar1;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x101;
  *(undefined2 *)((long)param_1 + 0x474) = 0x101;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x83] = lVar2;
  param_1[0x82] = lVar1;
  FUN_00a832d0(param_2,param_1);
  return;
}


