/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01115e80; name: FUN_01115e80
 */


void FUN_01115e80(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_02710798;
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  lVar5 = *(long *)PTR_DAT_02710798;
  lVar6 = *(long *)(lVar5 + 0x218);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(lVar5 + 0x1e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  cVar4 = FUN_01524bf0(lVar5);
  if (cVar4 == '\0') {
    if (*(int *)(param_1 + 0x8c) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0x88),*(int *)(param_1 + 0x8c),1);
    }
    if (*(int *)(param_1 + 0x94) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0x90),*(int *)(param_1 + 0x94),1);
    }
    if (*(int *)(param_1 + 0x9c) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0x98),*(int *)(param_1 + 0x9c),1);
    }
    if (*(int *)(param_1 + 0xa4) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0xa0),*(int *)(param_1 + 0xa4),1);
    }
    if (*(int *)(param_1 + 0xac) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0xa8),*(int *)(param_1 + 0xac),1);
    }
    iVar1 = *(int *)(param_1 + 0xb4);
    if (iVar1 == -1) goto LAB_01116038;
    uVar2 = *(undefined4 *)(param_1 + 0xb0);
  }
  else {
    if (*(int *)(param_1 + 0xbc) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0xb8),*(int *)(param_1 + 0xbc),1);
    }
    if (*(int *)(param_1 + 0xc4) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0xc0),*(int *)(param_1 + 0xc4),1);
    }
    if (*(int *)(param_1 + 0xcc) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 200),*(int *)(param_1 + 0xcc),1);
    }
    if (*(int *)(param_1 + 0xd4) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0xd0),*(int *)(param_1 + 0xd4),1);
    }
    if (*(int *)(param_1 + 0xdc) != -1) {
      FUN_0153a420(lVar6,*(undefined4 *)(param_1 + 0xd8),*(int *)(param_1 + 0xdc),1);
    }
    iVar1 = *(int *)(param_1 + 0xe4);
    if (iVar1 == -1) goto LAB_01116038;
    uVar2 = *(undefined4 *)(param_1 + 0xe0);
  }
  FUN_0153a420(lVar6,uVar2,iVar1,1);
LAB_01116038:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01116068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


