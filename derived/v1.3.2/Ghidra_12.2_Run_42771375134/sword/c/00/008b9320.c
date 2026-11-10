/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b9320; name: FUN_008b9320
 */


void FUN_008b9320(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_58;
  long local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_00897d00();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  lVar3 = puVar6[0xb];
  iVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  if (iVar1 < 0x2bf) {
    if (1 < iVar1 - 0x4cU) {
      if (iVar1 == 0x4e) {
        uVar4 = FUN_00ecdfd0();
        if ((uVar4 & 1) == 0) goto LAB_008b9594;
        iVar1 = 0x4e;
        FUN_008b9790(param_1,0x4e);
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
        *(undefined1 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(lVar3 + 8) = 5;
        goto LAB_008b93c0;
      }
      if (iVar1 != 0x4f) goto LAB_008b9584;
    }
    uVar4 = FUN_00eced50();
    if ((uVar4 & 1) == 0) {
      FUN_008b9790(param_1,iVar1);
      FUN_01520b70(lVar5,iVar1,1);
      local_50 = -0x570e07714e5eee92;
      pcStack_48 = "USE_SPRAY";
      local_58 = 0;
      local_40 = 9;
      local_38 = 0;
      FUN_014af470(&local_50,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_00ececc0(iVar1);
      FUN_006cf0a0(&local_50,&DAT_02617b28);
      FUN_016d3620(&local_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
    else {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar2 = (long *)(**(code **)*puVar6)(puVar6);
        lVar3 = FUN_00897d00();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar6 = puVar6 + -10;
            goto LAB_008b943c;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_008b943c:
      FUN_008a6b70(puVar6,0xcf39ecca23489ec9,1,0);
    }
LAB_008b959c:
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  else {
    if (iVar1 - 0x639U < 4) {
      *(undefined8 *)(param_1 + 0x7c) = 0x1300000002;
LAB_008b93c0:
      *(int *)(lVar3 + 0x24) = iVar1;
      FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
      goto joined_r0x008b9488;
    }
    if (iVar1 == 0x2bf) {
      *(undefined1 *)(param_1 + 0x98) = 1;
      *(undefined4 *)(lVar3 + 8) = 5;
      *(undefined4 *)(lVar3 + 0x24) = 0x2bf;
      FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
      goto joined_r0x008b9488;
    }
LAB_008b9584:
    uVar4 = FUN_008b9990(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
LAB_008b9594:
      FUN_008b98a0(param_1);
      goto LAB_008b959c;
    }
  }
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
joined_r0x008b9488:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


