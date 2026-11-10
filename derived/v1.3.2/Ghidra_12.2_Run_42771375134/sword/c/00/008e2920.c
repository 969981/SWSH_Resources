/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2920; name: FUN_008e2920
 */


uint FUN_008e2920(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  bVar3 = (*(byte *)(param_1 + 0x158) & 7) != 0;
  bVar1 = *(byte *)(param_1 + 0x2ac);
  bVar2 = *(byte *)(param_1 + 0x2ad);
  uVar7 = (uint)bVar2;
  bVar4 = bVar2 != 0x12;
  bVar5 = bVar2 != 2;
  if (*(char *)(param_1 + 0x35e) < '\0') {
    if (bVar1 != 0x12 && (bVar1 != 2 || !bVar3)) goto joined_r0x008e29b8;
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_008e298c;
    uVar6 = 0x12;
  }
  else {
    if (bVar1 == 0x12 || bVar1 == 2 && bVar3) {
      uVar6 = 0;
      if (bVar4 && (!bVar3 || bVar5)) {
        uVar6 = uVar7;
      }
      uVar7 = uVar6;
LAB_008e298c:
      uVar6 = uVar7;
      goto LAB_008e299c;
    }
joined_r0x008e29b8:
    uVar6 = (uint)bVar1;
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_008e299c;
  }
  uVar7 = uVar6;
  uVar6 = uVar7;
LAB_008e299c:
  return uVar6 & 0x1f | (uVar7 & 0x1f) << 5 | (*(byte *)(param_1 + 0x2ae) & 0x1f) << 10;
}


