/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524310; name: FUN_01524310
 */


bool FUN_01524310(uint *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined1 auStack_70 [16];
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    FUN_008885c0(auStack_70,param_2[-1] & 0x7fff);
    uVar3 = FUN_00889210(auStack_70);
    FUN_00888620(auStack_70);
    FUN_008885c0(auStack_70,*param_1 & 0x7fff);
    uVar4 = FUN_00889210(auStack_70);
    FUN_00888620(auStack_70);
    if (uVar3 < uVar4) {
      uVar3 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar3;
    }
    break;
  case 3:
    FUN_01523d80(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_01523f80(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_01524110(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_01523d80(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      puVar1 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar6 = puVar1;
        FUN_008885c0(auStack_70,*puVar6 & 0x7fff);
        uVar3 = FUN_00889210(auStack_70);
        FUN_00888620(auStack_70);
        FUN_008885c0(auStack_70,*puVar7 & 0x7fff);
        uVar4 = FUN_00889210(auStack_70);
        FUN_00888620(auStack_70);
        if (uVar3 < uVar4) {
          uVar3 = *puVar6;
          lVar2 = lVar8;
          do {
            lVar10 = lVar2;
            *(undefined4 *)((long)param_1 + lVar10 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar10 + 8);
            if (lVar10 == -8) {
              *param_1 = uVar3;
              goto joined_r0x015244e0;
            }
            FUN_008885c0(auStack_70,uVar3 & 0x7fff);
            uVar4 = FUN_00889210(auStack_70);
            FUN_00888620(auStack_70);
            FUN_008885c0(auStack_70,*(uint *)((long)param_1 + lVar10 + 4) & 0x7fff);
            uVar5 = FUN_00889210(auStack_70);
            FUN_00888620(auStack_70);
            lVar2 = lVar10 + -4;
          } while (uVar4 < uVar5);
          *(uint *)((long)param_1 + lVar10 + 8) = uVar3;
joined_r0x015244e0:
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar6 + 1 == param_2;
          }
        }
        lVar8 = lVar8 + 4;
        puVar1 = puVar6 + 1;
        puVar7 = puVar6;
      } while (puVar6 + 1 != param_2);
    }
  }
  return true;
}


