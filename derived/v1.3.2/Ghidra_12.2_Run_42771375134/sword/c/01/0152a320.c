/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152a320; name: FUN_0152a320
 */


undefined8 FUN_0152a320(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined1 auVar11 [16];
  ulong local_48;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_02710798;
  local_48 = local_48 & 0xffffffff00000000;
  uStack_38 = param_3;
  lVar4 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_48);
  nn::os::LockMutex((MutexType *)(lVar4 + 0x78));
  puVar2 = *(uint **)(lVar4 + 0x10);
  uVar8 = (long)puVar2 - (long)*(uint **)(lVar4 + 8);
  if (0 < (long)uVar8) {
    puVar6 = *(uint **)(lVar4 + 8);
    puVar7 = puVar2;
    do {
      puVar10 = (uint *)((long)puVar6 + (uVar8 >> 1 & 0x7fffffffffffffe0));
      if (*puVar10 == *param_2) goto LAB_0152a3b0;
      puVar1 = puVar10 + 8;
      if (*param_2 <= *puVar10) {
        puVar1 = puVar6;
        puVar7 = puVar10;
      }
      uVar8 = (long)puVar7 - (long)puVar1;
      puVar6 = puVar1;
    } while (0 < (long)uVar8);
  }
  puVar10 = puVar2;
LAB_0152a3b0:
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x78));
  if (puVar10 == (uint *)0x0 || puVar10 == puVar2) {
    uVar9 = 0;
  }
  else {
    local_48 = local_48 & 0xffffffff00000000;
    lVar4 = FUN_0153bf80(*(undefined8 *)puVar3,&local_48);
    local_48 = 0x67d0;
    auVar11 = FUN_0152b500(lVar4,param_2,&uStack_38,&local_48);
    uVar9 = auVar11._8_8_;
    if (((auVar11._0_8_ & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0))
    {
      (**(code **)(*plVar5 + 0x50))(plVar5,param_2);
    }
  }
  return uVar9;
}


