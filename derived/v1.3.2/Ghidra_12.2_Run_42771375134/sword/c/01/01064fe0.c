/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01064fe0; name: FUN_01064fe0
 */


void FUN_01064fe0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  FUN_00701720(param_1,0);
  puVar2 = PTR_DAT_02723b08;
  puVar1 = PTR_DAT_02723b08 + 0x10;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = (long)puVar1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[9] = (long)(puVar2 + 0xa0);
  param_1[10] = (long)(puVar2 + 0xe0);
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_010653f0(lVar3,param_1,param_2);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar5 = (long *)param_1[0x29];
  param_1[0x29] = lVar3;
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_02723b10 + 0x10);
    if (plVar5[3] != 0) {
      (**(code **)(*(long *)(plVar5[3] + 0x48) + 0x18))();
      plVar5[3] = 0;
    }
    if (plVar5[2] != 0) {
      (**(code **)(*(long *)(plVar5[2] + 0x48) + 0x18))();
      plVar5[2] = 0;
    }
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],plVar5,param_1[0x2b],param_1[0x2c]);
  }
  param_1[0x2a] = (long)param_2;
  param_1[0x2b] = 0x20;
  param_1[0x2c] = 8;
  return;
}


