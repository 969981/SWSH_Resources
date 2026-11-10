/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012aa990; name: FUN_012aa990
 */


undefined8
FUN_012aa990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  MutexType *pMVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long local_140;
  undefined **ppuStack_138;
  undefined4 *local_130;
  code **local_128;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined *local_c0 [5];
  undefined1 auStack_98 [60];
  undefined4 local_5c;
  undefined8 *local_58;
  
  pMVar1 = (MutexType *)(param_1 + 0xa8);
  local_5c = param_5;
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    nn::os::LockMutex(pMVar1);
    lVar6 = *(long *)(param_1 + 0x78);
    lVar2 = *(long *)(param_1 + 0x80);
    lVar10 = *(long *)(param_1 + 0x88);
    nn::os::UnlockMutex(pMVar1);
    if ((ulong)(lVar2 - lVar6) < (ulong)(lVar10 - lVar6)) {
      FUN_012aa770(local_c0,param_2,param_3,param_4);
      pcVar12 = *(code **)(param_1 + 8);
      pcVar5 = (code *)(**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x30,8);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(code **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = pcVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar4 = PTR_DAT_02727350;
      *(long *)(pcVar5 + 0x20) = 0;
      *(long *)(pcVar5 + 0x28) = 0;
      *(long *)(pcVar5 + 0x10) = 0;
      *(long *)(pcVar5 + 0x18) = 0;
      *(undefined **)pcVar5 = puVar4 + 0x10;
      *(long *)(pcVar5 + 8) = 0;
      local_d0 = (undefined1 *)0x30;
      local_c8 = (undefined1 *)0x8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      local_130 = &local_5c;
      local_128 = &local_e0;
      local_160 = FUN_012ac070;
      local_158 = FUN_012ac0c0;
      local_150 = &LAB_012ac0d0;
      local_148 = &LAB_012ac0f0;
      local_140 = param_1;
      ppuStack_138 = local_c0;
      local_e0 = pcVar5;
      local_d8 = pcVar12;
      uVar7 = FUN_012ad0b0(pcVar5);
      if ((uVar7 & 1) == 0) {
        puVar8 = (undefined8 *)FUN_007ac3d0(1,60000);
        (**(code **)(*(long *)pcVar5 + 0x10))(pcVar5,puVar8,param_1 + 0xe8);
        local_58 = puVar8;
        uVar7 = (*local_160)(&local_140,&local_58);
        if ((uVar7 & 1) == 0) {
          (**(code **)*puVar8)(puVar8);
          FUN_017cd7a0(puVar8);
          (**(code **)(*(long *)pcVar5 + 0x18))(pcVar5);
          goto LAB_012aabb4;
        }
        plVar9 = (long *)FUN_017cd750(0x28);
        if (plVar9 == (long *)0x0) {
          bVar3 = true;
          pcVar5 = local_158;
        }
        else {
          *plVar9 = (long)(PTR_DAT_02727358 + 0x10);
          plVar9[1] = (long)pcVar5;
          puVar4 = PTR_LAB_02727308;
          plVar9[4] = (long)puVar8;
          plVar9[2] = (long)puVar4;
          plVar9[3] = 0;
          FUN_017dee40(puVar8,2);
          bVar3 = true;
          FUN_017de4d0(puVar8,plVar9,0,1);
          pcVar5 = local_158;
        }
      }
      else {
LAB_012aabb4:
        bVar3 = false;
        pcVar5 = local_158;
      }
      local_158 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        local_150 = (undefined1 *)0x0;
        local_148 = (undefined1 *)0x0;
        local_160 = (code *)0x0;
        local_158 = (code *)0x0;
        (*pcVar5)(&local_140);
      }
      pcVar5 = local_e0;
      if (bVar3) {
        local_160 = local_e0;
        local_158 = local_d8;
        local_e0 = (code *)0x0;
        local_150 = local_d0;
        local_148 = local_c8;
        FUN_012a9460(param_1,&local_160);
        pcVar5 = local_160;
        local_160 = (code *)0x0;
        if (pcVar5 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar5)(pcVar5);
          (**(code **)(*(long *)local_158 + 0x18))(local_158,pcVar5,local_150,local_148);
        }
        pcVar5 = local_e0;
        local_e0 = (code *)0x0;
        if (pcVar5 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar5)(pcVar5);
          (**(code **)(*(long *)local_d8 + 0x18))(local_d8,pcVar5,local_d0,local_c8);
        }
        local_c0[0] = PTR_DAT_02727340 + 0x10;
        FUN_017e37d0(auStack_98);
        FUN_0184c620(local_c0);
        uVar11 = 1;
        goto LAB_012aacec;
      }
      local_e0 = (code *)0x0;
      if (pcVar5 != (code *)0x0) {
        (*(code *)**(undefined8 **)pcVar5)(pcVar5);
        (**(code **)(*(long *)local_d8 + 0x18))(local_d8,pcVar5,local_d0,local_c8);
      }
      local_c0[0] = PTR_DAT_02727340 + 0x10;
      FUN_017e37d0(auStack_98);
      FUN_0184c620(local_c0);
    }
  }
  uVar11 = 0;
LAB_012aacec:
  nn::os::UnlockMutex(pMVar1);
  return uVar11;
}


