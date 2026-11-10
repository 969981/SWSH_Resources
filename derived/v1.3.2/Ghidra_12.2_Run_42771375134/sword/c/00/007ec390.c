/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ec390; name: FUN_007ec390
 */


void FUN_007ec390(long *param_1,long param_2,int param_3)

{
  byte bVar1;
  undefined7 uVar2;
  byte *pbVar3;
  void *pvVar4;
  byte local_80 [16];
  void *local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  byte local_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined1 *local_48;
  
  local_48 = (undefined1 *)0x0;
  local_58 = 0;
  uStack_57 = 0;
  uStack_56 = 0;
  local_50 = 0;
  uStack_4f = 0;
  if (*(long *)(*param_1 + 8) == 0) {
    std::operator+("Import \"",*(string **)(*(long *)(param_2 + 0x38) + (long)param_3 * 8 + 8));
  }
  else {
    std::operator+("Import \"",*(string **)(*(long *)(param_2 + 0x38) + (long)param_3 * 8 + 8));
  }
  pbVar3 = (byte *)std::string::append((char *)local_80);
  bVar1 = *pbVar3;
  uStack_60 = (undefined7)((ulong)*(undefined8 *)(pbVar3 + 8) >> 8);
  uStack_68 = (undefined7)*(undefined8 *)(pbVar3 + 1);
  local_61 = (undefined1)((ulong)*(undefined8 *)(pbVar3 + 1) >> 0x38);
  pvVar4 = *(void **)(pbVar3 + 0x10);
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  pbVar3[8] = 0;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  pbVar3[0xc] = 0;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  pbVar3[0x10] = 0;
  pbVar3[0x11] = 0;
  pbVar3[0x12] = 0;
  pbVar3[0x13] = 0;
  pbVar3[0x14] = 0;
  pbVar3[0x15] = 0;
  pbVar3[0x16] = 0;
  pbVar3[0x17] = 0;
  if ((local_58 & 1) != 0) {
    *local_48 = 0;
    local_50 = 0;
    uStack_4f = 0;
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  uStack_4f = uStack_60;
  local_50 = local_61;
  uVar2 = uStack_68;
  uStack_68 = 0;
  local_61 = 0;
  uStack_60 = 0;
  uStack_57 = (undefined1)uVar2;
  uStack_56 = (undefined6)((uint7)uVar2 >> 8);
  local_58 = bVar1;
  local_48 = pvVar4;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_007eaaf0(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,&local_58);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}


