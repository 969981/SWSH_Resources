/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b6f80; name: FUN_008b6f80
 */


void FUN_008b6f80(long param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [24];
  long local_58;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    lVar6 = FUN_00897d00();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar10 = puVar10 + -10;
        goto LAB_008b6fe0;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_008b6fe0:
  lVar12 = puVar10[0x15];
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar12 + 0x10);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  iVar4 = FUN_00888e60();
  uVar7 = (**(code **)(**(long **)(lVar12 + 0x10) + 0x50))
                    (*(long **)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x1c));
  uVar8 = FUN_00888f20(uVar3);
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_0087c450(uVar7,iVar4);
  }
  else {
    uVar8 = FUN_0087c4a0(uVar7,iVar4 + -100);
  }
  cVar1 = *(char *)(puVar10[0x15] + 0x2b);
  FUN_014c7bf0(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),0,uVar7);
  FUN_014c9660(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),1,*(undefined4 *)(param_1 + 0x9c))
  ;
  uVar9 = FUN_0087b910(uVar7,*(undefined4 *)(param_1 + 0x9c));
  if ((uVar9 & 1) == 0) {
    if ((uVar8 & 1) == 0) {
      uVar8 = 0xd3e06cb6a2f3;
      goto LAB_008b713c;
    }
    if (*(char *)(param_1 + 0x9a) == '\0') {
      iVar4 = FUN_0087bba0(uVar7,*(undefined4 *)(param_1 + 0x9c));
      if (iVar4 == 1) goto LAB_008b71d4;
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x99) = 0;
        FUN_008b7ad0(param_1);
        cVar2 = *(char *)(param_1 + 0x9a);
        goto joined_r0x008b71cc;
      }
LAB_008b71dc:
      if (*(char *)(param_1 + 0x9a) == '\0') goto LAB_008b70fc;
LAB_008b71e4:
      FUN_008a6b70(puVar10,0x2f9457e06cb9b916,cVar1 != '\0',0);
      uVar3 = 3;
    }
    else {
      cVar2 = FUN_0087b890(uVar7);
      if (cVar2 == '\x04') {
LAB_008b71d4:
        *(undefined1 *)(param_1 + 0x99) = 1;
        goto LAB_008b71dc;
      }
      *(undefined1 *)(param_1 + 0x99) = 0;
      cVar2 = *(char *)(param_1 + 0x9a);
joined_r0x008b71cc:
      if (cVar2 != '\0') goto LAB_008b71e4;
LAB_008b70fc:
      FUN_008a6b70(puVar10,0x2f90d7e06cb6a9bf,cVar1 != '\0',0);
      uVar3 = 2;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    FUN_006cf0a0(auStack_70,&DAT_02617888);
    FUN_016d3620(auStack_70);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
      FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
      goto joined_r0x008b724c;
    }
  }
  else {
    uVar8 = 0xd4e06cb6a4a6;
LAB_008b713c:
    FUN_008a6b70(puVar10,uVar8 | 0x2f90000000000000,cVar1 != '\0',0);
  }
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
joined_r0x008b724c:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


