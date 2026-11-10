/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00901750; name: FUN_00901750
 */


void FUN_00901750(long param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  cVar1 = FUN_008f2b20(*(undefined8 *)(param_1 + 0x58));
  if ((cVar1 == '\0') && (iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58)), iVar3 == 0)) {
    uVar4 = FUN_008f8d30(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),0);
    uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    lVar6 = FUN_008df3d0(uVar5,uVar4,0);
    if (lVar6 != 0) {
      uVar2 = FUN_008e12a0(lVar6,0xd);
      *(undefined2 *)(param_1 + 0x290) = uVar2;
    }
  }
  return;
}


