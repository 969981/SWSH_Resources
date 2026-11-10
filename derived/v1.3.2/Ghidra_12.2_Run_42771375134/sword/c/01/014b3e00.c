/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3e00; name: FUN_014b3e00
 */


void FUN_014b3e00(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_0272a220;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x81] = 0;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x118,8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  FUN_00885da0(lVar4);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  puVar6 = (undefined8 *)param_1[0x81];
  param_1[0x81] = lVar4;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(long *)param_1[0x82] + 0x18))
              ((long *)param_1[0x82],puVar6,param_1[0x83],param_1[0x84]);
    lVar4 = param_1[0x81];
  }
  param_1[0x83] = 0x118;
  param_1[0x82] = (long)param_2;
  param_1[0x84] = 8;
  uVar2 = FUN_008783b0(param_3);
  uVar3 = FUN_008783c0(param_3);
  FUN_00885df0(lVar4,uVar2,uVar3);
  FUN_014b3f40(param_1,param_3);
  return;
}


