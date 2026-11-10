/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e6db0; name: FUN_006e6db0
 */


undefined4 FUN_006e6db0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long local_70;
  long local_68;
  
  FUN_006e1c90();
  uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN_006e1d70(param_1);
  lVar7 = param_1[0x32];
  uVar1 = *(uint *)(lVar7 + 4);
  FUN_006e6f70(param_1 + 0x36,uVar1);
  puVar3 = PTR_DAT_02710860;
  puVar2 = PTR_DAT_02710440;
  if (uVar1 != 0) {
    lVar7 = lVar7 + 8;
    uVar8 = 0;
    do {
      local_70 = 0;
      if (*(char *)(lVar7 + 10) == '\0') {
        lVar6 = FUN_006e5e60();
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        if (local_70 != 0) {
          plVar5 = (long *)(local_70 + 0x48);
          local_70 = lVar6;
          (**(code **)(*plVar5 + 0x18))();
          lVar6 = local_70;
        }
        local_70 = lVar6;
        plVar5 = (long *)param_1[0x37];
        if (plVar5 < (long *)param_1[0x38]) goto LAB_006e6eb4;
LAB_006e6f0c:
        FUN_006e7ad0(param_1 + 0x36,&local_70);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        }
      }
      else {
        FUN_006cf520(&local_68,*(undefined8 *)puVar2);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        }
        local_70 = local_68;
        plVar5 = (long *)param_1[0x37];
        if ((long *)param_1[0x38] <= plVar5) goto LAB_006e6f0c;
LAB_006e6eb4:
        lVar9 = param_1[0x39];
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *plVar5 = local_70;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        param_1[0x37] = param_1[0x37] + 8;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + (ulong)*(ushort *)(lVar7 + 8) + 10;
    } while (uVar8 < uVar1);
  }
  return uVar4;
}


