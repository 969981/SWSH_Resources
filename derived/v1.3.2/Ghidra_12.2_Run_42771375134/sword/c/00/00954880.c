/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00954880; name: FUN_00954880
 */


uint FUN_00954880(undefined8 param_1,uint param_2,int param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_90 [4];
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  undefined1 uStack_6a;
  undefined4 local_68;
  undefined1 auStack_64 [36];
  
  uVar1 = FUN_0093eb90(param_1,2);
  if (uVar1 == (param_2 & 0xff)) {
    uVar3 = FUN_0093ec60(param_1,param_2);
    if (param_3 == 0x2d) {
      iVar2 = FUN_008e19f0(uVar3);
joined_r0x00954908:
      if (iVar2 == 0) goto LAB_00954998;
    }
    else {
      if (param_3 == 0x2f) {
        iVar2 = FUN_008ec8a0(uVar3);
        goto joined_r0x00954908;
      }
      if (param_3 == 0x2e) {
        iVar2 = FUN_008e19f0(uVar3);
        if (iVar2 == 0) {
          uVar4 = FUN_008e1810(uVar3,6);
          goto joined_r0x00954994;
        }
      }
      else {
        uVar4 = FUN_008e1810(uVar3,param_3);
joined_r0x00954994:
        if ((uVar4 & 1) == 0) goto LAB_00954998;
      }
    }
    local_90[0] = 0x1f;
    local_8c = 0x2d;
    local_68 = 0;
    uStack_70 = 0;
    uStack_6a = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_71 = 0;
    FUN_00943e60(auStack_64);
    local_90[0] = (undefined1)param_2;
    local_68 = CONCAT22(local_68._2_2_,param_4);
    uStack_6a = 1;
    local_88 = CONCAT71(local_88._1_7_,local_90[0]);
    local_8c = param_3;
    uVar1 = FUN_0093f290(param_1,local_90);
    if ((uVar1 & 1) != 0) {
      FUN_0093ebd0(param_1,0x50,1);
    }
  }
  else {
LAB_00954998:
    uVar1 = 0;
  }
  return uVar1 & 1;
}


