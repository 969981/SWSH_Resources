/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099d170; name: FUN_0099d170
 */


void FUN_0099d170(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 auStack_38 [8];
  
  lVar4 = FUN_00942400();
  cVar2 = *(char *)(param_3 + 4);
  lVar4 = lVar4 + 0x10;
  uVar5 = FUN_0093af40(lVar4);
  if (cVar2 == '\0') {
    if ((uVar5 & 1) != 0) {
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      uVar6 = FUN_009423c0(param_1);
      FUN_0095ed00(uVar6,uVar7,lVar4,uVar8);
      return;
    }
  }
  else {
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_0093af50(lVar4);
      if ((uVar5 & 1) == 0) {
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        uVar6 = FUN_009423c0(param_1);
        FUN_0095ed00(uVar6,uVar7,lVar4,uVar8);
      }
      FUN_00942390(param_1);
      FUN_009319c0();
      FUN_009359b0();
      uVar5 = FUN_008e1600(*param_3);
      if (((uVar5 & 1) == 0) &&
         (uVar5 = FUN_00880a00(*(undefined4 *)param_3[2],2), (uVar5 & 1) != 0)) {
        uVar7 = FUN_009423b0(param_1);
        FUN_009375c0(uVar7,*param_3,0xc);
      }
      uVar6 = *param_3;
      uVar7 = param_3[1];
      puVar1 = (undefined4 *)param_3[2];
      uVar8 = FUN_009423e0(param_1);
      uVar3 = FUN_008e0a00(uVar6);
      FUN_00928990(uVar8,uVar3,*puVar1,uVar7,0x27);
      return;
    }
    uVar7 = param_3[1];
    puVar1 = (undefined4 *)param_3[2];
    local_50[0] = FUN_008e0a00(*param_3);
    local_4c = *puVar1;
    local_48 = uVar7;
    FUN_00942450(param_1);
    uVar7 = FUN_00925de0();
    FUN_00969e70(uVar7,auStack_38,local_50);
  }
  return;
}


