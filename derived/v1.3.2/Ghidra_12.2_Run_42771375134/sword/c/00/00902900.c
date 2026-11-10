/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00902900; name: FUN_00902900
 */


uint FUN_00902900(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  
  bVar1 = FUN_008e2150(param_2);
  if (bVar1 == 0) {
    bVar1 = 0;
  }
  else {
    uVar13 = (ulong)bVar1;
    if ((param_3 & 1) == 0) {
      uVar11 = 0;
      bVar12 = 0;
      uVar9 = 4;
      do {
        sVar4 = FUN_008e2480(param_2,uVar11 & 0xffffffff);
        if (sVar4 == 0) {
          bVar2 = 0;
        }
        else {
          uVar5 = FUN_008e2240(param_2,uVar11 & 0xffffffff);
          bVar3 = FUN_009041b0(param_1,param_2,uVar5,0);
          bVar2 = ~bVar3 & 1;
          uVar10 = uVar9;
          if ((bVar3 & 1) == 0) {
            uVar10 = (uint)uVar11;
          }
          bVar12 = bVar12 + bVar2;
          if ((uVar9 & 0xff) != 4) {
            uVar10 = uVar9;
          }
          uVar9 = uVar10;
        }
        *(byte *)(param_4 + uVar11) = bVar2;
        uVar11 = uVar11 + 1;
      } while (uVar13 != uVar11);
    }
    else {
      uVar11 = 0;
      bVar12 = 0;
      uVar10 = 4;
      do {
        while (sVar4 = FUN_008e2480(param_2,uVar11 & 0xffffffff), uVar9 = uVar10, sVar4 == 0) {
          *(undefined1 *)(param_4 + uVar11) = 0;
          uVar11 = uVar11 + 1;
          if (uVar13 == uVar11) goto LAB_00902a5c;
        }
        FUN_008e2240(param_2,uVar11 & 0xffffffff);
        uVar5 = FUN_00945420();
        bVar2 = FUN_009041b0(param_1,param_2,uVar5,0);
        if ((bVar2 & 1) == 0) {
          uVar9 = (uint)uVar11;
        }
        bVar12 = bVar12 + (~bVar2 & 1);
        if ((uVar10 & 0xff) != 4) {
          uVar9 = uVar10;
        }
        *(byte *)(param_4 + uVar11) = ~bVar2 & 1;
        uVar11 = uVar11 + 1;
        uVar10 = uVar9;
      } while (uVar13 != uVar11);
    }
LAB_00902a5c:
    if (3 < bVar1) {
      bVar2 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x58),8);
      uVar10 = 4;
      if ((1 < bVar12 & bVar2) == 0) {
        uVar10 = uVar9;
      }
      if ((bVar1 != 0) && ((1 < bVar12 & bVar2) != 0)) {
        uVar13 = 0;
        uVar10 = 4;
        do {
          while( true ) {
            iVar6 = FUN_008e2240(param_2,uVar13 & 0xffffffff);
            uVar8 = FUN_00931aa0(*(undefined8 *)(param_1 + 0x70));
            iVar7 = FUN_00930550(uVar8,0);
            if (iVar7 == 0) break;
            if (iVar6 == 0x14c) {
              *(undefined1 *)(param_4 + uVar13) = 0;
              goto joined_r0x00902b3c;
            }
            if ((uVar10 & 0xff) == 4) goto LAB_00902b40;
LAB_00902b04:
            uVar13 = uVar13 + 1;
            if (bVar1 == uVar13) {
              return uVar10;
            }
          }
          *(bool *)(param_4 + uVar13) = iVar6 == 0x14c;
joined_r0x00902b3c:
          if ((uVar10 & 0xff) != 4) goto LAB_00902b04;
LAB_00902b40:
          uVar10 = 4;
          if (*(char *)(param_4 + uVar13) != '\0') {
            uVar10 = (uint)uVar13;
          }
          uVar13 = uVar13 + 1;
        } while (bVar1 != uVar13);
      }
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_4 + (ulong)bVar1),0,(ulong)(byte)(3 - bVar1) + 1);
}


