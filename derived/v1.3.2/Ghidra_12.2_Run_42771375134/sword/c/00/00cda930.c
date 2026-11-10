/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cda930; name: FUN_00cda930
 */


void FUN_00cda930(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long local_90;
  long local_88;
  long local_80 [3];
  long local_68;
  
  puVar2 = PTR_DAT_02717530;
  puVar1 = PTR_DAT_02717528;
  bVar8 = *(byte *)(param_1 + 0xf0);
  if (3 < bVar8) {
    FUN_00cd1280(*(undefined8 *)(param_1 + 0x90),9,1);
    FUN_012ae5a0(param_1 + 0xf8,(long)*(int *)(*(long *)(param_1 + 0xd8) + 0x26d0));
    *(undefined4 *)(param_1 + 0xf4) = 6;
    return;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 200) + 0x10) + 0x6e8);
  if (plVar11 != (long *)0x0) {
    plVar12 = (long *)*plVar11;
    if (plVar12 != (long *)plVar11[1]) {
      do {
        if ((*plVar12 != 0) && (cVar3 = FUN_007b5850(), cVar3 == *(char *)(param_1 + 0xf0))) {
          plVar10 = *(long **)(param_1 + 8);
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar10;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          lVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,0xb8,8);
          if (lVar6 == 0) {
            (**(code **)(*plVar10 + 0xb8))(plVar10);
          }
          FUN_00866220(lVar6,plVar10,0,0,0);
          *(long **)(lVar6 + 8) = plVar10;
          *(long *)(lVar6 + 0x10) = lVar6;
          *(undefined8 *)(lVar6 + 0x18) = 0xb8;
          *(undefined8 *)(lVar6 + 0x20) = 8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          if (lVar6 == 0) {
            FUN_008664b0(0,(long)plVar12 + 0xc);
            local_88 = lVar6;
          }
          else {
            plVar10 = (long *)(lVar6 + 0x48);
            (**(code **)(*plVar10 + 0x10))(plVar10);
            FUN_008664b0(lVar6,(long)plVar12 + 0xc);
            local_88 = lVar6;
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
          plVar10 = (long *)(**(code **)*puVar9)(puVar9);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar7 = FUN_00b8c810();
            *(undefined8 *)puVar2 = uVar7;
            __cxa_guard_release(puVar1);
          }
          for (; plVar10 != (long *)puVar2; plVar10 = (long *)*plVar10) {
          }
          FUN_00ff86a0(local_80,puVar9[0xd],0);
          local_90 = *(long *)(local_80[0] + 0x60);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
          }
          FUN_016df0b0(&local_88,&local_90,*(undefined8 *)(param_1 + 8));
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if (local_80[0] != 0) {
            (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
            local_80[0] = 0;
          }
          if (local_88 != 0) {
            (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
            local_88 = 0;
          }
          iVar4 = FUN_008783b0(lVar6);
          if (iVar4 != 0) {
            FUN_00cd4ff0(param_1,(int)plVar12[1],lVar6,1);
            FUN_00cd5a60(param_1);
          }
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          }
          if (iVar4 != 0) break;
        }
        plVar12 = plVar12 + 0x2d;
      } while (plVar12 != (long *)plVar11[1]);
      bVar8 = *(byte *)(param_1 + 0xf0);
    }
    if (bVar8 == *(byte *)(*(long *)(param_1 + 0xd0) + 0x2d9)) {
      *(undefined4 *)(param_1 + 0xf4) = 3;
      FUN_00ccd810(*(undefined8 *)(param_1 + 0x78),1);
      FUN_00ccd8c0(*(undefined8 *)(param_1 + 0x78),1);
      FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),1,1);
      FUN_00ccd420(*(undefined8 *)(param_1 + 0x78),1);
      bVar8 = *(byte *)(param_1 + 0xf0);
    }
    if (3 < bVar8) goto LAB_00cdacb4;
  }
  plVar11 = (long *)FUN_00cd3b50(**(undefined8 **)(param_1 + 200));
  if (plVar11 != (long *)0x0) {
    for (plVar12 = (long *)*plVar11; plVar12 != (long *)plVar11[1]; plVar12 = plVar12 + 1) {
      if ((*plVar12 != 0) &&
         (lVar5 = param_1 + (ulong)*(byte *)(param_1 + 0xf0) * 8,
         *(long *)(lVar5 + 0x108) == *plVar12)) {
        *(undefined8 *)(lVar5 + 0x108) = 0;
        lVar5 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0xf0) * 8 + 0x108);
        goto joined_r0x00cdad48;
      }
    }
  }
  lVar5 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0xf0) * 8 + 0x108);
joined_r0x00cdad48:
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 5;
    FUN_00cd53d0(param_1);
  }
LAB_00cdacb4:
  lVar5 = *(long *)(param_1 + 0x78);
  if (*(int *)(lVar5 + 0x5cc) != 0) {
    if (*(int *)(lVar5 + 0x5cc) == 4) {
      FUN_00ccf440(lVar5,2);
      FUN_006cf0a0(local_80,&DAT_02643c28);
      FUN_016d3620(local_80);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      lVar5 = *(long *)(param_1 + 0x78);
    }
    *(undefined4 *)(lVar5 + 0x5cc) = 0;
  }
  return;
}


