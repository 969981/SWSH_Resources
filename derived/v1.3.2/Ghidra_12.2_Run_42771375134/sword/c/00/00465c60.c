/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00465c60; name: FUN_00465c60
 */


long FUN_00465c60(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *param_2;
  if (((bVar1 != 0xff) || (param_2[8] != 0xff)) || (*(long *)(param_2 + 0x10) != 0)) {
    iVar5 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar5) {
      iVar6 = 0;
      do {
        while( true ) {
          iVar3 = iVar5 - iVar6;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar6 + (iVar3 >> 1);
          bVar2 = *(byte *)(*(long *)(param_1 + 0x10) + (long)iVar3 * 0x28 + 0x20);
          if (bVar1 > bVar2 || bVar2 == bVar1) break;
          iVar5 = iVar3 + -1;
          if (iVar5 < iVar6) goto LAB_00465d00;
        }
        if (bVar1 <= bVar2) {
          lVar4 = *(long *)(param_1 + 0x10) + (long)iVar3 * 0x28;
          if (lVar4 != 0) goto LAB_00465d68;
          break;
        }
        iVar6 = iVar3 + 1;
      } while (iVar6 <= iVar5);
    }
LAB_00465d00:
    if (bVar1 != 0xff) {
      *param_2 = 0xff;
      iVar5 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar5) {
        iVar6 = 0;
        do {
          iVar3 = iVar5 - iVar6;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar6 + (iVar3 >> 1);
          if (*(char *)(*(long *)(param_1 + 0x10) + (long)iVar3 * 0x28 + 0x20) == -1) {
            lVar4 = *(long *)(param_1 + 0x10) + (long)iVar3 * 0x28;
            if (lVar4 != 0) {
LAB_00465d68:
              lVar4 = FUN_00465db0(lVar4,param_2 + 8);
              if (lVar4 != 0) {
                return lVar4;
              }
            }
            break;
          }
          iVar6 = iVar3 + 1;
        } while (iVar3 < iVar5);
      }
    }
  }
  param_2[8] = 0xff;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  lVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar4 = param_1 + 8;
  }
  return lVar4;
}


