/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a0690; name: FUN_006a0690
 */


void FUN_006a0690(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar6 = param_1[3];
  param_1[3] = lVar9;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[5];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 8);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = *(undefined8 *)(param_2 + 0x20);
    param_1[7] = uVar3;
    param_1[4] = uVar8;
    param_1[5] = uVar2;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x15];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x18);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0x90);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x16] = *(undefined8 *)(param_2 + 0xa0);
    param_1[0x17] = uVar3;
    param_1[0x14] = uVar8;
    param_1[0x15] = uVar2;
  }
  param_1[0x24] = *(undefined8 *)(param_2 + 0x110);
  lVar9 = FUN_006a9880(param_1 + 2);
  puVar1 = param_1 + 0x26;
  FUN_0069a660(puVar1);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x10))((long *)param_1[0x2a],*param_1,0,param_3,param_4);
    (**(code **)(*(long *)param_1[0x2e] + 0x10))((long *)param_1[0x2e],*param_1,0,param_3,param_4);
    (**(code **)(*(long *)param_1[0x32] + 0x10))((long *)param_1[0x32],*param_1,0,param_3,param_4);
    (**(code **)(*(long *)param_1[0x36] + 0x10))((long *)param_1[0x36],*param_1,0,param_3,param_4);
    plVar7 = (long *)param_1[0x3a];
    uVar8 = *param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x10);
    lVar9 = 0;
  }
  else {
    iVar4 = FUN_006a99e0(param_2);
    FUN_0069a7c0(puVar1,iVar4 != 0);
    uVar5 = FUN_006a9950(param_2);
    FUN_0069a7e0(puVar1,uVar5);
    iVar4 = FUN_006a98c0(param_2);
    FUN_0069a800((float)(iVar4 - 1),puVar1);
    (**(code **)(*(long *)param_1[0x2a] + 0x10))
              ((long *)param_1[0x2a],*param_1,lVar9,param_3,param_4);
    (**(code **)(*(long *)param_1[0x2e] + 0x10))
              ((long *)param_1[0x2e],*param_1,lVar9,param_3,param_4);
    (**(code **)(*(long *)param_1[0x32] + 0x10))
              ((long *)param_1[0x32],*param_1,lVar9,param_3,param_4);
    (**(code **)(*(long *)param_1[0x36] + 0x10))
              ((long *)param_1[0x36],*param_1,lVar9,param_3,param_4);
    plVar7 = (long *)param_1[0x3a];
    uVar8 = *param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x006a0924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar7,uVar8,lVar9,param_3,param_4);
  return;
}


