/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f8d7c0; name: FUN_00f8d7c0
 */


uint FUN_00f8d7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  iVar1 = param_5[1];
  auVar6 = FUN_01760060(param_3,iVar1 + param_4);
  *param_5 = 1;
  param_5[1] = param_5[1] + 1;
  uVar5 = *(undefined8 *)(auVar6._0_8_ + ((ulong)(uint)-auVar6._0_4_ & 7));
  if ((*PTR_DAT_02721808 != '\0') &&
     (auVar6 = FUN_0175e1b0(param_3,iVar1 + param_4,"class_cast"), auVar6._0_4_ != 0)) {
    pcVar3 = (code *)FUN_01760060(param_3,0xffffffff);
    uVar4 = FUN_00f69570();
    uVar5 = (*pcVar3)(uVar5,uVar4);
    auVar6 = FUN_0175ef30(param_3,0xfffffffe);
  }
  uVar2 = FUN_00f8d8c0(auVar6._0_8_,auVar6._8_8_,param_3,param_4,param_5,param_6,param_7,param_8,
                       uVar5);
  return uVar2 & 1;
}


