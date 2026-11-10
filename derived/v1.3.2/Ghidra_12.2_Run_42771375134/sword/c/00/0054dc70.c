/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054dc70; name: FUN_0054dc70
 */


undefined8 FUN_0054dc70(long param_1,void *param_2,long *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t *psVar3;
  size_t *__dest;
  size_t __n;
  undefined1 auStack_40 [16];
  
  FUN_0054b050();
  if (param_3 != (long *)0x0) {
    *(long **)(param_1 + 0x78) = param_3;
    uVar2 = (**(code **)(*param_3 + 0x28))(param_3);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    FUN_00551860(param_1 + 0x10,&DAT_01d38550);
    FUN_00551860(param_1 + 0x20,&DAT_01d38550);
    *(undefined4 *)(param_1 + 0x380) = 1;
    *(undefined1 *)(param_1 + 0x3d0) = 0;
  }
  if (param_2 == (void *)0x0) {
    uVar2 = 0xfffffffa;
  }
  else {
    if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX: ",0x1d27)
      ;
      FUN_00517ae0("CTinyEffect::CreateFromMemory(): Create effect from Memory\n");
    }
    FUN_00550fe0(auStack_40,param_2);
    iVar1 = FUN_00552890(auStack_40,".tfxo file");
    FUN_00551380(auStack_40);
    if (iVar1 == 0) {
      FUN_00551860(param_1 + 0x30,param_2);
    }
    else if ((param_4 & 1) == 0) {
      iVar1 = atoi((char *)((long)param_2 + 0x10));
      *(undefined1 *)(param_1 + 0x340) = 1;
      __n = (size_t)(iVar1 + 0x40);
      psVar3 = (size_t *)
               FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,__n + 8,
                            "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",0x1d3d,0);
      __dest = psVar3;
      if (psVar3 != (size_t *)0x0) {
        __dest = psVar3 + 1;
        *psVar3 = __n;
      }
      *(size_t **)(param_1 + 0x348) = __dest;
      memcpy(__dest,param_2,__n);
    }
    else {
      *(undefined1 *)(param_1 + 0x340) = 0;
      *(void **)(param_1 + 0x348) = param_2;
    }
    FUN_0054cc80(param_1);
    uVar2 = 0;
  }
  return uVar2;
}


