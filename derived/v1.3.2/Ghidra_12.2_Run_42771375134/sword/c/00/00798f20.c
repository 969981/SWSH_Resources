/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00798f20; name: FUN_00798f20
 */


void FUN_00798f20(undefined8 param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *__s;
  
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  iVar2 = *param_3;
  FUN_00799060(plVar6,0x10,(long)iVar2,*param_4);
  puVar1 = PTR_DAT_02715b08 + 0x50;
  *plVar6 = (long)(PTR_DAT_02715b08 + 0x10);
  puVar4 = PTR_DAT_02715500;
  plVar6[9] = (long)puVar1;
  iVar3 = *(int *)puVar4;
  *(int *)(plVar6 + 0x27) = iVar3;
  FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,plVar6);
  __s = (void *)thunk_FUN_0199c7e0(plVar6 + (long)iVar3 * 0xe + 0xb);
                    /* WARNING: Subroutine does not return */
  memset(__s,0,(long)iVar2);
}


