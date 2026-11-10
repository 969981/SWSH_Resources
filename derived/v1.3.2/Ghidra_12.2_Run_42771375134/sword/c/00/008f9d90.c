/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9d90; name: FUN_008f9d90
 */


undefined8 FUN_008f9d90(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x88);
  if ((char)puVar3[0x2a1] != '\0') {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x183);
  if ((bVar2 >> 4 & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x150) == 2) {
    if (((puVar3[0x29c] & 0x41800) == 0) && ((puVar3[0x29d] & 0x30) == 0)) {
LAB_008f9e2c:
      uVar1 = 0;
      goto LAB_008f9e30;
    }
  }
  else if (1 < *puVar3) goto LAB_008f9e2c;
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
  uVar1 = FUN_008ece50(puVar3,uVar1);
  bVar2 = *(byte *)(param_1 + 0x183);
  *(int *)(param_1 + 0x15c) = (int)uVar1;
LAB_008f9e30:
  *(byte *)(param_1 + 0x183) = bVar2 | 0x10;
  return uVar1;
}


