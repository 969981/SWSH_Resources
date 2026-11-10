/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099e090; name: FUN_0099e090
 */


void FUN_0099e090(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char local_40 [8];
  undefined1 local_38;
  char local_37;
  char local_36;
  undefined1 local_35;
  undefined1 local_34;
  
  uVar3 = FUN_00880cd0(*(undefined4 *)*param_3);
  if ((uVar3 & 0xff) != 0) {
    uVar7 = param_3[1];
    uVar5 = FUN_009423e0();
    cVar2 = FUN_0092c500(uVar5,uVar3,uVar7);
    local_35 = FUN_008e0a00(uVar7);
    local_37 = cVar2 + '\x05';
    local_34 = 0;
    local_38 = (undefined1)uVar3;
    local_36 = cVar2;
    FUN_00942450(param_1);
    uVar5 = FUN_009250b0();
    FUN_00951e70(uVar5,local_40,&local_38);
    if (local_40[0] == '\x02') {
      FUN_0099e1f0(param_1);
    }
    else if (local_40[0] == '\0') {
      lVar6 = FUN_00942400();
      FUN_0093af10(lVar6 + 0x10);
    }
    else {
      FUN_009423b0();
      FUN_009366b0();
    }
    return;
  }
  puVar1 = (undefined4 *)*param_3;
  uVar5 = param_3[1];
  uVar7 = FUN_009423e0(param_1);
  uVar4 = FUN_0092c6c0(uVar7,uVar5,*puVar1);
  if ((uVar4 & 1) == 0) {
    FUN_009423b0(param_1);
    FUN_009366b0();
    return;
  }
  lVar6 = FUN_00942400(param_1);
  FUN_0093af10(lVar6 + 0x10);
  return;
}


