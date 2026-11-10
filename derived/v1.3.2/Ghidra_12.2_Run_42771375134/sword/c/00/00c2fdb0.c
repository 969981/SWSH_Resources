/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2fdb0; name: FUN_00c2fdb0
 */


void FUN_00c2fdb0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  void *__s;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  
  plVar5 = (long *)param_3[1];
  FUN_0075efb0(auStack_48,*param_3,0,1);
  iVar2 = (**(code **)(*plVar5 + 0x60))();
  FUN_0075f0a0(auStack_48);
  plVar5 = *(long **)(param_2 + 8);
  __s = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(long)iVar2,1);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  lVar6 = *(long *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x80) = lVar6 + 1;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(long)iVar2);
  }
  *(long *)(lVar3 + 0x80) = lVar6;
  uVar1 = param_3[1];
  FUN_0075efb0(auStack_48,*param_3,0,1);
  uVar4 = FUN_0080c720(uVar1,__s,0);
  FUN_0075f0a0(auStack_48);
  if ((uVar4 & 1) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (__s != (void *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,__s,0,1);
    }
  }
  else {
    *param_1 = __s;
    param_1[1] = plVar5;
    param_1[2] = 0;
    param_1[3] = 1;
  }
  return;
}


