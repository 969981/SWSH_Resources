/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e49d0; name: FUN_008e49d0
 */


undefined8 FUN_008e49d0(long param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = *(byte *)(param_1 + 0x2ac);
  bVar3 = *(byte *)(param_1 + 0x2ad);
  bVar4 = *(byte *)(param_1 + 0x2ae);
  uVar1 = param_2 & 0x1f;
  uVar5 = (param_2 & 0xffff) >> 5 & 0x1f;
  uVar6 = (param_2 & 0xffff) >> 10 & 0x1f;
  *(char *)(param_1 + 0x2ad) = (char)uVar5;
  *(char *)(param_1 + 0x2ae) = (char)uVar6;
  *(char *)(param_1 + 0x2ac) = (char)uVar1;
  *(undefined4 *)(param_1 + 0x2b0) = param_3;
  if (bVar2 == uVar1 && bVar3 == uVar5) {
    if (bVar4 == uVar6) {
      return 0;
    }
  }
  else if (((bVar2 == uVar5) && (bVar3 == uVar1)) && (bVar4 == uVar6)) {
    return 0;
  }
  return 1;
}


