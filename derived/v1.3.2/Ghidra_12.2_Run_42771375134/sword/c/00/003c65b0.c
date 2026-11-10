/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c65b0; name: FUN_003c65b0
 */


undefined8 FUN_003c65b0(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(lVar8 + 0x78);
  lVar2 = *(long *)(lVar8 + 0x80);
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(uint *)(lVar1 + 0xb8) < 0xfffffffe;
  }
  if (lVar2 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(uint *)(lVar2 + 0xb8) < 0xfffffffe;
  }
  bVar5 = false;
  if (lVar1 != 0) {
    bVar5 = (*(byte *)(*(long *)(lVar1 + 0x50) + 0x2c) & 1) == 0;
  }
  bVar6 = false;
  if (lVar2 != 0) {
    bVar6 = (*(byte *)(*(long *)(lVar2 + 0x50) + 0x2c) & 1) == 0;
  }
  uVar7 = 0;
  if (((bool)(bVar3 | bVar4)) && (bVar5 || bVar6)) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 0x40;
    if ((*(byte *)(lVar8 + 0x88) & 6) != 2) {
      return 1;
    }
    FUN_003dff80(*(undefined8 *)(*(long *)(param_1 + 8) + 0x48),lVar8,param_1);
    uVar7 = 1;
  }
  return uVar7;
}


