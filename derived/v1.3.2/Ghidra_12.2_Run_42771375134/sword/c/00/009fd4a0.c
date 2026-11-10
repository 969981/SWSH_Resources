/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fd4a0; name: FUN_009fd4a0
 */


void FUN_009fd4a0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_009fed30(*(long *)(param_1 + 0x10),4);
    iVar2 = FUN_00884820(*param_2);
    puVar1 = PTR_DAT_02710860;
    if ((uVar4 & 1) == 0) {
      if (iVar2 != 0) {
        uVar8 = 0;
        do {
          lVar5 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar8);
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
          }
          uVar4 = FUN_0087d610(lVar5,2);
          if ((uVar4 & 1) == 0) {
            FUN_00878310(lVar5);
          }
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          }
          uVar8 = uVar8 + 1 & 0xff;
          uVar3 = FUN_00884820(*param_2);
        } while (uVar8 < uVar3);
      }
    }
    else if (iVar2 != 0) {
      uVar8 = 0;
      do {
        lVar5 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar8);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        uVar4 = FUN_0087d610(lVar5,2);
        if ((uVar4 & 1) == 0) {
          plVar9 = *(long **)(param_1 + 8);
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,0x60,8);
          if (lVar7 == 0) {
            (**(code **)(*plVar9 + 0xb8))(plVar9);
          }
          FUN_011f5930(lVar7,*(undefined8 *)(param_1 + 8));
          *(long **)(lVar7 + 8) = plVar9;
          *(long *)(lVar7 + 0x10) = lVar7;
          *(undefined8 *)(lVar7 + 0x18) = 0x60;
          *(undefined8 *)(lVar7 + 0x20) = 8;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          if (lVar7 == 0) {
            FUN_011f5c90(0,lVar5);
          }
          else {
            plVar9 = (long *)(lVar7 + 0x48);
            (**(code **)(*plVar9 + 0x10))(plVar9);
            FUN_011f5c90(lVar7,lVar5);
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        uVar8 = uVar8 + 1 & 0xff;
        uVar3 = FUN_00884820(*param_2);
      } while (uVar8 < uVar3);
    }
  }
  return;
}


