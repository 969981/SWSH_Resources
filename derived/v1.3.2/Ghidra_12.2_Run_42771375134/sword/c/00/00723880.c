/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723880; name: FUN_00723880
 */


void FUN_00723880(undefined8 param_1,long *param_2,long *param_3,int *param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_02710860;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  puVar5 = PTR_DAT_02710a18;
  lVar9 = *param_3;
  iVar3 = *param_4;
  uVar10 = *param_5;
  plVar7[7] = 0;
  *(undefined4 *)(plVar7 + 8) = 0;
  *(undefined4 *)(plVar7 + 6) = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[2] = 0;
  plVar7[3] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar7 + 10) = 0;
  puVar2 = PTR_DAT_02715518;
  plVar1 = plVar7 + 0xb;
  *plVar7 = (long)(PTR_DAT_02715518 + 0x10);
  plVar7[1] = lVar8;
  plVar7[9] = (long)(puVar2 + 0x50);
  FUN_006f6640(plVar1);
  FUN_006f6640(plVar7 + 0x19);
  *(undefined4 *)(plVar7 + 0x27) = 0xffffffff;
  FUN_006f66d0(plVar1,0x10,lVar9,iVar3,uVar10);
  FUN_006f66d0(plVar7 + 0x19,0x10,lVar9,iVar3,uVar10);
  puVar2 = PTR_DAT_02715b08 + 0x50;
  *plVar7 = (long)(PTR_DAT_02715b08 + 0x10);
  plVar7[9] = (long)puVar2;
  iVar4 = *(int *)PTR_DAT_02715500;
  *(int *)(plVar7 + 0x27) = iVar4;
  FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,plVar7);
  __s = (void *)thunk_FUN_0199c7e0(plVar1 + (long)iVar4 * 0xe);
                    /* WARNING: Subroutine does not return */
  memset(__s,0,lVar9 * iVar3);
}


