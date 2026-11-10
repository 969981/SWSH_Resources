/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949cb0; name: FUN_00949cb0
 */


void FUN_00949cb0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ushort local_70;
  undefined2 local_6e;
  undefined1 local_6c;
  undefined4 local_6a;
  undefined2 local_66;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 auStack_48 [4];
  char local_44 [4];
  
  *param_2 = 0;
  uVar6 = FUN_009424e0(param_1,*param_3);
  if (((param_3[2] != '\0') || (uVar7 = FUN_008e1600(uVar6), (uVar7 & 1) == 0)) &&
     ((param_3[1] == '\0' || (uVar7 = FUN_008e1890(uVar6), (uVar7 & 1) == 0)))) {
    FUN_00942390(param_1);
    uVar8 = FUN_009319a0();
    uVar3 = FUN_008e0a00(uVar6);
    uVar7 = FUN_00913dd0(uVar8,uVar3);
    if ((uVar7 & 1) != 0) {
      uVar4 = FUN_008e2d10(uVar6);
      uVar3 = FUN_008e0a00(uVar6);
      uVar8 = FUN_009423e0(param_1);
      uVar7 = FUN_0092b7d0(uVar8,uVar6,uVar4);
      if ((uVar7 & 1) == 0) {
        uVar8 = FUN_009423f0(param_1);
        sVar1 = FUN_00943040(uVar8,uVar3);
        local_6c = 0;
        local_66 = 0xffff;
        local_70 = (ushort)uVar3 & 0xff;
        local_6a = 0xffffffff;
        local_6e = (short)uVar4;
        uVar8 = FUN_009423b0(param_1);
        FUN_0093a470(uVar8,&local_70);
        local_44[0] = '\0';
        uVar8 = FUN_009423e0(param_1);
        uVar7 = FUN_0092dcf0(uVar8,uVar6,(ulong)&local_70 | 4,local_44);
        if ((uVar7 & 1) != 0) {
          uVar8 = FUN_009423b0(param_1);
          FUN_0093a4c0(uVar8,&local_70);
          iVar5 = FUN_008ec3f0(uVar4,0x13);
          if (iVar5 != 0) {
            if (local_44[0] != '\0') {
              FUN_00942380(param_1);
              uVar7 = FUN_008f8a30();
              if ((uVar7 & 1) != 0) {
                uVar8 = FUN_009423b0(param_1);
                FUN_00936040(uVar8,0x206,uVar4 & 0xffff);
              }
            }
            uVar8 = FUN_009423f0(param_1);
            sVar2 = FUN_00943040(uVar8,uVar3);
            if (sVar2 == sVar1) {
              local_58 = 0;
              local_56 = 1;
              local_60 = uVar6;
              FUN_00942450(param_1);
              uVar8 = FUN_009250a0();
              FUN_00949f80(uVar8,auStack_48,&local_60);
            }
            local_56 = 1;
            local_60 = uVar6;
            local_58 = (short)uVar4;
            FUN_00942450(param_1);
            uVar6 = FUN_00925010();
            FUN_0094a180(uVar6,auStack_48,&local_60);
          }
          *param_2 = 1;
        }
      }
    }
  }
  return;
}


