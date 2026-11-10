/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ac220; name: FUN_009ac220
 */


void FUN_009ac220(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 local_38 [8];
  
  iVar2 = FUN_00942620();
  if (iVar2 == 2) {
    uVar4 = FUN_009424b0(param_1,4);
    uVar5 = FUN_008e2df0(uVar4,0x17);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_008e1600(uVar4), (uVar5 & 1) == 0)) {
      FUN_008e0b60(uVar4);
      uVar5 = FUN_008e6020();
      if (((uVar5 & 1) == 0) && (uVar5 = FUN_00961a00(uVar4), (uVar5 & 1) != 0)) {
        uVar6 = FUN_009423b0(param_1);
        uVar3 = FUN_008e0a00(uVar4);
        FUN_00939a80(uVar6,uVar3);
        uVar6 = FUN_009423b0(param_1);
        FUN_00937200(uVar6,uVar4,0x81);
        if (*param_3 != '\0') {
          uVar6 = FUN_009423b0(param_1);
          uVar1 = FUN_008e0a00(uVar4);
          FUN_00936040(uVar6,0x181,uVar1);
        }
        FUN_009ac360(param_1,uVar4);
        if (param_3[1] != '\0') {
          FUN_008e0b60(uVar4);
          iVar2 = FUN_008e6070();
          if (iVar2 == 1) {
            local_38[0] = 4;
            FUN_00942450(param_1);
            uVar6 = FUN_00925a90();
            FUN_009ac500(uVar6,auStack_40,local_38);
          }
        }
        FUN_008e3830(uVar4,0x17);
      }
    }
  }
  return;
}


