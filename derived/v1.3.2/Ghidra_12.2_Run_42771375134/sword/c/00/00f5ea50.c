/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5ea50; name: FUN_00f5ea50
 */


undefined8 FUN_00f5ea50(undefined8 param_1,undefined8 param_2,long *param_3)

{
  double dVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_01760060(param_2,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_02721450 != '\0') && (iVar2 = FUN_0175e1b0(param_2,1,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_01760060(param_2,0xffffffff);
    uVar5 = FUN_00f5e990();
    lVar3 = (*pcVar4)(lVar3,uVar5);
    FUN_0175ef30(param_2,0xfffffffe);
  }
  dVar1 = (double)FUN_0175fa50(param_2,3,0);
  *(float *)(lVar3 + *param_3) = (float)dVar1;
  FUN_0175ef30(param_2,0);
  return 0;
}


