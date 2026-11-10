/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eb7b0; name: FUN_008eb7b0
 */


void FUN_008eb7b0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *__s;
  undefined8 *puVar5;
  
  DAT_02a4d198 = param_1;
  plVar3 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x20,8);
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_3;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *plVar3 = (long)(PTR_DAT_02717be8 + 0x10);
    plVar3[1] = 0xf4b17a579f18960;
    plVar3[2] = -0x7d5d4e8add6295a5;
    plVar3[3] = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    plVar2 = DAT_02a4d1a0;
    if (DAT_02a4d1a0 != (long *)0x0) {
      puVar5 = (undefined8 *)*DAT_02a4d1a0;
      DAT_02a4d1a0 = plVar3;
      (*(code *)*puVar5)(plVar2);
      (**(code **)(*DAT_02a4d1a8 + 0x18))(DAT_02a4d1a8,plVar2,DAT_02a4d1b0,DAT_02a4d1b8);
      plVar3 = DAT_02a4d1a0;
    }
    DAT_02a4d1a0 = plVar3;
    DAT_02a4d1b0 = 0x20;
    DAT_02a4d1b8 = 8;
    DAT_02a4d1a8 = param_3;
    FUN_008ed560(DAT_02a4d1a0);
    __s = (void *)(**(code **)(*param_3 + 0x10))(param_3,0xcec,4);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0xcec);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


