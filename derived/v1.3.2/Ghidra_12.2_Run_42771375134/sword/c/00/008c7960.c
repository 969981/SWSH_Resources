/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c7960; name: FUN_008c7960
 */


void FUN_008c7960(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_02717ae0;
  local_28 = *(undefined8 *)(PTR_DAT_02717ae0 + 8);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,0);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 0x28);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,1);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 0x48);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,2);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 0x68);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,3);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 0x88);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,4);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 0xa8);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,5);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 200);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,6);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 0xe8);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,7);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  local_28 = *(undefined8 *)(puVar1 + 0x108);
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  bVar2 = FUN_008c7b40(param_1,8);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar2 & 1;
  return;
}


