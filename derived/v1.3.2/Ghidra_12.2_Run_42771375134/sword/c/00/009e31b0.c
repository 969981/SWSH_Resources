/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e31b0; name: FUN_009e31b0
 */


undefined4 FUN_009e31b0(undefined4 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = FUN_009e3270();
  puVar1 = PTR_DAT_02718ad8;
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  iVar3 = FUN_008f8110(*(undefined8 *)PTR_DAT_02718ad8);
  if (iVar3 == 2) {
    cVar2 = FUN_008f9470(*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),param_1);
    uVar4 = 0;
    if (cVar2 != '\x04') {
      uVar4 = 3;
    }
    return uVar4;
  }
  uVar4 = FUN_008f94e0(param_1);
  uVar5 = FUN_008f9460(*(undefined8 *)puVar1,*(undefined4 *)(puVar1 + 0xa0),uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  iVar3 = FUN_008f3790(*(undefined8 *)puVar1);
  uVar4 = 1;
  if (iVar3 != 0) {
    uVar4 = 2;
  }
  return uVar4;
}


