/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00968ae0; name: FUN_00968ae0
 */


void FUN_00968ae0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_54 [4];
  
  iVar3 = FUN_0093b420(param_4);
  if ((iVar3 != 0) &&
     ((iVar3 = FUN_0093b430(param_4), iVar3 != 1 ||
      (lVar5 = FUN_0093b2c0(param_4,0), lVar5 != param_3)))) {
    bVar1 = FUN_008e12a0(param_3,0x11);
    FUN_0093b2e0(param_4);
    lVar5 = FUN_0093b2f0(param_4);
    if (lVar5 != 0) {
      do {
        uVar6 = FUN_008e0a10(lVar5);
        if ((uVar6 & 1) == 0) {
LAB_00968be4:
          bVar2 = FUN_008e12a0(lVar5,0x11);
          if (bVar1 < bVar2) goto LAB_00968bf8;
          local_54[0] = '\0';
          uVar7 = FUN_009423e0(param_1);
          uVar6 = FUN_00928440(uVar7,local_54,param_3,lVar5,param_2);
          if ((uVar6 & 1) == 0) {
            if (local_54[0] == '\0') {
              uVar7 = FUN_009423b0(param_1);
              uVar8 = 0x124;
              goto LAB_00968c08;
            }
            goto LAB_00968c0c;
          }
        }
        else {
          uVar6 = FUN_008e0b50(lVar5);
          if ((uVar6 & 1) != 0) {
            FUN_008e0b60(lVar5);
            FUN_008e5ed0();
            uVar6 = FUN_0093db60();
            if ((uVar6 & 1) != 0) goto LAB_00968be4;
          }
LAB_00968bf8:
          uVar7 = FUN_009423b0(param_1);
          uVar8 = 0x128;
LAB_00968c08:
          FUN_00936080(uVar7,lVar5,uVar8);
LAB_00968c0c:
          FUN_0093b260(param_4,lVar5);
        }
        lVar5 = FUN_0093b2f0(param_4);
      } while (lVar5 != 0);
    }
    uVar6 = FUN_0093b4e0(param_4);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_009423b0(param_1);
      uVar4 = FUN_008e0a00(param_3);
      FUN_00939090(uVar7,uVar4,1);
    }
  }
  return;
}


