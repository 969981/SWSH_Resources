/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9e50; name: FUN_008f9e50
 */


void FUN_008f9e50(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x150) == 2) {
    if (((puVar5[0x29c] & 0x41800) == 0) && ((puVar5[0x29d] & 0x30) == 0)) {
      return;
    }
  }
  else if (1 < *puVar5) {
    return;
  }
  if (*(char *)((long)puVar5 + 0x3bb) == '\x01') {
    return;
  }
  uVar4 = 4;
  if ((param_3 & 1) != 0) {
    uVar4 = 5;
  }
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
  uVar2 = FUN_008df3f0(uVar2,uVar1);
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
  uVar3 = FUN_008df3f0(uVar3,uVar1);
  uVar2 = FUN_008e1670(uVar2);
  uVar3 = FUN_008e1670(uVar3);
  FUN_014a9b70(uVar2,uVar4);
  FUN_014a9b70(uVar3,uVar4);
  return;
}


