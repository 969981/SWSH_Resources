/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077cea0; name: FUN_0077cea0
 */


void FUN_0077cea0(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  void *__s;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar3 = PTR_DAT_02716208;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar3 + 0x48);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)plVar7;
  plVar8 = param_1 + 0xb;
  *plVar8 = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  sVar4 = FUN_0077d680(param_2);
  uVar1 = sVar4 + 1;
  *(short *)((long)param_1 + 0x7a) = sVar4;
  *(ushort *)(param_1 + 0xf) = uVar1;
  __s = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(ulong)uVar1 << 1,2);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
  lVar6 = *(long *)(lVar5 + 0x80);
  *(long *)(lVar5 + 0x80) = lVar6 + 1;
  if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(ulong)uVar1 << 1);
  }
  *(long *)(lVar5 + 0x80) = lVar6;
  lVar5 = *plVar8;
  *plVar8 = (long)__s;
  if (lVar5 != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar5,param_1[0xd],param_1[0xe]);
    __s = (void *)param_1[0xb];
  }
  param_1[0xc] = (long)plVar7;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  if (__s != (void *)0x0) {
    FUN_0077d7e0(__s,param_2,(short)param_1[0xf]);
    *(undefined1 *)((long)param_1 + 0x7c) = 1;
  }
  return;
}


