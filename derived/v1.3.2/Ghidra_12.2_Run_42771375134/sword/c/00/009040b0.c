/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009040b0; name: FUN_009040b0
 */


void FUN_009040b0(long param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar7 = FUN_008f8ca0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
  uVar10 = FUN_00931a20(*(undefined8 *)(param_1 + 0x70));
  uVar10 = FUN_009336d0(uVar10,uVar7);
  uVar7 = FUN_00933960();
  bVar5 = FUN_00933950(uVar10);
  uVar1 = (uint)bVar5;
  iVar8 = FUN_00933900(uVar10,*(undefined1 *)(param_1 + 0x2a6));
  iVar9 = FUN_00933900(uVar10,uVar7);
  iVar4 = (iVar8 + uVar1) - iVar9;
  cVar3 = '\0';
  if (uVar1 != 0) {
    cVar3 = (char)(iVar4 / (int)uVar1);
  }
  cVar2 = '\0';
  if (iVar8 != iVar9) {
    cVar2 = (char)iVar4 - cVar3 * bVar5;
  }
  uVar11 = FUN_009a3c80(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70),
                        *(undefined1 *)(param_1 + 0x2a6));
  bVar6 = 0;
  if ((uVar11 & 1) != 0) {
    if (*(char *)(param_1 + 0x2b7) == '\0') {
      bVar6 = FUN_009a3be0(*(undefined8 *)(param_1 + 0x70),param_3);
      bVar6 = bVar6 & 1;
    }
    else {
      bVar6 = 0;
    }
  }
  *param_2 = bVar6;
  param_2[2] = bVar5;
  param_2[1] = bVar5 - cVar2;
  return;
}


