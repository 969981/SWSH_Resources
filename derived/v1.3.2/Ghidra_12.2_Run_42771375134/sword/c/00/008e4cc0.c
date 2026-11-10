/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4cc0; name: FUN_008e4cc0
 */


void FUN_008e4cc0(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x453);
  pbVar1 = (byte *)(param_1 + uVar3 + 0x450);
  bVar2 = *(byte *)(param_1 + uVar3 + 0x450);
  uVar4 = (ulong)bVar2;
  if (bVar2 == 6) {
    lVar5 = param_1 + uVar3 * 0x48;
    *(undefined4 *)(lVar5 + 0x380) = *(undefined4 *)(lVar5 + 0x38c);
    *(undefined8 *)(lVar5 + 0x378) = *(undefined8 *)(lVar5 + 900);
    *(undefined4 *)(lVar5 + 0x38c) = *(undefined4 *)(lVar5 + 0x398);
    *(undefined8 *)(lVar5 + 900) = *(undefined8 *)(lVar5 + 0x390);
    *(undefined4 *)(lVar5 + 0x398) = *(undefined4 *)(lVar5 + 0x3a4);
    *(undefined8 *)(lVar5 + 0x390) = *(undefined8 *)(lVar5 + 0x39c);
    *(undefined4 *)(lVar5 + 0x3a4) = *(undefined4 *)(lVar5 + 0x3b0);
    *(undefined8 *)(lVar5 + 0x39c) = *(undefined8 *)(lVar5 + 0x3a8);
    *(undefined4 *)(lVar5 + 0x3b0) = *(undefined4 *)(lVar5 + 0x3bc);
    *(undefined8 *)(lVar5 + 0x3a8) = *(undefined8 *)(lVar5 + 0x3b4);
    uVar4 = 5;
  }
  lVar5 = param_1 + uVar3 * 0x48 + uVar4 * 0xc;
  uVar6 = *param_2;
  *(undefined4 *)(lVar5 + 0x380) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar5 + 0x378) = uVar6;
  bVar2 = *pbVar1;
  if (bVar2 < 6) {
    *pbVar1 = bVar2 + 1;
  }
  return;
}


