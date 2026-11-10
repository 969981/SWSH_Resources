/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012aa440; name: FUN_012aa440
 */


undefined8 FUN_012aa440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  long lVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long local_120;
  undefined **ppuStack_118;
  undefined *local_b8 [5];
  undefined1 auStack_90 [56];
  undefined8 *local_58;
  
  pMVar1 = (MutexType *)(param_1 + 0xa8);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    nn::os::LockMutex(pMVar1);
    lVar7 = *(long *)(param_1 + 0x78);
    lVar2 = *(long *)(param_1 + 0x80);
    lVar11 = *(long *)(param_1 + 0x88);
    nn::os::UnlockMutex(pMVar1);
    if ((ulong)(lVar2 - lVar7) < (ulong)(lVar11 - lVar7)) {
      FUN_012aa770(local_b8,param_2,param_3,param_4);
      pcVar13 = *(code **)(param_1 + 8);
      pcVar6 = (code *)(**(code **)(*(long *)pcVar13 + 0x10))(pcVar13,0x18,8);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(code **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = pcVar13;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar5 = PTR_DAT_02727330;
      *(long *)(pcVar6 + 8) = 0;
      *(long *)(pcVar6 + 0x10) = 0;
      *(undefined **)pcVar6 = puVar5 + 0x10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      local_140 = FUN_012abff0;
      local_138 = FUN_012ac000;
      local_130 = &LAB_012ac010;
      local_128 = &LAB_012ac020;
      local_120 = param_1;
      ppuStack_118 = local_b8;
      uVar8 = FUN_012ad0b0(pcVar6);
      if ((uVar8 & 1) == 0) {
        puVar9 = (undefined8 *)FUN_007ac3d0(1,60000);
        (**(code **)(*(long *)pcVar6 + 0x10))(pcVar6,puVar9,param_1 + 0xe8);
        local_58 = puVar9;
        uVar8 = (*local_140)(&local_120,&local_58);
        if ((uVar8 & 1) == 0) {
          (**(code **)*puVar9)(puVar9);
          FUN_017cd7a0(puVar9);
          (**(code **)(*(long *)pcVar6 + 0x18))(pcVar6);
          goto LAB_012aa634;
        }
        plVar10 = (long *)FUN_017cd750(0x28);
        if (plVar10 == (long *)0x0) {
          bVar3 = true;
          pcVar4 = local_138;
        }
        else {
          *plVar10 = (long)(PTR_DAT_02727338 + 0x10);
          plVar10[1] = (long)pcVar6;
          puVar5 = PTR_LAB_02727308;
          plVar10[4] = (long)puVar9;
          plVar10[2] = (long)puVar5;
          plVar10[3] = 0;
          FUN_017dee40(puVar9,2);
          bVar3 = true;
          FUN_017de4d0(puVar9,plVar10,0,1);
          pcVar4 = local_138;
        }
      }
      else {
LAB_012aa634:
        bVar3 = false;
        pcVar4 = local_138;
      }
      local_138 = pcVar4;
      if (pcVar4 != (code *)0x0) {
        local_130 = (undefined1 *)0x0;
        local_128 = (undefined1 *)0x0;
        local_140 = (code *)0x0;
        local_138 = (code *)0x0;
        (*pcVar4)(&local_120);
      }
      if (bVar3) {
        local_130 = (undefined1 *)0x18;
        local_128 = (undefined1 *)0x8;
        local_140 = pcVar6;
        local_138 = pcVar13;
        FUN_012a9460(param_1,&local_140);
        pcVar6 = local_140;
        local_140 = (code *)0x0;
        if (pcVar6 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar6)(pcVar6);
          (**(code **)(*(long *)local_138 + 0x18))(local_138,pcVar6,local_130,local_128);
        }
        local_b8[0] = PTR_DAT_02727340 + 0x10;
        FUN_017e37d0(auStack_90);
        FUN_0184c620(local_b8);
        uVar12 = 1;
        goto LAB_012aa72c;
      }
      (*(code *)**(undefined8 **)pcVar6)(pcVar6);
      (**(code **)(*(long *)pcVar13 + 0x18))(pcVar13,pcVar6,0x18,8);
      local_b8[0] = PTR_DAT_02727340 + 0x10;
      FUN_017e37d0(auStack_90);
      FUN_0184c620(local_b8);
    }
  }
  uVar12 = 0;
LAB_012aa72c:
  nn::os::UnlockMutex(pMVar1);
  return uVar12;
}


