/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f8ccb0; name: FUN_00f8ccb0
 */


undefined8
FUN_00f8ccb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,long *param_6,long param_7)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_60;
  byte *pbStack_58;
  
  lVar2 = FUN_01760060(param_3,param_4);
  puVar6 = *(undefined4 **)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_02721808 != '\0') &&
     (iVar1 = FUN_0175e1b0(param_3,param_4,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_01760060(param_3,0xffffffff);
    uVar4 = FUN_00f69570();
    puVar6 = (undefined4 *)(*pcVar3)(puVar6,uVar4);
    FUN_0175ef30(param_3,0xfffffffe);
  }
  pcVar3 = (code *)*param_6;
  if ((param_6[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_7 + (param_6[1] >> 1)));
  }
  uVar8 = puVar6[1];
  uVar9 = puVar6[2];
  uVar7 = (*pcVar3)(*puVar6);
  FUN_0175ef30(param_3,0);
  pbVar5 = (byte *)FUN_00f67d30();
  pbStack_58 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbStack_58 = pbVar5 + 1;
  }
  local_60 = param_3;
  puVar6 = (undefined4 *)FUN_00f697e0(param_3);
  *puVar6 = uVar7;
  puVar6[1] = uVar8;
  puVar6[2] = uVar9;
  FUN_00f69a30(&local_60);
  return 1;
}


