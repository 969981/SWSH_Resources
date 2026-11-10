/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f8c9e0; name: FUN_00f8c9e0
 */


undefined8
FUN_00f8c9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,long *param_6,long param_7)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  float fVar6;
  
  lVar2 = FUN_01760060(param_3,param_4);
  puVar5 = *(undefined4 **)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_02721808 != '\0') &&
     (iVar1 = FUN_0175e1b0(param_3,param_4,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_01760060(param_3,0xffffffff);
    uVar4 = FUN_00f69570();
    puVar5 = (undefined4 *)(*pcVar3)(puVar5,uVar4);
    FUN_0175ef30(param_3,0xfffffffe);
  }
  pcVar3 = (code *)*param_6;
  if ((param_6[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_7 + (param_6[1] >> 1)));
  }
  fVar6 = (float)(*pcVar3)(*puVar5,puVar5[1],puVar5[2]);
  FUN_0175ef30(param_3,0);
  FUN_01760330((double)fVar6,param_3);
  return 1;
}


