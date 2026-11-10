/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096adc0; name: FUN_0096adc0
 */


void FUN_0096adc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  iVar2 = FUN_0093b420(param_3[3]);
  if (iVar2 != 0) {
    FUN_0093b2e0(param_3[3]);
    lVar5 = FUN_0093b2f0(param_3[3]);
    if (lVar5 != 0) {
      do {
        while( true ) {
          uVar3 = FUN_008e0a00(lVar5);
          iVar2 = FUN_00960550(param_3[2],uVar3);
          if (iVar2 == 0) break;
          lVar5 = FUN_0093b2f0(param_3[3]);
          if (lVar5 == 0) goto LAB_0096ae88;
        }
        lVar8 = param_3[1];
        uVar4 = FUN_0093b420(param_3[3]);
        uVar1 = *(uint *)(lVar8 + 0x24);
        FUN_0093b260(param_3[3],lVar5);
        if ((uVar4 < 2) || ((uVar1 >> 3 & 1) == 0)) {
          FUN_0096aef0(param_1,lVar5,param_3[2]);
        }
        FUN_0096afa0(param_1,*param_3,lVar5);
        lVar5 = FUN_0093b2f0(param_3[3]);
      } while (lVar5 != 0);
    }
LAB_0096ae88:
    if ((param_3[4] != 0) && (uVar6 = FUN_0093b4e0(param_3[3]), (uVar6 & 1) != 0)) {
      uVar7 = FUN_009423b0(param_1);
      uVar3 = FUN_008e0a00(*param_3);
      FUN_00939090(uVar7,uVar3,3);
      return;
    }
  }
  return;
}


