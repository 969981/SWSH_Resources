/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dd7a0; name: FUN_009dd7a0
 */


void FUN_009dd7a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  iVar11 = 0;
  do {
    uVar5 = FUN_008f7ff0(param_4,param_5,iVar11);
    uVar5 = uVar5 & 0xff;
    lVar10 = param_1 + uVar5 * 6;
    *(undefined2 *)(lVar10 + 0xb82) = 0;
    *(undefined4 *)(lVar10 + 0xb7e) = 0;
    uVar6 = FUN_008f37f0(param_4);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_00931920(param_3);
      uVar7 = FUN_008df3b0(uVar7,uVar5);
      uVar3 = FUN_009141c0();
      cVar1 = FUN_008f5920(uVar5);
      if ((uVar3 & 0xff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar14 = 0;
        uVar13 = 0;
        iVar12 = 0;
        do {
          uVar8 = FUN_00914310(uVar7,uVar14);
          cVar2 = FUN_008e0a00();
          iVar4 = FUN_008e12a0(uVar8,0xd);
          iVar12 = iVar4 + iVar12;
          iVar4 = FUN_008e12a0(uVar8,0xf);
          uVar13 = iVar4 + uVar13;
          uVar6 = FUN_008e1600(uVar8);
          if ((uVar6 & 1) == 0) {
            iVar4 = FUN_008e19f0(uVar8);
            if (iVar4 != 0) {
              uVar9 = 1;
              goto LAB_009dd8ac;
            }
          }
          else {
            uVar9 = 2;
LAB_009dd8ac:
            *(undefined1 *)(param_1 + uVar5 * 6 + (ulong)(byte)(cVar2 - cVar1) + 0xb7e) = uVar9;
          }
          uVar14 = uVar14 + 1;
        } while ((uVar3 & 0xff) != uVar14);
        if (uVar13 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          if (uVar13 != 0) {
            uVar3 = (uint)(iVar12 * 100) / uVar13;
          }
        }
      }
      *(uint *)(param_1 + uVar5 * 4 + 0xb9c) = uVar3;
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 5) {
      return;
    }
  } while( true );
}


