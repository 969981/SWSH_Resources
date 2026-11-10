/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f8d3e0; name: FUN_00f8d3e0
 */


void FUN_00f8d3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 *param_5,undefined8 param_6,long *param_7,long param_8)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = param_5[1];
  lVar3 = FUN_01760060(param_3,iVar2 + param_4);
  *param_5 = 1;
  param_5[1] = param_5[1] + 1;
  puVar1 = PTR_DAT_02721808;
  puVar5 = *(undefined4 **)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_02721808 != '\0') &&
     (iVar2 = FUN_0175e1b0(param_3,iVar2 + param_4,"class_cast"), iVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_01760060(param_3,0xffffffff);
    uVar4 = FUN_00f69570();
    puVar5 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)(puVar5,uVar4);
    FUN_0175ef30(param_3,0xfffffffe);
  }
  iVar2 = param_5[1];
  lVar3 = FUN_01760060(param_3,iVar2 + param_4);
  *param_5 = 1;
  param_5[1] = param_5[1] + 1;
  puVar6 = *(undefined4 **)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*puVar1 != '\0') && (iVar2 = FUN_0175e1b0(param_3,iVar2 + param_4,"class_cast"), iVar2 != 0))
  {
    UNRECOVERED_JUMPTABLE = (code *)FUN_01760060(param_3,0xffffffff);
    uVar4 = FUN_00f69570();
    puVar6 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)(puVar6,uVar4);
    FUN_0175ef30(param_3,0xfffffffe);
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_7;
  if ((param_7[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_8 + (param_7[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00f8d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar5,puVar5[1],puVar5[2],*puVar6,puVar6[1],puVar6[2]);
  return;
}


