/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007421a0; name: FUN_007421a0
 */


void FUN_007421a0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar3 = param_1[1] - *param_1 >> 4;
  uVar7 = 0x2647c69456217e;
  uVar4 = lVar3 * 0x77a04c8f8d28ac43 + 1;
  if (0x2647c69456217e < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  plVar1 = param_1 + 3;
  plStack_58 = plVar1;
  if ((ulong)(lVar5 * 0x77a04c8f8d28ac43) < 0x1323e34a2b10bf) {
    uVar6 = lVar5 * -0x10bf66e0e5aea77a;
    uVar7 = uVar4;
    if (uVar4 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
      goto LAB_00742280;
    }
  }
  local_60 = 0;
  lVar5 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 * 0x6b0,0x10);
  if (lVar5 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_00742280:
  lVar8 = lVar5 + lVar3 * 0x10;
  local_60 = lVar5 + uVar7 * 0x6b0;
  lVar9 = *plVar1;
  local_78 = lVar5;
  lStack_70 = lVar8;
  local_68 = lVar8;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    uVar4 = *(ulong *)(param_2 + 0x5d0);
    *(ulong *)(lVar5 + lVar3 * 0x10 + 0x5d0) = uVar4;
    if (uVar4 < 4) {
      lVar9 = *(long *)(param_2 + 0x5d0);
      if (lVar9 != 0) {
        lVar10 = param_2;
        do {
          lVar9 = lVar9 + -1;
          FUN_0071c9a0(lVar8,lVar10);
          lVar10 = lVar10 + 0x1f0;
          lVar8 = lVar8 + 0x1f0;
        } while (lVar9 != 0);
      }
      lVar8 = *(long *)(param_2 + 0x5e0);
      *(long *)(lVar5 + lVar3 * 0x10 + 0x5e0) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(param_2 + 0x5e8);
      *(long *)(lVar5 + lVar3 * 0x10 + 0x5e8) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar8 = lVar5 + lVar3 * 0x10;
      *(undefined4 *)(lVar8 + 0x5f0) = *(undefined4 *)(param_2 + 0x5f0);
      lVar9 = *(long *)(param_2 + 0x5f8);
      *(long *)(lVar8 + 0x5f8) = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(param_2 + 0x600);
      *(long *)(lVar5 + lVar3 * 0x10 + 0x600) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      memcpy((void *)(lVar5 + lVar3 * 0x10 + 0x608),(void *)(param_2 + 0x608),0xa4);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      local_68 = local_68 + 0x6b0;
      FUN_00742410(param_1,&local_78);
      FUN_007425b0(&local_78);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


