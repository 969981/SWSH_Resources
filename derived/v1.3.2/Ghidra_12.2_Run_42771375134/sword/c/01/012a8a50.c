/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a8a50; name: FUN_012a8a50
 */


undefined8 FUN_012a8a50(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  void *__s2;
  undefined1 *puVar12;
  code *pcVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined1 *local_4f8;
  undefined1 *local_4f0;
  undefined1 *local_4e8;
  undefined *local_4e0;
  undefined1 local_4d7;
  undefined8 local_4d0;
  undefined1 auStack_4c8 [56];
  undefined1 auStack_490 [8];
  undefined1 auStack_488 [512];
  undefined1 auStack_288 [4];
  byte local_284 [4];
  code *local_280;
  code *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  long local_260;
  byte *local_258;
  undefined **local_250;
  undefined8 *local_70 [2];
  
  local_284[0] = param_4 & 1;
  nn::os::LockMutex((MutexType *)(param_1 + 800));
  pMVar1 = (MutexType *)(param_1 + 0xa8);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    nn::os::LockMutex(pMVar1);
    lVar10 = *(long *)(param_1 + 0x78);
    lVar16 = *(long *)(param_1 + 0x80);
    lVar17 = *(long *)(param_1 + 0x88);
    nn::os::UnlockMutex(pMVar1);
    if ((ulong)(lVar16 - lVar10) < (ulong)(lVar17 - lVar10)) {
      pMVar2 = (MutexType *)(param_1 + 800);
      nn::os::LockMutex(pMVar2);
      if (*(char *)(param_1 + 0xf8) == '\0') {
        if (*(char *)(param_1 + 0x310) == '\0') {
          nn::os::UnlockMutex(pMVar2);
        }
        else {
          lVar10 = nn::time::StandardSteadyClock::now();
          lVar16 = *(long *)(param_1 + 0x318);
          nn::os::UnlockMutex(pMVar2);
          if (lVar10 - lVar16 < 6) goto LAB_012a8aec;
        }
        FUN_012a8fb0(auStack_490,param_2,param_3);
        uVar11 = FUN_0120fba0(auStack_490);
        if ((uVar11 & 1) != 0) {
          if ((param_4 & 1) == 0) {
            local_278 = (code *)(PTR_DAT_027272e8 + 0x10);
            memcpy(&local_270,auStack_488,0x200);
            local_280 = (code *)CONCAT71(local_280._1_7_,1);
            if (*(char *)(param_1 + 0x100) != '\0') {
              __s2 = (void *)(**(code **)(*(long *)(param_1 + 0x108) + 0x10))(param_1 + 0x108);
              iVar9 = memcmp(&local_270,__s2,0x200);
              if (iVar9 == 0) goto LAB_012a8aec;
              goto LAB_012a8bd4;
            }
LAB_012a8bf8:
            *(undefined **)(param_1 + 0x108) = PTR_DAT_027272e8 + 0x10;
            memcpy((void *)(param_1 + 0x110),auStack_488,0x200);
            *(undefined1 *)(param_1 + 0x100) = 1;
          }
          else {
LAB_012a8bd4:
            if (*(char *)(param_1 + 0x100) == '\0') goto LAB_012a8bf8;
            memcpy((void *)(param_1 + 0x110),auStack_488,0x200);
          }
          FUN_01843e50(&local_4e0);
          puVar6 = PTR_DAT_027272f0;
          local_4e0 = PTR_DAT_027272f0 + 0x10;
          local_4d7 = 0;
          FUN_017e35a0(auStack_4c8,0,0);
          local_4d0 = 0;
          local_4f8 = (undefined1 *)0x0;
          local_4f0 = (undefined1 *)0x0;
          local_4e0 = PTR_DAT_027272f8 + 0x10;
          local_4e8 = (undefined1 *)0x0;
          puVar12 = (undefined1 *)FUN_017cd750(0x200);
          puVar8 = local_4f8;
          local_4e8 = puVar12 + 0x200;
          puVar18 = puVar12;
          if (local_4f0 != local_4f8) {
            lVar10 = (long)local_4f8 - (long)local_4f0;
            do {
              puVar18 = puVar18 + -1;
              local_4f0 = local_4f0 + -1;
              *puVar18 = *local_4f0;
            } while (local_4f8 != local_4f0);
            puVar18 = puVar12 + lVar10;
          }
          bVar4 = local_4f8 != (undefined1 *)0x0;
          local_4f8 = puVar18;
          local_4f0 = puVar12;
          if (bVar4) {
            FUN_017cd7a0(puVar8);
          }
          FUN_012a9210(&local_4f8,local_4f8,auStack_488,auStack_288);
          FUN_017e3870(auStack_4c8);
          FUN_017e3980(auStack_4c8,local_4f8,(long)local_4f0 - (long)local_4f8);
          pcVar20 = *(code **)(param_1 + 8);
          cVar3 = *(char *)(param_1 + 0xf9);
          pcVar13 = (code *)(**(code **)(*(long *)pcVar20 + 0x10))(pcVar20,0x20,8);
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(code **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = pcVar20;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          FUN_012ad390(pcVar13,cVar3 != '\x01',local_284[0]);
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          if (pcVar13 == (code *)0x0) {
LAB_012a8f5c:
            bVar4 = false;
          }
          else {
            local_258 = local_284;
            local_250 = &local_4e0;
            local_278 = FUN_012abd10;
            local_280 = FUN_012abcc0;
            local_270 = &LAB_012abd20;
            local_268 = &LAB_012abd40;
            local_260 = param_1;
            uVar11 = FUN_012ad0b0(pcVar13);
            if ((uVar11 & 1) == 0) {
              puVar14 = (undefined8 *)FUN_007ac3d0(1,60000);
              (**(code **)(*(long *)pcVar13 + 0x10))(pcVar13,puVar14,param_1 + 0xe8);
              local_70[0] = puVar14;
              uVar11 = (*local_280)(&local_260,local_70);
              if ((uVar11 & 1) == 0) {
                (**(code **)*puVar14)(puVar14);
                FUN_017cd7a0(puVar14);
                (**(code **)(*(long *)pcVar13 + 0x18))(pcVar13);
                goto LAB_012a8e98;
              }
              plVar15 = (long *)FUN_017cd750(0x28);
              if (plVar15 == (long *)0x0) {
                bVar4 = true;
                pcVar5 = local_278;
              }
              else {
                *plVar15 = (long)(PTR_DAT_02727300 + 0x10);
                plVar15[1] = (long)pcVar13;
                puVar7 = PTR_LAB_02727308;
                plVar15[4] = (long)puVar14;
                plVar15[2] = (long)puVar7;
                plVar15[3] = 0;
                FUN_017dee40(puVar14,2);
                bVar4 = true;
                FUN_017de4d0(puVar14,plVar15,0,1);
                pcVar5 = local_278;
              }
            }
            else {
LAB_012a8e98:
              bVar4 = false;
              pcVar5 = local_278;
            }
            local_278 = pcVar5;
            if (pcVar5 != (code *)0x0) {
              local_268 = (undefined1 *)0x0;
              local_270 = (undefined1 *)0x0;
              local_278 = (code *)0x0;
              local_280 = (code *)0x0;
              (*pcVar5)(&local_260);
            }
            if (!bVar4) {
              (*(code *)**(undefined8 **)pcVar13)(pcVar13);
              (**(code **)(*(long *)pcVar20 + 0x18))(pcVar20,pcVar13,0x20,8);
              goto LAB_012a8f5c;
            }
            local_270 = (undefined1 *)0x20;
            local_268 = (undefined1 *)0x8;
            local_280 = pcVar13;
            local_278 = pcVar20;
            FUN_012a9460(param_1,&local_280);
            pcVar13 = local_280;
            local_280 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              (*(code *)**(undefined8 **)pcVar13)(pcVar13);
              (**(code **)(*(long *)local_278 + 0x18))(local_278,pcVar13,local_270,local_268);
            }
            bVar4 = true;
          }
          if (local_4f8 != (undefined1 *)0x0) {
            local_4f0 = local_4f8;
            FUN_017cd7a0();
          }
          local_4e0 = puVar6 + 0x10;
          FUN_017e37d0(auStack_4c8);
          FUN_0184c620(&local_4e0);
          if (bVar4) {
            uVar19 = 1;
            goto LAB_012a8af0;
          }
        }
      }
      else {
        nn::os::UnlockMutex(pMVar2);
      }
    }
  }
LAB_012a8aec:
  uVar19 = 0;
LAB_012a8af0:
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 800));
  return uVar19;
}


