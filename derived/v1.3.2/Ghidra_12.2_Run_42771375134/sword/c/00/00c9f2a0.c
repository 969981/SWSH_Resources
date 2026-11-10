/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9f2a0; name: FUN_00c9f2a0
 */


void FUN_00c9f2a0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  void *__s;
  long *plVar5;
  long lVar6;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar6;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x40);
  FUN_008d4280(&local_170);
  *(undefined8 *)(param_1 + 0xa8) = local_170;
  *(undefined8 *)(param_1 + 0xb0) = uStack_168;
  if (*(long *)(param_1 + 0x80) == 0) {
    local_178 = 0;
  }
  else {
    FUN_00c62ba0(&local_178);
  }
  local_180 = *(undefined8 *)(param_2 + 0x38);
  iVar3 = FUN_00c9ef80(&local_170,local_178,(undefined8 *)(param_1 + 0x88),&local_180);
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  if (iVar3 == 1) {
    *(undefined8 *)(param_1 + 0xb8) = local_170;
    *(undefined8 *)(param_1 + 0xc0) = local_160;
  }
  plVar5 = *(long **)(param_1 + 0x68);
  __s = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,0x110,0x10);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x110);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


