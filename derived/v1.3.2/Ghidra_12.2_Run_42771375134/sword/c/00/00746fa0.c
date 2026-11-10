/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00746fa0; name: FUN_00746fa0
 */


void FUN_00746fa0(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 auStack_40 [24];
  long local_28;
  
  FUN_006cf0a0(auStack_40,PTR_DAT_02715d60);
  FUN_00708690(param_1,auStack_40,2);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  puVar6 = PTR_DAT_02715d68;
  *param_1 = (long)(PTR_DAT_02715d68 + 0x10);
  param_1[9] = (long)(puVar6 + 0xb0);
  param_1[10] = (long)(puVar6 + 0xf0);
  puVar6 = PTR_DAT_027159c0;
  lVar1 = *(long *)(PTR_DAT_027159c0 + 0x10);
  uVar5 = *param_2;
  param_1[0x55] = *(long *)(PTR_DAT_027159c0 + 0x18);
  lVar2 = *(long *)puVar6;
  param_1[0x53] = *(long *)(puVar6 + 8);
  lVar3 = *(long *)(puVar6 + 0x30);
  param_1[0x59] = *(long *)(puVar6 + 0x38);
  lVar4 = *(long *)(puVar6 + 0x20);
  param_1[0x57] = *(long *)(puVar6 + 0x28);
  param_1[0x54] = lVar1;
  *(undefined4 *)(param_1 + 0x4d) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x52] = lVar2;
  param_1[0x58] = lVar3;
  param_1[0x56] = lVar4;
  *(undefined4 *)(param_1 + 0x35) = 0x7fffffff;
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[0x26] = 0;
  return;
}


