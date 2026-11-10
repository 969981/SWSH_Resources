/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f75dc0; name: FUN_00f75dc0
 */


void FUN_00f75dc0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_40;
  undefined8 uStack_38;
  
  local_40 = PTR_LAB_02720bd8;
  uStack_38 = 0;
  uVar2 = FUN_0175f320();
  uVar2 = FUN_00f75eb0(uVar2,param_2,param_3,uVar2 & 0xffffffff,&local_40,&uStack_38);
  if ((uVar2 & 1) == 0) {
    FUN_0175f320(param_2,param_3);
    uVar6 = 0;
  }
  else {
    lVar3 = FUN_01760060(param_2,param_3);
    uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
    if ((*PTR_DAT_02721ca0 != '\0') &&
       (iVar1 = FUN_0175e1b0(param_2,param_3,"class_cast"), iVar1 != 0)) {
      pcVar4 = (code *)FUN_01760060(param_2,0xffffffff);
      uVar5 = FUN_00f76150();
      uVar6 = (*pcVar4)(uVar6,uVar5);
      FUN_0175ef30(param_2,0xfffffffe);
    }
  }
  *param_1 = uVar6;
  return;
}


