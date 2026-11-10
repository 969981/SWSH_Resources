/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff51f0; name: FUN_00ff51f0
 */


void FUN_00ff51f0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  FUN_0101bf00();
  puVar1 = PTR_DAT_02723368;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[9] = (long)(puVar1 + 0xf0);
  param_1[10] = (long)(puVar1 + 0x130);
  param_1[0x1b] = (long)(PTR_DAT_02723370 + 0x10);
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  FUN_010201f0(param_1 + 0x1d);
  FUN_010201f0(param_1 + 0x3a);
  puVar1 = PTR_DAT_02723378;
  param_1[0x57] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x5e] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x3a] = (long)(puVar1 + 0x10);
  lVar3 = FUN_0075ecb0();
  param_1[0x60] = lVar3;
  param_1[0x66] = 0;
  param_1[0x61] = 0x1fffffffffffffff;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  lVar3 = FUN_0075ecb0();
  param_1[0x6d] = 0x1fffffffffffffff;
  param_1[0x6c] = lVar3;
  param_1[0x72] = 0;
  param_1[0x78] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  lVar3 = FUN_0075ecb0();
  param_1[0x7b] = 0x1fffffffffffffff;
  param_1[0x7a] = lVar3;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  lVar3 = FUN_0075ecb0();
  param_1[0x87] = 0x1fffffffffffffff;
  param_1[0x86] = lVar3;
  param_1[0x8c] = 0;
  param_1[0x92] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  lVar3 = FUN_0075ecb0();
  param_1[0x95] = 0x1fffffffffffffff;
  param_1[0x94] = lVar3;
  param_1[0x9a] = 0;
  param_1[0x9c] = 0;
  param_1[0x9e] = 0;
  lVar3 = FUN_0075ecb0();
  param_1[0xa0] = lVar3;
  param_1[0xa1] = 0x1fffffffffffffff;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)((long)param_1 + 0x544) = 0;
  puVar1 = PTR_DAT_02710848;
  param_1[0xa9] = 0;
  lVar3 = *(long *)(*(long *)puVar1 + 0x88);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_01067340(&local_28,lVar3);
  if (param_1[0x57] != 0) {
    (**(code **)(*(long *)(param_1[0x57] + 0x48) + 0x18))();
    param_1[0x57] = 0;
  }
  lVar2 = local_28;
  local_28 = 0;
  param_1[0x57] = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


