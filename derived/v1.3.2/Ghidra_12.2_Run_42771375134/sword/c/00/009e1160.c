/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e1160; name: FUN_009e1160
 */


void FUN_009e1160(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_02718ad8;
  uVar2 = FUN_008f35c0(*(undefined8 *)PTR_DAT_02718ad8,0x200000);
  lVar3 = *(long *)(puVar1 + 8);
  if ((uVar2 & 1) == 0) {
    FUN_008df430(lVar3,param_1);
    uVar4 = FUN_008e1680();
    FUN_014c7b70(*(undefined8 *)(puVar1 + 0x10),param_2,uVar4);
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_008df430(lVar3,param_1);
  uVar4 = FUN_008e1680();
  FUN_014c7bf0(*(undefined8 *)(puVar1 + 0x10),param_2,uVar4);
  return;
}


