/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00904de0; name: FUN_00904de0
 */


void FUN_00904de0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  if ((iVar3 != 2) ||
     (((iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58)), iVar3 == 2 &&
       (cVar2 = FUN_009141d0(*(undefined8 *)(param_1 + 0x340)), cVar2 == '\0')) &&
      (uVar4 = FUN_008f80c0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6)),
      (uVar4 & 1) != 0)))) {
    return;
  }
  lVar1 = param_1 + 0x410;
  uVar4 = FUN_00918560(lVar1);
  if ((uVar4 & 1) != 0) {
    FUN_009c52f0(*(undefined8 *)(param_1 + 0xf0),1);
    return;
  }
  uVar4 = FUN_00918540(lVar1);
  if ((uVar4 & 1) != 0) {
    FUN_009185c0(lVar1);
    iVar3 = FUN_00880b10();
    if (iVar3 == 0) {
      FUN_009c52f0(*(undefined8 *)(param_1 + 0xf0),3);
      return;
    }
    FUN_009c52f0(*(undefined8 *)(param_1 + 0xf0),2);
    return;
  }
  uVar4 = FUN_00918580(lVar1);
  if ((uVar4 & 1) != 0) {
    FUN_009c52f0(*(undefined8 *)(param_1 + 0xf0),4);
    return;
  }
  uVar4 = FUN_009185a0(lVar1);
  if ((uVar4 & 1) == 0) {
    FUN_009c52f0(*(undefined8 *)(param_1 + 0xf0),0);
    return;
  }
  FUN_009c52f0(*(undefined8 *)(param_1 + 0xf0),5);
  return;
}


