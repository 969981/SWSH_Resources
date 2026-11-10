/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a9d80; name: FUN_012a9d80
 */


undefined8 FUN_012a9d80(long param_1)

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
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  code **ppcStack_b8;
  code *local_60;
  code *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_38;
  
  pMVar1 = (MutexType *)(param_1 + 0xa8);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    nn::os::LockMutex(pMVar1);
    lVar6 = *(long *)(param_1 + 0x78);
    lVar2 = *(long *)(param_1 + 0x80);
    lVar10 = *(long *)(param_1 + 0x88);
    nn::os::UnlockMutex(pMVar1);
    if ((ulong)(lVar2 - lVar6) < (ulong)(lVar10 - lVar6)) {
      pcVar12 = *(code **)(param_1 + 8);
      pcVar5 = (code *)(**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x30,8);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(code **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = pcVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar4 = PTR_DAT_02727310;
      *(long *)(pcVar5 + 0x20) = 0;
      *(long *)(pcVar5 + 0x28) = 0;
      *(long *)(pcVar5 + 0x10) = 0;
      *(long *)(pcVar5 + 0x18) = 0;
      *(undefined **)pcVar5 = puVar4 + 0x10;
      *(long *)(pcVar5 + 8) = 0;
      local_50 = (undefined1 *)0x30;
      local_48 = (undefined1 *)0x8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      ppcStack_b8 = &local_60;
      local_e0 = FUN_012abe40;
      local_d8 = FUN_012abe80;
      local_d0 = &LAB_012abe90;
      local_c8 = &LAB_012abea0;
      local_c0 = param_1;
      local_60 = pcVar5;
      local_58 = pcVar12;
      uVar7 = FUN_012ad0b0(pcVar5);
      if ((uVar7 & 1) == 0) {
        puVar8 = (undefined8 *)FUN_007ac3d0(1,60000);
        (**(code **)(*(long *)pcVar5 + 0x10))(pcVar5,puVar8,param_1 + 0xe8);
        local_38 = puVar8;
        uVar7 = (*local_e0)(&local_c0,&local_38);
        if ((uVar7 & 1) == 0) {
          (**(code **)*puVar8)(puVar8);
          FUN_017cd7a0(puVar8);
          (**(code **)(*(long *)pcVar5 + 0x18))(pcVar5);
          goto LAB_012a9f6c;
        }
        plVar9 = (long *)FUN_017cd750(0x28);
        if (plVar9 == (long *)0x0) {
          bVar3 = true;
          pcVar5 = local_d8;
        }
        else {
          *plVar9 = (long)(PTR_DAT_02727318 + 0x10);
          plVar9[1] = (long)pcVar5;
          puVar4 = PTR_LAB_02727308;
          plVar9[4] = (long)puVar8;
          plVar9[2] = (long)puVar4;
          plVar9[3] = 0;
          FUN_017dee40(puVar8,2);
          bVar3 = true;
          FUN_017de4d0(puVar8,plVar9,0,1);
          pcVar5 = local_d8;
        }
      }
      else {
LAB_012a9f6c:
        bVar3 = false;
        pcVar5 = local_d8;
      }
      local_d8 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        local_c8 = (undefined1 *)0x0;
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar5)(&local_c0);
      }
      pcVar5 = local_60;
      if (bVar3) {
        local_e0 = local_60;
        local_d8 = local_58;
        local_60 = (code *)0x0;
        local_d0 = local_50;
        local_c8 = local_48;
        FUN_012a9460(param_1,&local_e0);
        pcVar5 = local_e0;
        local_e0 = (code *)0x0;
        if (pcVar5 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar5)(pcVar5);
          (**(code **)(*(long *)local_d8 + 0x18))(local_d8,pcVar5,local_d0,local_c8);
        }
        pcVar5 = local_60;
        local_60 = (code *)0x0;
        if (pcVar5 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar5)(pcVar5);
          (**(code **)(*(long *)local_58 + 0x18))(local_58,pcVar5,local_50,local_48);
        }
        uVar11 = 1;
        goto LAB_012aa05c;
      }
      local_60 = (code *)0x0;
      if (pcVar5 != (code *)0x0) {
        (*(code *)**(undefined8 **)pcVar5)(pcVar5);
        (**(code **)(*(long *)local_58 + 0x18))(local_58,pcVar5,local_50,local_48);
      }
    }
  }
  uVar11 = 0;
LAB_012aa05c:
  nn::os::UnlockMutex(pMVar1);
  return uVar11;
}


