/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f8b8a0; name: FUN_00f8b8a0
 */


undefined8
FUN_00f8b8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,long *param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  lVar3 = FUN_01760060(param_3,param_4);
  puVar6 = *(undefined4 **)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_02721808 != '\0') &&
     (iVar1 = FUN_0175e1b0(param_3,param_4,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_01760060(param_3,0xffffffff);
    uVar5 = FUN_00f69570();
    puVar6 = (undefined4 *)(*pcVar4)(puVar6,uVar5);
    FUN_0175ef30(param_3,0xfffffffe);
  }
  pcVar4 = (code *)*param_6;
  if ((param_6[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_7 + (param_6[1] >> 1)));
  }
  uVar2 = (*pcVar4)(*puVar6,puVar6[1],puVar6[2]);
  FUN_0175ef30(param_3,0);
  FUN_01760670(param_3,uVar2 & 1);
  return 1;
}


