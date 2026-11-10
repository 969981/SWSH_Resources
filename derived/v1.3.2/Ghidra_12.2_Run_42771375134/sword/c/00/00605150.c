/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00605150; name: FUN_00605150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00605150(size_t *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void *__s;
  size_t __n;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = 6;
  if ((param_1 != (size_t *)0x0) && (param_3 != (long *)0x0)) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
      iVar3 = 6;
    }
    else {
      __n = *param_1;
      lVar5 = *(long *)(lVar7 + 0xb8);
      if ((long)__n < 1) {
        if (__n == 0) {
          lRam0000000000000000 = *param_3;
          _DAT_00000008 = param_3[1];
          _DAT_00000010 = param_1;
          if (((code *)param_1[1] == (code *)0x0) ||
             (iVar3 = (*(code *)param_1[1])(0,param_2), iVar3 == 0)) {
            uVar2 = *(uint *)(lVar7 + 0x48);
            lVar4 = (long)(int)uVar2;
            lVar6 = *(long *)(lVar7 + 0x50);
            lVar1 = lVar4 + 1;
            if ((int)((uint)lVar1 | uVar2) < 0) {
              iVar3 = 6;
            }
            else {
              if ((uint)lVar1 == 0) {
                if (lVar6 != 0) {
                  (**(code **)(lVar5 + 0x10))(lVar5,lVar6);
                }
                lVar5 = 0;
                goto LAB_006052fc;
              }
              if ((int)uVar2 < 0xfffffff) {
                if (uVar2 == 0) {
                  lVar5 = (**(code **)(lVar5 + 8))(lVar5,8);
                  if (lVar5 != 0) goto LAB_006052fc;
                  lVar6 = 0;
                }
                else {
                  lVar5 = (**(code **)(lVar5 + 0x18))(lVar5,lVar4 << 3,lVar1 * 8,lVar6);
                  if (lVar5 != 0) {
LAB_006052fc:
                    /* WARNING: Subroutine does not return */
                    memset((void *)(lVar5 + lVar4 * 8),0,(lVar1 - lVar4) * 8);
                  }
                }
                iVar3 = 0x40;
              }
              else {
                iVar3 = 10;
              }
            }
            *(long *)(lVar7 + 0x50) = lVar6;
          }
          lVar7 = *(long *)(lRam0000000000000000 + 0xb8);
          if ((code *)_DAT_00000010[2] != (code *)0x0) {
            (*(code *)_DAT_00000010[2])(0);
          }
          (**(code **)(lVar7 + 0x10))(lVar7,0);
        }
        else {
          iVar3 = 6;
        }
      }
      else {
        __s = (void *)(**(code **)(lVar5 + 8))(lVar5,__n);
        if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(__s,0,__n);
        }
        iVar3 = 0x40;
      }
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = 0;
      }
    }
  }
  return iVar3;
}


