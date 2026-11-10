/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdff50; name: FUN_00bdff50
 */


byte FUN_00bdff50(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long local_38 [7];
  
  do {
    while (iVar1 = *(int *)(param_1 + 0x68), *(char *)(param_1 + 0x90) != '\0') {
      if (iVar1 != 1) {
        if (iVar1 != 3) {
          *(undefined4 *)(param_1 + 0x68) = 5;
          *(undefined1 *)(param_1 + 0x90) = 0;
          goto switchD_00bdffb0_caseD_5;
        }
        goto switchD_00bdffb0_caseD_3;
      }
switchD_00bdffb0_caseD_1:
      lVar5 = *(long *)(param_1 + 0x88);
      if (lVar5 == 0) {
        plVar7 = *(long **)(param_1 + 0x60);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x78,8);
        if (lVar5 == 0) {
          (**(code **)(*plVar7 + 0xb8))(plVar7);
        }
        FUN_0168f8e0(lVar5,*(undefined8 *)(param_1 + 0x60),0);
        *(long **)(lVar5 + 8) = plVar7;
        *(long *)(lVar5 + 0x10) = lVar5;
        *(undefined8 *)(lVar5 + 0x18) = 0x78;
        *(undefined8 *)(lVar5 + 0x20) = 8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x88) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x88) = 0;
        }
        *(long *)(param_1 + 0x88) = lVar5;
        if (lVar5 == 0) {
          uVar6 = 5;
          goto LAB_00be0264;
        }
      }
      uVar4 = FUN_0168fa60(lVar5);
      if ((uVar4 & 1) == 0) goto switchD_00bdffb0_default;
      uVar6 = 4;
LAB_00be0264:
      *(undefined4 *)(param_1 + 0x68) = uVar6;
    }
    switch(iVar1) {
    case 1:
      goto switchD_00bdffb0_caseD_1;
    case 2:
      lVar5 = *(long *)(param_1 + 0x80);
      if (((lVar5 == 0) || (*(long *)(param_1 + 0x70) == 0)) ||
         (lVar3 = *(long *)(param_1 + 0x88), lVar3 == 0)) {
        uVar6 = 5;
      }
      else {
        local_38[0] = lVar5;
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        FUN_016905d0(lVar3,local_38);
        if (local_38[0] != 0) {
          (**(code **)(*(long *)(local_38[0] + 0x48) + 0x18))();
          local_38[0] = 0;
        }
        FUN_01690170(*(undefined8 *)(param_1 + 0x88),1,*(long *)(param_1 + 0x70) + 0x60);
        uVar6 = 3;
      }
      *(undefined4 *)(param_1 + 0x68) = uVar6;
      bVar2 = FUN_00bdff50(param_1);
      goto LAB_00be0198;
    case 3:
switchD_00bdffb0_caseD_3:
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar6 = 5;
        goto LAB_00be0188;
      }
      FUN_0168fd10();
      uVar4 = FUN_01690590(*(undefined8 *)(param_1 + 0x88));
      if ((uVar4 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0x78);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_1 + 0x70);
          *(undefined8 *)(param_1 + 0x70) = 0;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
          *(undefined1 *)(param_1 + 0x92) = 1;
          uVar6 = 4;
          if (*(char *)(param_1 + 0x91) != '\0') {
            uVar6 = 5;
          }
        }
        else {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
          lVar3 = *(long *)(param_1 + 0x70);
          *(long *)(param_1 + 0x70) = lVar5;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          }
          lVar5 = *(long *)(param_1 + 0x78);
          *(undefined8 *)(param_1 + 0x78) = 0;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
          uVar6 = 2;
        }
        goto LAB_00be0264;
      }
      goto switchD_00bdffb0_default;
    case 4:
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar6 = 2;
LAB_00be0188:
        *(undefined4 *)(param_1 + 0x68) = uVar6;
      }
switchD_00bdffb0_default:
      bVar2 = *(int *)(param_1 + 0x68) == 0;
LAB_00be0198:
      return bVar2 & 1;
    case 5:
switchD_00bdffb0_caseD_5:
      if ((*(long *)(param_1 + 0x88) != 0) && (uVar4 = FUN_0168feb0(), (uVar4 & 1) == 0))
      goto switchD_00bdffb0_default;
      lVar5 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      lVar5 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      lVar5 = *(long *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      lVar5 = *(long *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      break;
    default:
      goto switchD_00bdffb0_default;
    }
  } while( true );
}


