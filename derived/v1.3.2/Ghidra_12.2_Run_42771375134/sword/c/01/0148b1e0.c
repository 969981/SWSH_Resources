/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148b1e0; name: FUN_0148b1e0
 */


void FUN_0148b1e0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined8 local_58;
  
  *(byte *)(param_1 + 0x649) = *(byte *)(param_1 + 0x649) ^ 1;
  local_58 = 0xfc34389820c2b135;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  local_58 = 0xeb80c259335bd619;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  local_58 = 0xfc34379820c2af82;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  local_58 = 0x142cc48bd369d29;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  local_58 = 0x1cc6a54e82feeb49;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  local_58 = 0x84ddc0f016f80214;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  local_58 = 0x721ac0bb16cb246;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  local_58 = 0x1ec9bc54349d48e0;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x649);
  uVar9 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  uVar2 = FUN_0087a6e0(uVar9,0);
  uVar3 = FUN_0087a6e0(uVar9,1);
  uVar4 = FUN_0087a6e0(uVar9,2);
  uVar5 = FUN_0087a6e0(uVar9,5);
  uVar6 = FUN_0087a6e0(uVar9,4);
  uVar7 = FUN_0087a6e0(uVar9,3);
  puVar1 = PTR_DAT_0272a100;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_0272a100);
  bVar10 = 0;
  if (0xfb < uVar2) {
    bVar10 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar10;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x10);
  if (uVar3 < 0xfc) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar10;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x20);
  if (uVar4 < 0xfc) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar10;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x30);
  if (uVar5 < 0xfc) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar10;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x40);
  if (uVar6 < 0xfc) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar10;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x50);
  if (uVar7 < 0xfc) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar10;
  return;
}


