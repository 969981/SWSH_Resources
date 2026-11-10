/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00797080; name: FUN_00797080
 */


void FUN_00797080(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  FUN_006cf0a0(auStack_50,PTR_DAT_027164f8);
  FUN_00708690(param_1,auStack_50,2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  puVar1 = PTR_DAT_02716500;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xb0);
  param_1[10] = (long)(puVar1 + 0xf0);
  param_1[0x4f] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 != 0) goto LAB_00797130;
  }
  lVar2 = FUN_0075ecb0();
LAB_00797130:
  param_1[0x53] = lVar2;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[0x57] = lVar2;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  puVar1 = PTR_DAT_02710910;
  *(undefined4 *)(param_1 + 0x35) = 0x7fffffff;
  lVar2 = *(long *)(*(long *)puVar1 + 0x168);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  param_1[0x16] = lVar2;
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0x168) + 0xa8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[0x26] = lVar2;
  return;
}


