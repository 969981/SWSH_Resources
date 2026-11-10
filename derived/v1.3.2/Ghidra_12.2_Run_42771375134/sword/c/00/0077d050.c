/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d050; name: FUN_0077d050
 */


void FUN_0077d050(long *param_1,ushort param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined2 *__s;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02716208;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar2 + 0x48);
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)plVar5;
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  *(ushort *)(param_1 + 0xf) = param_2;
  __s = (undefined2 *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)param_2 << 1,2);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  lVar4 = *(long *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x80) = lVar4 + 1;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(ulong)param_2 << 1);
  }
  *(long *)(lVar3 + 0x80) = lVar4;
  lVar3 = *plVar6;
  *plVar6 = (long)__s;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar3,param_1[0xd],param_1[0xe]);
    __s = (undefined2 *)param_1[0xb];
  }
  param_1[0xc] = (long)plVar5;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  if (__s != (undefined2 *)0x0) {
    *__s = 0;
    *(undefined1 *)((long)param_1 + 0x7c) = 1;
  }
  return;
}


