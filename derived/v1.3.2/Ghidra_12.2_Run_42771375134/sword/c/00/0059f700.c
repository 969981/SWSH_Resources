/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059f700; name: FUN_0059f700
 */


undefined8 FUN_0059f700(long *param_1,char *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  FUN_0059ebe0(param_1,0);
  puVar1 = PTR_DAT_02713d38;
  param_1[6] = (long)(param_1 + 6);
  param_1[7] = (long)(param_1 + 6);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[8] = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_00551860(param_1 + 2,PTR_s_CRenderTexturePool_02713d40);
    lVar2 = param_1[8];
  }
  else {
    FUN_00550fe0(auStack_60,PTR_s_CRenderTexturePool_02713d40);
    FUN_005528d0(auStack_50,auStack_60,&DAT_01ce77a5);
    FUN_005528d0(auStack_40,auStack_50,param_2);
    FUN_00551670(param_1 + 2,auStack_40);
    FUN_00551380(auStack_40);
    FUN_00551380(auStack_50);
    FUN_00551380(auStack_60);
    lVar2 = param_1[8];
  }
  if (lVar2 != 0) {
    lVar2 = param_1[6];
    plVar3 = (long *)param_1[7];
    *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = *plVar3;
    param_1[8] = 0;
    puVar1 = PTR_PTR_02713988;
    while (plVar3 != param_1 + 6) {
      plVar3 = (long *)plVar3[1];
      FUN_005b9b10(*(undefined8 *)puVar1);
    }
  }
  return 0;
}


