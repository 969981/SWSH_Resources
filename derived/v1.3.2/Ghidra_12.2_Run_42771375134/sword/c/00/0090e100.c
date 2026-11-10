/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e100; name: FUN_0090e100
 */


void FUN_0090e100(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  local_68 = *(undefined8 *)(param_1 + 0x70);
  local_60 = param_1 + 0xf8;
  local_58 = param_1 + 0x4f0;
  local_50 = param_1 + 0x4e8;
  local_48 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
  local_80 = FUN_008da640(*(undefined8 *)(param_1 + 0x608));
  local_78 = FUN_008da630(*(undefined8 *)(param_1 + 0x608));
  local_70 = FUN_008da680(*(undefined8 *)(param_1 + 0x608));
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x88,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_009187c0(uVar1,&local_80);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  puVar3 = *(undefined8 **)(param_1 + 0x5e8);
  *(undefined8 *)(param_1 + 0x5e8) = uVar1;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(**(long **)(param_1 + 0x5f0) + 0x18))
              (*(long **)(param_1 + 0x5f0),puVar3,*(undefined8 *)(param_1 + 0x5f8),
               *(undefined8 *)(param_1 + 0x600));
  }
  *(long **)(param_1 + 0x5f0) = param_2;
  *(undefined8 *)(param_1 + 0x5f8) = 0x88;
  *(undefined8 *)(param_1 + 0x600) = 8;
  return;
}


