/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f694b0; name: FUN_00f694b0
 */


undefined8 FUN_00f694b0(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_01760060(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_02721808 != '\0') && (iVar1 = FUN_0175e1b0(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_01760060(param_1,0xffffffff);
    uVar4 = FUN_00f69570();
    lVar2 = (*pcVar3)(lVar2,uVar4);
    FUN_0175ef30(param_1,0xfffffffe);
  }
  lVar5 = *param_2;
  FUN_0175ef30(param_1,0);
  FUN_01760330((double)*(float *)(lVar2 + lVar5),param_1);
  return 1;
}


