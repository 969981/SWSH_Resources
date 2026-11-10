/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00968d40; name: FUN_00968d40
 */


void FUN_00968d40(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  char local_34 [4];
  
  iVar4 = FUN_0093b420(param_3[2]);
  if ((iVar4 != 0) &&
     ((iVar4 = FUN_0093b430(param_3[2]), iVar4 != 1 ||
      (lVar7 = FUN_0093b2c0(param_3[2],0), lVar7 != *param_3)))) {
    FUN_0093b2e0(param_3[2]);
    lVar7 = FUN_0093b2f0(param_3[2]);
    if (lVar7 != 0) {
      do {
        lVar10 = *param_3;
        lVar1 = param_3[1];
        local_34[0] = '\0';
        uVar8 = FUN_009423e0(param_1);
        uVar9 = FUN_0092a640(uVar8,lVar10,lVar7,lVar1);
        if ((uVar9 & 1) == 0) {
          uVar8 = FUN_009423e0(param_1);
          uVar9 = FUN_0092a710(uVar8,lVar10,lVar7,lVar1,local_34);
          if ((uVar9 & 1) == 0) {
            lVar10 = param_3[1];
            uVar5 = FUN_0093b420(param_3[2]);
            uVar2 = *(uint *)(lVar10 + 0x24);
            FUN_0093b260(param_3[2],lVar7);
            cVar3 = local_34[0];
            if ((uVar5 < 2) || ((uVar2 >> 3 & 1) == 0)) {
              uVar6 = *(undefined4 *)param_3[1];
              uVar8 = FUN_009423b0(param_1);
              if (cVar3 == '\0') {
                FUN_009366d0(uVar8,lVar7,uVar6);
              }
              else {
                FUN_00936710();
              }
            }
            lVar10 = *param_3;
            lVar7 = param_3[4];
            uVar8 = FUN_009423e0(param_1);
            FUN_0092aa60(uVar8,lVar10,(char)lVar7);
          }
        }
        lVar7 = FUN_0093b2f0(param_3[2]);
      } while (lVar7 != 0);
    }
    if ((param_3[3] != 0) && (uVar9 = FUN_0093b4e0(param_3[2]), (uVar9 & 1) != 0)) {
      uVar8 = FUN_009423b0(param_1);
      uVar6 = FUN_008e0a00(*param_3);
      FUN_00939090(uVar8,uVar6,1);
    }
  }
  return;
}


