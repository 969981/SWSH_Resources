/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00997790; name: FUN_00997790
 */


void FUN_00997790(undefined8 param_1,uint param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_b0;
  undefined1 auStack_88 [36];
  undefined1 auStack_64 [36];
  
  iVar4 = FUN_0093ed20();
  if (iVar4 != 2) {
    uVar5 = FUN_0093ec60(param_1,param_2);
    uVar6 = FUN_0093ec60(param_1,param_3);
    uVar7 = FUN_0093ed80(param_1,param_2,param_3);
    if ((uVar7 & 1) != 0) {
      cVar1 = FUN_009416b0(param_1,param_3);
      if (cVar1 != '\x05') {
        sVar2 = FUN_008e2d10(uVar5);
        if ((sVar2 != 0) && (sVar3 = FUN_008e2d10(uVar6), sVar3 == 0)) {
          uVar6 = FUN_008e1290(uVar6);
          uVar7 = FUN_00940650(uVar6,sVar2);
          if ((uVar7 & 1) == 0) {
            uVar5 = FUN_008e1290(uVar5);
            uVar7 = FUN_00940650(uVar5,sVar2);
            if ((uVar7 & 1) == 0) {
              uVar7 = (ulong)&local_b0 | 4;
              local_b0 = 0x1f1f;
              FUN_00943e60(uVar7);
              FUN_00943e60(auStack_88);
              FUN_00943e60(auStack_64);
              local_b0 = CONCAT13(1,(undefined3)local_b0);
              local_b0._0_2_ = CONCAT11((char)param_3,(char)param_2);
              FUN_00943f20(uVar7,2,0x66c);
              FUN_00943f60(uVar7,param_2 & 0xff);
              FUN_00943f60(uVar7,sVar2);
              FUN_00943f60(uVar7,param_3 & 0xff);
              FUN_0093fc30(param_1,&local_b0);
            }
          }
        }
      }
    }
  }
  return;
}


