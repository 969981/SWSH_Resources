/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105c700; name: FUN_0105c700
 */


long * FUN_0105c700(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = *param_2;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar4 & uVar7;
      plVar5 = *(long **)(*param_1 + uVar8 * 8);
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar8 = uVar7 - uVar8 * uVar6;
      }
      plVar5 = *(long **)(*param_1 + uVar8 * 8);
    }
    if (plVar5 != (long *)0x0) {
      if ((uVar4 & uVar6) == 0) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar7 && (plVar5[1] & uVar4) != uVar8))
          goto LAB_0105c7c4;
        } while (plVar5[2] != uVar7);
      }
      else {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_0105c7c4;
          uVar4 = plVar5[1];
          if (uVar4 != uVar7) {
            if (uVar6 <= uVar4) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar1 * uVar6;
            }
            if (uVar4 != uVar8) goto LAB_0105c7c4;
          }
        } while (plVar5[2] != uVar7);
      }
      return plVar5 + 6;
    }
  }
LAB_0105c7c4:
  lVar2 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x330,0x10);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  lVar9 = param_1[6];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *(ulong *)(lVar2 + 0x10) = *param_2;
  *(ulong *)(lVar2 + 0x18) = param_2[1];
  *(ulong *)(lVar2 + 0x20) = param_2[2];
  uVar6 = param_2[3];
  *(ulong *)(lVar2 + 0x28) = uVar6;
  if (uVar6 != 0) {
    (**(code **)(*(long *)(uVar6 + 0x48) + 0x10))();
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)(lVar2 + 0x30),0,0x300);
}


