/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4a50; name: FUN_012e4a50
 */


undefined4 FUN_012e4a50(long param_1)

{
  ushort uVar1;
  long lVar2;
  int *piVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_012ba7c0(*(undefined8 *)(param_1 + 0x710));
  uVar4 = 0;
  switch(*(undefined4 *)(param_1 + 0x308)) {
  case 1:
  case 2:
    if (lVar2 == 0) goto switchD_012e4a94_caseD_4;
    FUN_0131acf0(lVar2);
    piVar3 = *(int **)(lVar2 + 0x130);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[6];
    goto joined_r0x012e4afc;
  case 3:
    if (lVar2 == 0) {
      return DAT_01d4c7b8;
    }
    FUN_0131acf0(lVar2);
    piVar3 = *(int **)(lVar2 + 0x130);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[2];
joined_r0x012e4afc:
    if ((ulong)uVar1 != 0) {
      uVar4 = *(undefined4 *)((long)piVar3 + (ulong)uVar1);
    }
    break;
  case 4:
switchD_012e4a94_caseD_4:
    uVar4 = DAT_01d4bb38;
    break;
  case 5:
    uVar4 = DAT_01d4c148;
  }
  return uVar4;
}


