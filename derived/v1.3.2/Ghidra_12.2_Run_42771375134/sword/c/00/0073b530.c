/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073b530; name: FUN_0073b530
 */


void FUN_0073b530(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  
  FUN_00700120(param_1,1,1);
  param_1[0x17] = 0;
  plVar6 = param_1 + 0x16;
  *plVar6 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar2 = PTR_DAT_02715cf0;
  *param_1 = (long)(PTR_DAT_02715cf0 + 0x10);
  puVar1 = PTR_DAT_027155e0;
  param_1[9] = (long)(puVar2 + 0x98);
  param_1[10] = (long)(puVar2 + 0xd8);
  param_1[0x1c] = (long)(puVar1 + 0x10);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x2e] = 0;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x8b0,0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_0073b6f0(lVar3);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *plVar6;
  *plVar6 = lVar3;
  if (lVar4 != 0) {
    FUN_0073c9d0(lVar4);
    (**(code **)(*(long *)param_1[0x17] + 0x18))
              ((long *)param_1[0x17],lVar4,param_1[0x18],param_1[0x19]);
    lVar3 = param_1[0x16];
  }
  param_1[0x17] = (long)param_2;
  param_1[0x18] = 0x8b0;
  param_1[0x19] = 0x10;
  *(long **)(lVar3 + 8) = param_1;
  pcVar5 = (code *)param_1[0x1f];
  if (pcVar5 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar5)(param_1 + 0x22);
  }
  param_1[0x22] = (long)param_1;
  param_1[0x1e] = (long)&LAB_0073f730;
  param_1[0x1f] = (long)&LAB_0073f890;
  param_1[0x20] = (long)&LAB_0073f8a0;
  param_1[0x21] = (long)&LAB_0073f8b0;
  FUN_006eccd0(*(undefined8 *)(*(long *)PTR_DAT_02710910 + 0x85b0),param_1 + 0x1c);
  return;
}


