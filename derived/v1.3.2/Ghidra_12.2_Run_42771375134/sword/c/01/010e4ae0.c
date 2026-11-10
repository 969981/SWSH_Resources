/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e4ae0; name: FUN_010e4ae0
 */


uint FUN_010e4ae0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long local_40;
  long local_38;
  
  lVar8 = *(long *)(param_1 + 0xb8);
  if ((*(char *)(lVar8 + 0x88) != '\0') && (*(char *)(lVar8 + 0x9c) == '\x01')) {
    plVar9 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
    FUN_011b60e0(&local_38,plVar9,lVar8 + 0xf8,0x2d0);
    if (local_38 != 0) {
      local_40 = local_38;
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      uVar1 = FUN_00878e20(local_38,7);
      iVar2 = FUN_014b48d0(plVar9,&local_40,2,uVar1);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if ((iVar2 == 0) || (*(char *)(*(long *)(param_1 + 0xb8) + 0x41d) == '\0')) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0xb8,8);
        if (lVar5 == 0) {
          (**(code **)(*plVar9 + 0xb8))(plVar9);
        }
        FUN_00866110(lVar5,plVar9);
        *(long **)(lVar5 + 8) = plVar9;
        *(long *)(lVar5 + 0x10) = lVar5;
        *(undefined8 *)(lVar5 + 0x18) = 0xb8;
        *(undefined8 *)(lVar5 + 0x20) = 8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0xa0) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xa0) = 0;
        }
        *(long *)(param_1 + 0xa0) = lVar5;
        FUN_00866390(lVar5,local_38);
        *(undefined1 *)(param_1 + 0xb1) = 1;
        uVar6 = FUN_008783b0(*(undefined8 *)(param_1 + 0xa0));
        uVar7 = FUN_014ae470(uVar6,1);
        if ((uVar7 & 1) == 0) goto LAB_010e4d30;
        uVar3 = FUN_0087d610(*(undefined8 *)(param_1 + 0xa0),2);
        uVar3 = uVar3 ^ 1;
      }
      else {
LAB_010e4d30:
        uVar3 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      lVar8 = *(long *)PTR_DAT_02710848;
      goto joined_r0x010e4cac;
    }
  }
  uVar3 = 0;
  lVar8 = *(long *)PTR_DAT_02710848;
joined_r0x010e4cac:
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x90) != 0)) {
    plVar9 = (long *)(*(long *)(lVar8 + 0x90) + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      uVar4 = FUN_01510f00(lVar8,0x711644f9ed6e814d);
      uVar3 = uVar3 & uVar4;
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  return uVar3 & 1;
}


