/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c4830; name: FUN_008c4830
 */


void FUN_008c4830(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_02717ae0;
  lVar1 = param_1 + 0x100;
  local_38 = *(undefined8 *)PTR_DAT_02717ae0;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x5f8) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x5f8) + 0x30);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(*(long *)(param_1 + 0x5f8) + 0x38);
  *(undefined8 *)(param_1 + 0x6a0) = uVar5;
  puVar3 = PTR_DAT_02717ae8;
  FUN_00ffd510(0,lVar1,PTR_DAT_02717ae8);
  local_38 = *(undefined8 *)(puVar2 + 0x20);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x600) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x600) + 0x30);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(*(long *)(param_1 + 0x600) + 0x38);
  *(undefined8 *)(param_1 + 0x6ac) = uVar5;
  FUN_00ffd510(0x3f800000,lVar1,puVar3 + 8);
  local_38 = *(undefined8 *)(puVar2 + 0x40);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x608) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x608) + 0x30);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(*(long *)(param_1 + 0x608) + 0x38);
  *(undefined8 *)(param_1 + 0x6b8) = uVar5;
  FUN_00ffd510(0x40000000,lVar1,puVar3 + 0x10);
  local_38 = *(undefined8 *)(puVar2 + 0x60);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x610) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x610) + 0x30);
  *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(*(long *)(param_1 + 0x610) + 0x38);
  *(undefined8 *)(param_1 + 0x6c4) = uVar5;
  FUN_00ffd510(0x40400000,lVar1,puVar3 + 0x18);
  local_38 = *(undefined8 *)(puVar2 + 0x80);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x618) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x618) + 0x30);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(*(long *)(param_1 + 0x618) + 0x38);
  *(undefined8 *)(param_1 + 0x6d0) = uVar5;
  FUN_00ffd510(0x40800000,lVar1,puVar3 + 0x20);
  local_38 = *(undefined8 *)(puVar2 + 0xa0);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x620) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x620) + 0x30);
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(*(long *)(param_1 + 0x620) + 0x38);
  *(undefined8 *)(param_1 + 0x6dc) = uVar5;
  FUN_00ffd510(0x40a00000,lVar1,puVar3 + 0x28);
  local_38 = *(undefined8 *)(puVar2 + 0xc0);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x628) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x628) + 0x30);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(*(long *)(param_1 + 0x628) + 0x38);
  *(undefined8 *)(param_1 + 0x6e8) = uVar5;
  FUN_00ffd510(0x40c00000,lVar1,puVar3 + 0x38);
  local_38 = *(undefined8 *)(puVar2 + 0xe0);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x630) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x630) + 0x30);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(*(long *)(param_1 + 0x630) + 0x38);
  *(undefined8 *)(param_1 + 0x6f4) = uVar5;
  FUN_00ffd510(0x40e00000,lVar1,puVar3 + 0x30);
  local_38 = *(undefined8 *)(puVar2 + 0x100);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(long *)(param_1 + 0x638) = lVar4;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x638) + 0x30);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(*(long *)(param_1 + 0x638) + 0x38);
  *(undefined8 *)(param_1 + 0x700) = uVar5;
  FUN_00ffd510(0x41000000,lVar1,puVar3 + 0x40);
  return;
}


