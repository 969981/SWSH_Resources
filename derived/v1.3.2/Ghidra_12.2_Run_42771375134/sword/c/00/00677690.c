/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00677690; name: FUN_00677690
 */


void FUN_00677690(long *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    *param_1 = param_2;
    param_1[1] = 0;
    return;
  }
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  uVar4 = param_3[3];
  uVar2 = param_3[4];
  lVar6 = *(long *)(param_2 + 0x18);
  do {
    if (*param_3 < *(uint *)(lVar6 + 8)) {
LAB_006776b4:
      lVar7 = *(long *)(lVar6 + 0x30);
    }
    else {
      if (*param_3 <= *(uint *)(lVar6 + 8)) {
        if (((int)uVar3 < *(int *)(lVar6 + 0xc)) ||
           (((int)uVar3 <= *(int *)(lVar6 + 0xc) &&
            ((uVar1 < *(uint *)(lVar6 + 0x10) ||
             ((uVar1 <= *(uint *)(lVar6 + 0x10) &&
              (((int)uVar4 < *(int *)(lVar6 + 0x14) ||
               (((int)uVar4 <= *(int *)(lVar6 + 0x14) &&
                ((uVar2 < *(uint *)(lVar6 + 0x18) ||
                 ((uVar2 <= *(uint *)(lVar6 + 0x18) && (param_3[5] < *(uint *)(lVar6 + 0x1c)))))))))
              )))))))) goto LAB_006776b4;
        if ((int)uVar3 <= *(int *)(lVar6 + 0xc)) {
          if ((int)uVar3 < *(int *)(lVar6 + 0xc)) {
            *param_1 = param_2;
            param_1[1] = lVar6;
            return;
          }
          if (uVar1 <= *(uint *)(lVar6 + 0x10)) {
            if (uVar1 < *(uint *)(lVar6 + 0x10)) {
              *param_1 = param_2;
              param_1[1] = lVar6;
              return;
            }
            if ((int)uVar4 <= *(int *)(lVar6 + 0x14)) {
              if ((int)uVar4 < *(int *)(lVar6 + 0x14)) {
                *param_1 = param_2;
                param_1[1] = lVar6;
                return;
              }
              if (uVar2 <= *(uint *)(lVar6 + 0x18)) {
                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                  *param_1 = param_2;
                  param_1[1] = lVar6;
                  return;
                }
                if (param_3[5] <= *(uint *)(lVar6 + 0x1c)) {
                  *param_1 = param_2;
                  param_1[1] = lVar6;
                  return;
                }
              }
            }
          }
        }
      }
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    if ((lVar7 == 0) || (bVar5 = lVar7 == lVar6, lVar6 = lVar7, bVar5)) {
      *param_1 = param_2;
      param_1[1] = 0;
      return;
    }
  } while( true );
}


