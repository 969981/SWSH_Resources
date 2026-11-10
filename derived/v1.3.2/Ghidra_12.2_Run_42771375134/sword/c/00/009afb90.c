/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009afb90; name: FUN_009afb90
 */


bool FUN_009afb90(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1 == 0) {
    return true;
  }
  lVar4 = *(long *)PTR_DAT_027185f8;
  if (lVar4 == 0) {
    return true;
  }
  if (*(char *)(param_1 + 0x411) != '\0') {
    if (*(long *)PTR_DAT_027104b0 == 0) {
switchD_009afc5c_caseD_1:
      return true;
    }
    lVar4 = FUN_007b5710();
    if (*(long *)(lVar4 + 0x48) == 0) {
      return true;
    }
    lVar5 = 0;
    lVar7 = *(long *)(lVar4 + 0x48) << 3;
    puVar6 = *(undefined8 **)(lVar4 + 0x40);
    do {
      bVar2 = FUN_007b5850(*puVar6);
      if (bVar2 < 2) {
        lVar5 = lVar5 + 1;
      }
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
    bVar1 = lVar5 == 2;
    goto LAB_009afcd8;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 2) {
    switch(*(char *)(param_1 + 0x3b9)) {
    case '\0':
      goto switchD_009afc5c_caseD_0;
    default:
      goto switchD_009afc5c_caseD_1;
    case '\x05':
      iVar3 = FUN_0120e820(lVar4);
      bVar1 = iVar3 == 1;
      break;
    case '\x06':
switchD_009afc5c_caseD_6:
      iVar3 = FUN_0120e820(lVar4);
      bVar1 = iVar3 == 2;
      break;
    case '\a':
      iVar3 = FUN_0120e820(lVar4);
      bVar1 = iVar3 == 3;
    }
  }
  else {
    if (*(char *)(param_1 + 0x3b9) != '\x01') {
      if ((iVar3 != 1) && (iVar3 != 0)) {
        return true;
      }
      goto switchD_009afc5c_caseD_6;
    }
switchD_009afc5c_caseD_0:
    iVar3 = FUN_0120e820(lVar4);
    bVar1 = iVar3 == 4;
  }
LAB_009afcd8:
  return !bVar1;
}


