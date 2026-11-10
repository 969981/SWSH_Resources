/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f28a0; name: FUN_011f28a0
 */


uint FUN_011f28a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_02710860;
LAB_011f28e8:
  uVar6 = *(uint *)(param_1 + 0x68);
  switch(uVar6) {
  case 1:
    goto switchD_011f2900_caseD_1;
  case 2:
    if ((*(char *)(param_1 + 0x74) == '\0') && (*(char *)(param_1 + 0x70) == '\0'))
    goto LAB_011f2b48;
    *(undefined4 *)(param_1 + 0x68) = 4;
    goto LAB_011f28e8;
  case 3:
    if (*(char *)(param_1 + 0x74) != '\0') {
      uVar5 = 5;
      goto LAB_011f2b74;
    }
    if (*(char *)(param_1 + 0x70) == '\0') goto LAB_011f2b48;
    if (*(int *)(param_1 + 0x6c) == 0) {
      if (*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x88)) {
        uVar3 = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 4;
        if ((ulong)(long)*(int *)(param_1 + 0x7c) <= uVar3) {
          uVar8 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
          if (uVar8 < uVar3) {
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x7c);
            *(undefined1 *)(param_1 + 0x74) = 1;
          }
          else if (uVar8 == uVar3) {
LAB_011f2ae4:
            *(undefined4 *)(param_1 + 0x68) = 7;
          }
        }
      }
    }
    goto LAB_011f28e8;
  case 4:
    lVar4 = *(long *)(param_1 + 0xe0);
    if (lVar4 == 0) {
      plVar9 = *(long **)(param_1 + 0x60);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,0x78,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_0168f8e0(lVar4,*(undefined8 *)(param_1 + 0x60),0);
      *(long **)(lVar4 + 8) = plVar9;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x78;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xe0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xe0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xe0) = 0;
      }
      *(long *)(param_1 + 0xe0) = lVar4;
      if (lVar4 == 0) goto LAB_011f2ae4;
    }
    uVar3 = FUN_0168fa60(lVar4);
    if ((uVar3 & 1) == 0) goto LAB_011f2b48;
    *(undefined4 *)(param_1 + 0x68) = 3;
    goto LAB_011f28e8;
  case 5:
    if (*(char *)(param_1 + 0x74) != '\0') {
      uVar3 = FUN_011f2bb0(param_1,*(undefined4 *)(param_1 + 0x78));
      uVar5 = 6;
      if ((uVar3 & 1) == 0) {
        uVar5 = 7;
      }
      *(undefined4 *)(param_1 + 0x68) = uVar5;
      goto LAB_011f28e8;
    }
    break;
  case 6:
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_0168fd10();
      uVar3 = FUN_01690590(*(undefined8 *)(param_1 + 0xe0));
      if ((uVar3 & 1) != 0) goto LAB_011f2b48;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      *(undefined1 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x68) = 3;
      goto LAB_011f28e8;
    }
    break;
  case 7:
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_011f2ad4;
    uVar3 = FUN_0168feb0();
    if ((uVar3 & 1) == 0) goto LAB_011f2b48;
    lVar4 = *(long *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x68) = 8;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    goto LAB_011f28e8;
  case 8:
    uVar5 = 1;
    if (*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) !=
        *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0)) {
      uVar5 = 2;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    goto LAB_011f2b48;
  default:
    goto switchD_011f2900_default;
  }
  uVar5 = 7;
LAB_011f2b74:
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  goto LAB_011f2b7c;
LAB_011f2ad4:
  *(undefined4 *)(param_1 + 0x68) = 8;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  goto LAB_011f28e8;
switchD_011f2900_caseD_1:
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar3 = FUN_0168feb0();
    if ((uVar3 & 1) == 0) {
LAB_011f2b48:
      uVar6 = *(uint *)(param_1 + 0x68);
switchD_011f2900_default:
      uVar7 = 0xdU >> (ulong)(uVar6 & 0xf) & 1;
      if (3 < uVar6) {
        uVar7 = 0;
      }
      goto LAB_011f2b7c;
    }
    lVar4 = *(long *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 2;
  uVar7 = 1;
LAB_011f2b7c:
  return uVar7 | *(int *)(param_1 + 0x6c) != 0;
}


