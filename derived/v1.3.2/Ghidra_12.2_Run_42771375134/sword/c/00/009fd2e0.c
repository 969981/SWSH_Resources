/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fd2e0; name: FUN_009fd2e0
 */


void FUN_009fd2e0(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (iVar2 = FUN_00884820(*param_2), iVar2 != 0)) {
    uVar9 = 0;
    do {
      lVar7 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar9);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      uVar8 = FUN_0087d610(lVar7,2);
      if ((uVar8 & 1) == 0) {
        uVar6 = FUN_0087a5f0(lVar7);
        uVar3 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),5);
        cVar1 = FUN_009ff100(*(undefined8 *)(param_1 + 0x10));
        if (cVar1 == '\x05') {
          if (uVar6 < uVar3) goto LAB_009fd368;
          goto LAB_009fd454;
        }
        if (cVar1 == '\x04') {
          if (uVar6 != uVar3) goto LAB_009fd368;
          goto LAB_009fd454;
        }
        if ((cVar1 != '\x03') || (uVar6 <= uVar3)) goto LAB_009fd454;
LAB_009fd368:
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          uVar4 = FUN_008783b0(lVar7);
          uVar5 = FUN_008783c0(lVar7);
          FUN_00864b10(uVar4,uVar5);
          uVar4 = FUN_00864ba0(uVar3);
          FUN_0087b2e0(lVar7,uVar4);
          (**(code **)(*plVar10 + 0x18))(plVar10);
          goto LAB_009fd45c;
        }
        uVar4 = FUN_008783b0(0);
        uVar5 = FUN_008783c0(0);
        FUN_00864b10(uVar4,uVar5);
        uVar4 = FUN_00864ba0(uVar3);
        FUN_0087b2e0(0,uVar4);
      }
      else {
LAB_009fd454:
        if (lVar7 != 0) {
LAB_009fd45c:
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
      }
      uVar9 = uVar9 + 1 & 0xff;
      uVar6 = FUN_00884820(*param_2);
    } while (uVar9 < uVar6);
  }
  return;
}


