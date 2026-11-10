/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f8d8c0; name: FUN_00f8d8c0
 */


void FUN_00f8d8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 *param_5,undefined8 param_6,long *param_7,long param_8,
                 undefined4 *param_9)

{
  ulong uVar1;
  double __x;
  long *plVar2;
  int iVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  iVar3 = param_5[1];
  lVar4 = FUN_01760060(param_3,iVar3 + param_4);
  *param_5 = 1;
  param_5[1] = param_5[1] + 1;
  puVar7 = *(undefined4 **)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_02721808 != '\0') &&
     (iVar3 = FUN_0175e1b0(param_3,iVar3 + param_4,"class_cast"), iVar3 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_01760060(param_3,0xffffffff);
    uVar5 = FUN_00f69570();
    puVar7 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)(puVar7,uVar5);
    FUN_0175ef30(param_3,0xfffffffe);
  }
  param_4 = param_5[1] + param_4;
  *param_5 = 1;
  param_5[1] = param_5[1] + 1;
  iVar3 = FUN_0175f4d0(param_3,param_4);
  if (iVar3 == 0) {
    __x = (double)FUN_0175fa50(param_3,param_4,0);
    lVar6 = llround(__x);
    UNRECOVERED_JUMPTABLE = (code *)*param_7;
    uVar1 = param_7[1];
  }
  else {
    lVar6 = FUN_0175fb60(param_3,param_4,0);
    UNRECOVERED_JUMPTABLE = (code *)*param_7;
    uVar1 = param_7[1];
  }
  plVar2 = (long *)(param_8 + ((long)uVar1 >> 1));
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00f8d9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_9,param_9[1],param_9[2],*puVar7,puVar7[1],puVar7[2],plVar2,lVar6);
  return;
}


