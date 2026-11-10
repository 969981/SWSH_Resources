/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006863c0; name: FUN_006863c0
 */


void FUN_006863c0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  size_t sVar8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  byte local_98;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70;
  byte local_68;
  
  iVar2 = (**(code **)(*param_2 + 0x78))(param_2);
  if (0 < iVar2) {
    lVar7 = 0;
    do {
      lVar4 = (**(code **)(*param_2 + 0x80))(param_2,lVar7);
      uVar5 = (**(code **)(*param_2 + 0x50))(param_2);
      FUN_005c4670(&local_c0,uVar5,0);
      uVar6 = local_b0 + 1;
      if (local_a0 <= uVar6) {
        uVar6 = local_b0 + 2;
        uVar1 = uVar6;
        if (uVar6 <= local_a0 * 2) {
          uVar1 = local_a0 * 2;
        }
        if (local_a8 != 0) {
          uVar1 = local_a8 + uVar6;
        }
        FUN_005c5e00(&local_c0,uVar1,1);
        uVar6 = local_b0 + 1;
      }
      *(undefined1 *)(local_b8 + local_b0) = 0x2f;
      local_b0 = local_b0 + 1;
      *(undefined1 *)(local_b8 + uVar6) = 0;
      FUN_005c4670(&local_90,&local_c0,0);
      sVar8 = *(size_t *)(lVar4 + 0x38);
      if (sVar8 != 0) {
        uVar6 = local_80 + sVar8;
        if (local_70 <= uVar6) {
          uVar6 = uVar6 + 1;
          uVar1 = uVar6;
          if (uVar6 <= local_70 * 2) {
            uVar1 = local_70 * 2;
          }
          if (local_78 != 0) {
            uVar1 = local_78 + uVar6;
          }
          FUN_005c5e00(&local_90,uVar1,1);
          uVar6 = local_80 + sVar8;
        }
        memcpy((void *)(local_88 + local_80),*(void **)(lVar4 + 0x30),sVar8);
        local_80 = local_80 + sVar8;
        *(undefined1 *)(local_88 + uVar6) = 0;
      }
      FUN_005c80d0(lVar4 + 0x58,&local_90);
      if ((local_68 & 1) == 0) {
        if ((local_88 != 0) && (local_90 != (long *)0x0)) {
          (**(code **)(*local_90 + 0x48))
                    (local_90,local_88,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_88 = 0;
      }
      if ((local_98 & 1) == 0) {
        if ((local_b8 != 0) && (local_c0 != (long *)0x0)) {
          (**(code **)(*local_c0 + 0x48))
                    (local_c0,local_b8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_b8 = 0;
      }
      uVar3 = FUN_005c35c0(lVar4 + 0x58);
      *(undefined4 *)(lVar4 + 0x88) = uVar3;
      lVar7 = lVar7 + 1;
      iVar2 = (**(code **)(*param_2 + 0x78))(param_2);
    } while (lVar7 < iVar2);
  }
  iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  if (0 < iVar2) {
    lVar7 = 0;
    do {
      lVar4 = (**(code **)(*param_2 + 0x68))(param_2,lVar7);
      uVar5 = (**(code **)(*param_2 + 0x50))(param_2);
      FUN_005c4670(&local_c0,uVar5,0);
      uVar6 = local_b0 + 1;
      if (local_a0 <= uVar6) {
        uVar6 = local_b0 + 2;
        uVar1 = uVar6;
        if (uVar6 <= local_a0 * 2) {
          uVar1 = local_a0 * 2;
        }
        if (local_a8 != 0) {
          uVar1 = local_a8 + uVar6;
        }
        FUN_005c5e00(&local_c0,uVar1,1);
        uVar6 = local_b0 + 1;
      }
      *(undefined1 *)(local_b8 + local_b0) = 0x2f;
      local_b0 = local_b0 + 1;
      *(undefined1 *)(local_b8 + uVar6) = 0;
      FUN_005c4670(&local_90,&local_c0,0);
      sVar8 = *(size_t *)(lVar4 + 0x38);
      if (sVar8 != 0) {
        uVar6 = local_80 + sVar8;
        if (local_70 <= uVar6) {
          uVar6 = uVar6 + 1;
          uVar1 = uVar6;
          if (uVar6 <= local_70 * 2) {
            uVar1 = local_70 * 2;
          }
          if (local_78 != 0) {
            uVar1 = local_78 + uVar6;
          }
          FUN_005c5e00(&local_90,uVar1,1);
          uVar6 = local_80 + sVar8;
        }
        memcpy((void *)(local_88 + local_80),*(void **)(lVar4 + 0x30),sVar8);
        local_80 = local_80 + sVar8;
        *(undefined1 *)(local_88 + uVar6) = 0;
      }
      FUN_005c80d0(lVar4 + 0x58,&local_90);
      if ((local_68 & 1) == 0) {
        if ((local_88 != 0) && (local_90 != (long *)0x0)) {
          (**(code **)(*local_90 + 0x48))
                    (local_90,local_88,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_88 = 0;
      }
      if ((local_98 & 1) == 0) {
        if ((local_b8 != 0) && (local_c0 != (long *)0x0)) {
          (**(code **)(*local_c0 + 0x48))
                    (local_c0,local_b8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_b8 = 0;
      }
      uVar3 = FUN_005c35c0(lVar4 + 0x58);
      *(undefined4 *)(lVar4 + 0x88) = uVar3;
      FUN_006863c0(param_1,lVar4);
      lVar7 = lVar7 + 1;
      iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar7 < iVar2);
  }
  return;
}


