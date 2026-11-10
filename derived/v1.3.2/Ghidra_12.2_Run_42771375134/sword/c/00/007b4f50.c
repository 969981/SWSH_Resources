/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b4f50; name: FUN_007b4f50
 */


undefined8 FUN_007b4f50(long param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_48;
  
  cVar1 = FUN_007a9cb0();
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar3 = FUN_007b7420();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    cVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
    if (cVar1 != cVar2) goto LAB_007b4fb8;
    *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x438) = *(undefined8 *)(param_1 + 0x1f8);
    goto switchD_007b4fdc_default;
  }
LAB_007b4fb8:
  uVar7 = 0;
  switch(cVar1) {
  case '\0':
    plVar8 = *(long **)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x1f8);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x58);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x6f0,0x10);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_007b5334:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    local_48 = lVar10;
    FUN_007c89b0(lVar4,*(undefined8 *)(param_1 + 0x50),uVar7,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar9 = *(undefined8 **)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar4;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),puVar9,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70));
      lVar4 = *(long *)(param_1 + 0x58);
    }
    uVar7 = 0x6f0;
    goto LAB_007b51b4;
  case '\x01':
  case '\x04':
    goto switchD_007b4fdc_caseD_1;
  case '\x02':
    plVar8 = *(long **)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x1f8);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x58);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x590,0x10);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_007b5334;
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    local_48 = lVar10;
    FUN_007c5dd0(uVar6,*(undefined8 *)(param_1 + 0x50),uVar7,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar9 = *(undefined8 **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),puVar9,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70));
    }
    *(long **)(param_1 + 0x60) = plVar8;
    *(undefined8 *)(param_1 + 0x68) = 0x590;
    *(undefined8 *)(param_1 + 0x70) = 0x10;
    break;
  case '\x03':
    plVar8 = *(long **)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x1f8);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x58);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x640,0x10);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_007b5334;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    local_48 = lVar10;
    FUN_007ba480(lVar4,*(undefined8 *)(param_1 + 0x50),uVar7,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar9 = *(undefined8 **)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar4;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),puVar9,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70));
      lVar4 = *(long *)(param_1 + 0x58);
    }
    uVar7 = 0x640;
LAB_007b51b4:
    *(long **)(param_1 + 0x60) = plVar8;
    *(undefined8 *)(param_1 + 0x68) = uVar7;
    lVar10 = *(long *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x70) = 0x10;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar4 + 0x428);
    *(long *)(lVar4 + 0x428) = lVar10;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    lVar4 = *(long *)(param_1 + 0x58);
    lVar10 = *(long *)(param_1 + 0x1f0);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar4 + 0x430);
    *(long *)(lVar4 + 0x430) = lVar10;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
  }
switchD_007b4fdc_default:
  uVar7 = 1;
switchD_007b4fdc_caseD_1:
  return uVar7;
}


