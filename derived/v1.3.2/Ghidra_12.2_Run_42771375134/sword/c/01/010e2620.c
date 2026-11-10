/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e2620; name: FUN_010e2620
 */


void FUN_010e2620(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_0101bf00();
  puVar1 = PTR_DAT_02724640;
  param_1[0x12] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xb8);
  param_1[10] = (long)(puVar1 + 0xf8);
  plVar4 = param_1 + 0x11;
  *plVar4 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0xa0,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_010e3180(lVar2,param_2,param_3);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *plVar4;
  *plVar4 = lVar2;
  if (lVar3 != 0) {
    FUN_010e2f30(lVar3);
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],lVar3,param_1[0x13],param_1[0x14]);
  }
  param_1[0x12] = (long)param_2;
  param_1[0x13] = 0xa0;
  param_1[0x14] = 8;
  return;
}


