/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099c910; name: FUN_0099c910
 */


void FUN_0099c910(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [80];
  undefined4 local_90 [10];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined4 *puStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 *local_48;
  
  if (*(char *)*param_3 != '\0') {
    uVar3 = FUN_009424e0(param_1,((char *)*param_3)[1]);
    lVar7 = param_3[1];
    lVar2 = param_3[2];
    uVar4 = FUN_009423e0(param_1);
    FUN_00929dc0(uVar4,uVar3,lVar7,(int)lVar2);
    FUN_0093b070(auStack_e0);
    uVar1 = (undefined4)param_3[2];
    uVar4 = FUN_009423e0(param_1);
    FUN_00926280(uVar4,uVar1,uVar1,uVar1,0,uVar3,local_90);
    local_50 = *(undefined1 *)(*param_3 + 6);
    local_4f = 0x1f;
    local_60 = uVar3;
    puStack_58 = local_90;
    local_48 = auStack_e0;
    FUN_00942450(param_1);
    uVar4 = FUN_00925b60();
    FUN_0099ed70(uVar4,auStack_68,&local_60);
    uVar5 = FUN_008e1810(uVar3,0xf);
    if (((uVar5 & 1) == 0) || (uVar5 = FUN_00880a00(local_90[0],0xc), (uVar5 & 1) == 0)) {
      uVar5 = FUN_008e1810(uVar3,0x18);
      if (((uVar5 & 1) == 0) || (uVar5 = FUN_00880a00(local_90[0],8), (uVar5 & 1) == 0)) {
        FUN_0099ca70(param_1,uVar3,local_90,auStack_e0);
        return;
      }
      uVar4 = FUN_009423b0(param_1);
      uVar6 = 0x21;
    }
    else {
      uVar4 = FUN_009423b0(param_1);
      uVar6 = 0xd;
    }
    FUN_009367b0(uVar4,uVar3,local_90[0],uVar6);
  }
  return;
}


