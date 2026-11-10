/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071cf40; name: FUN_0071cf40
 */


void FUN_0071cf40(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = param_1[1];
  plVar1 = param_1 + 3;
  if (param_2 <= (ulong)((param_1[2] - lVar5 >> 6) * -0x71c71c71c71c71c7)) {
    lVar2 = *plVar1;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
      memset((void *)(lVar5 + 0x40),0,0x200);
    }
    goto LAB_0071d26c;
  }
  lVar5 = lVar5 - *param_1 >> 6;
  uVar7 = 0x71c71c71c71c71;
  param_2 = lVar5 * -0x71c71c71c71c71c7 + param_2;
  if (0x71c71c71c71c71 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1 >> 6;
  if ((ulong)(lVar3 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38) {
    uVar4 = lVar3 * 0x1c71c71c71c71c72;
    uVar7 = param_2;
    if (param_2 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) goto LAB_0071cff4;
    lVar3 = 0;
  }
  else {
LAB_0071cff4:
    lVar3 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 * 0x240,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  lVar6 = *plVar1;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar3 + lVar5 * 0x40 + 0x40),0,0x200);
  }
LAB_0071d26c:
                    /* WARNING: Subroutine does not return */
  abort();
}


