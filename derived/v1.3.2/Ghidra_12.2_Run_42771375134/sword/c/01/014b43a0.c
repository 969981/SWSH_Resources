/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b43a0; name: FUN_014b43a0
 */


void FUN_014b43a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  param_1[0x84] = 0;
  puVar1 = PTR_DAT_0272a220;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x81] = 0;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x118,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_00885da0(lVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar4 = (undefined8 *)param_1[0x81];
  param_1[0x81] = lVar2;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0x82] + 0x18))
              ((long *)param_1[0x82],puVar4,param_1[0x83],param_1[0x84]);
  }
  param_1[0x82] = (long)param_2;
  param_1[0x83] = 0x118;
  param_1[0x84] = 8;
  return;
}


