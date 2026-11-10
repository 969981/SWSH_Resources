/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd15f0; name: FUN_00bd15f0
 */


void FUN_00bd15f0(long param_1,int param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_3 == 0 || param_2 == 0) && (0x1e < param_4)) {
    return;
  }
  if ((param_3 == 1 || param_2 == 1) && (0x1e < param_4)) {
    return;
  }
  if ((param_3 == 2 || param_2 == 2) && (0x1e < param_4)) {
    return;
  }
  if ((param_3 == 3 || param_2 == 3) && (6 < param_4)) {
    return;
  }
  switch(param_2) {
  case 0:
    lVar4 = param_1 + 0x2d68;
    break;
  case 1:
    lVar4 = param_1 + 0x2d86;
    break;
  case 2:
    lVar4 = param_1 + 0x2da4;
    break;
  case 3:
    lVar4 = param_1 + 0x2dc2;
    break;
  default:
    lVar4 = 0;
  }
  if (3 < param_3) {
    return;
  }
  switch(param_3) {
  case 0:
    param_1 = param_1 + 0x2d68;
    break;
  case 1:
    param_1 = param_1 + 0x2d86;
    break;
  case 2:
    param_1 = param_1 + 0x2da4;
    goto joined_r0x00bd1710;
  case 3:
    param_1 = param_1 + 0x2dc2;
joined_r0x00bd1710:
    if (lVar4 == 0) {
      return;
    }
    goto LAB_00bd1714;
  }
  if (lVar4 != 0) {
LAB_00bd1714:
    if (param_4 != 0) {
      if (param_4 == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          puVar1 = (undefined1 *)(lVar4 + lVar5);
          puVar2 = (undefined1 *)(param_1 + lVar5);
          lVar5 = lVar5 + 2;
          uVar3 = *puVar1;
          *puVar1 = *puVar2;
          *puVar2 = uVar3;
          uVar3 = puVar1[1];
          puVar1[1] = puVar2[1];
          puVar2[1] = uVar3;
        } while ((ulong)param_4 - ((ulong)param_4 & 1) != lVar5);
        if ((param_4 & 1) == 0) {
          return;
        }
      }
      uVar3 = *(undefined1 *)(lVar4 + lVar5);
      *(undefined1 *)(lVar4 + lVar5) = *(undefined1 *)(param_1 + lVar5);
      *(undefined1 *)(param_1 + lVar5) = uVar3;
      return;
    }
  }
  return;
}


