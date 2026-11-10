/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bcf00; name: FUN_006bcf00
 */


void FUN_006bcf00(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar4 = param_1[1] - *param_1 >> 9;
  uVar6 = lVar4 + 1;
  if (uVar6 >> 0x37 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1;
  plVar1 = param_1 + 3;
  plStack_58 = plVar1;
  if ((ulong)(lVar2 >> 9) < 0x3fffffffffffff) {
    uVar3 = lVar2 >> 8;
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar6 == 0) {
      local_78 = 0;
      goto LAB_006bcfb0;
    }
  }
  else {
    uVar6 = 0x7fffffffffffff;
  }
  local_60 = 0;
  local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar6 << 9,0x10);
  if (local_78 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_006bcfb0:
  lVar4 = local_78 + lVar4 * 0x200;
  local_60 = local_78 + uVar6 * 0x200;
  lVar5 = *plVar1;
  lStack_70 = lVar4;
  local_68 = lVar4;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_006a0090(lVar4,*param_2,*param_3);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_68 = local_68 + 0x200;
  FUN_006bca90(param_1,&local_78);
  FUN_006bcda0(&local_78);
  return;
}


