/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec2fa0; name: FUN_00ec2fa0
 */


void FUN_00ec2fa0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(int *)(param_1 + 0x58) == 2) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x60);
  FUN_00ec3200(param_1,plVar1);
  if (*(int *)(param_1 + 0x58) == 1) {
    uVar5 = FUN_00ec3b50(param_1,plVar1);
    lVar10 = *(long *)(*plVar1 + 0xb8);
  }
  else if (*(int *)(param_1 + 0x58) == 0) {
    uVar5 = FUN_00ec3510(param_1,plVar1);
    lVar10 = *(long *)(*plVar1 + 0xb8);
  }
  else {
    uVar5 = 0;
    lVar10 = *(long *)(*plVar1 + 0xb8);
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if ((uVar5 == 0) && ((*(byte *)(param_1 + 0x78) >> 4 & 1) != 0)) {
    uVar5 = FUN_015c8b40(lVar10);
    uVar5 = uVar5 & 1;
  }
  else {
    FUN_015c8b20(lVar10,0xcbf29ce484222645,0,0,0,0);
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (uVar5 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    return;
  }
  if (uVar5 - 2 < 2) {
LAB_00ec30c4:
    FUN_00dfd190(*(undefined8 *)PTR_DAT_027194e8,1,0);
joined_r0x00ec313c:
    if (uVar5 == 2) goto LAB_00ec3140;
    if (uVar5 == 6) {
      return;
    }
  }
  else if (uVar5 != 4) {
    if (uVar5 == 6) goto LAB_00ec30c4;
    FUN_00dfd190(*(undefined8 *)PTR_DAT_027194e8,0,1);
    goto joined_r0x00ec313c;
  }
  FUN_00df9760(*(undefined8 *)PTR_DAT_027194e8,0);
  if (uVar5 != 2) {
    return;
  }
LAB_00ec3140:
  puVar4 = PTR_DAT_0271fc50;
  puVar3 = PTR_DAT_0271fc48;
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar10 = *plVar1;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x50))((undefined8 *)(lVar10 + 0x50));
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
      uVar7 = FUN_01590f40();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar4) {
        if (*(char *)(lVar10 + 0xd58) != '\0') {
          FUN_00e62280(lVar10);
          uVar9 = (**(code **)(*(long *)*plVar1 + 0x88))();
          if ((uVar9 & 1) == 0) {
            return;
          }
        }
        break;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


