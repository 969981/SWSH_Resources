/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b9fc0; name: FUN_008b9fc0
 */


void FUN_008b9fc0(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined1 auStack_80 [24];
  long local_68;
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  lVar8 = FUN_00897d00();
  puVar3 = PTR_DAT_02710798;
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  piVar15 = (int *)puVar11[0xb];
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  puVar11 = puVar11 + -10;
  lVar12 = *(long *)(piVar15 + 4);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  cVar1 = *(char *)((long)piVar15 + 0x2b);
  *(undefined1 *)(param_1 + 0x99) = 0;
  if (*piVar15 - 1U < 2) {
    if (*(char *)((long)piVar15 + (ulong)(uint)piVar15[7] + 0x3e) == '\0') {
      FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
      *(undefined4 *)(param_1 + 0x7c) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 0x99) = 1;
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
      FUN_014c9660(uVar13,0,0x175);
      uVar9 = (**(code **)(**(long **)(piVar15 + 4) + 0x50))(*(long **)(piVar15 + 4),piVar15[7]);
      FUN_014c7bf0(uVar13,1,uVar9);
      FUN_008a6b70(puVar11,0xcf4aeaca23570e96,cVar1 != '\0',0);
      FUN_008ba940(param_1);
      *(undefined4 *)(param_1 + 0x7c) = 2;
    }
    goto joined_r0x008ba2a0;
  }
  uVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  uVar10 = FUN_014b6720(lVar12,uVar4,piVar15[7],piVar15[6]);
  if ((uVar10 & 1) == 0) {
    if ((*piVar15 - 1U < 2) && (*(char *)((long)piVar15 + (ulong)(uint)piVar15[7] + 0x38) != '\0'))
    {
LAB_008ba49c:
      *(undefined4 *)(param_1 + 0x7c) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 0x99) = 1;
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0
         )) {
        plVar7 = (long *)(**(code **)*puVar11)(puVar11);
        lVar14 = FUN_00897d00();
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)lVar14) {
            puVar11 = puVar11 + -10;
            goto LAB_008ba260;
          }
        }
      }
      puVar11 = (undefined8 *)0x0;
LAB_008ba260:
      FUN_008a6b70(puVar11,0xcf39f8ca2348b32d,cVar1 != '\0',0);
      FUN_008ba940(param_1);
    }
  }
  else {
    FUN_008885c0(auStack_80,uVar4);
    uVar5 = FUN_008889f0(auStack_80);
    FUN_00888620(auStack_80);
    lVar14 = *(long *)(&DAT_02144eb0 + (ulong)uVar5 * 8);
    *(uint *)(param_1 + 0xa0) = uVar5;
    if ((lVar14 == -0x340d631b7bddd9bb) || (lVar14 == 0)) {
      if (uVar5 != 10) goto LAB_008ba330;
      (**(code **)(**(long **)(piVar15 + 4) + 0x50))(*(long **)(piVar15 + 4),piVar15[7]);
      uVar10 = FUN_0087b120();
      if ((uVar10 & 1) == 0) goto LAB_008ba330;
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
      uVar9 = (**(code **)(**(long **)(piVar15 + 4) + 0x50))(*(long **)(piVar15 + 4),piVar15[7]);
      FUN_014c7bf0(uVar13,0,uVar9);
      FUN_008a6b70(puVar11,0xcf3d6cca234bae20,cVar1 != '\0',0);
      bVar2 = 0;
    }
    else {
      if (uVar5 - 0x19 < 2) {
        uVar9 = (**(code **)(**(long **)(piVar15 + 4) + 0x50))(*(long **)(piVar15 + 4),piVar15[7]);
        uVar6 = FUN_0087b880(uVar9,piVar15[6]);
        FUN_014c9660(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),0,uVar6);
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
        uVar9 = (**(code **)(**(long **)(piVar15 + 4) + 0x50))(*(long **)(piVar15 + 4),piVar15[7]);
        FUN_014c7bf0(uVar13,0,uVar9);
      }
      FUN_008a6b70(puVar11,lVar14,cVar1 != '\0',0);
LAB_008ba330:
      bVar2 = 1;
    }
    uVar9 = (**(code **)(**(long **)(piVar15 + 4) + 0x50))(*(long **)(piVar15 + 4),piVar15[7]);
    FUN_008a6e20(puVar11,uVar4,uVar9,1);
    FUN_014b7300(lVar12,uVar4,piVar15[7],piVar15[6],0);
    FUN_008ba940(param_1);
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar7 = (long *)(**(code **)*puVar11)(puVar11);
    lVar14 = FUN_00897d00();
    for (; plVar7 != (long *)lVar14; plVar7 = (long *)*plVar7) {
    }
    if (*(int *)puVar11[0xb] - 1U < 2) {
LAB_008ba404:
      if (uVar5 - 3 < 9) goto LAB_008ba430;
LAB_008ba410:
      if ((uVar5 < 0x1c) && ((1 << (ulong)(uVar5 & 0x1f) & 0xe000005U) != 0)) goto LAB_008ba430;
    }
    else {
      lVar14 = *(long *)(*(long *)puVar3 + 0x1d8);
      if (lVar14 != 0) {
        plVar7 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_01520b70(lVar14,uVar4,1);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        goto LAB_008ba404;
      }
      FUN_01520b70(0,uVar4,1);
      if (8 < uVar5 - 3) goto LAB_008ba410;
LAB_008ba430:
      FUN_006cf0a0(auStack_80,&DAT_02617c10);
      FUN_016d3620(auStack_80);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
    }
    if ((uVar5 | 1) == 0xb && !(bool)(bVar2 ^ 1)) {
      if ((*piVar15 - 1U < 2) && (*(char *)((long)piVar15 + (ulong)(uint)piVar15[7] + 0x38) != '\0')
         ) goto LAB_008ba49c;
      *(undefined4 *)(param_1 + 0x7c) = 1;
      uVar4 = FUN_008c9600(*(undefined8 *)(param_1 + 0x88),0x1e);
      *(undefined4 *)(param_1 + 0x9c) = uVar4;
      if (cVar1 == '\0') {
        FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
      }
    }
  }
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
joined_r0x008ba2a0:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


