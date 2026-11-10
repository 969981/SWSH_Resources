/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ef3c0; name: FUN_006ef3c0
 */


void FUN_006ef3c0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_02715500;
  lVar10 = *(long *)(*(long *)(param_1 + 0x160) + 0x58);
  iVar1 = *(int *)PTR_DAT_02715500;
  local_60 = 0;
  uStack_58 = 0;
  thunk_FUN_0199c850(*(long *)(param_1 + 0x1e8) + (long)iVar1 * 0x70 + 0x58,&local_60);
  lVar10 = lVar10 + (long)iVar1 * 0x170;
  FUN_0199df70(lVar10,&local_60);
  *(uint *)(lVar10 + 0x168) = *(uint *)(lVar10 + 0x168) | 0x800;
  FUN_0199df20(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*(int *)puVar2 * 0x170,
               *(long *)PTR_DAT_02710450 + 0x50);
  FUN_0199df20(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*(int *)puVar2 * 0x170,
               *(long *)PTR_DAT_027155f0 + 0x50);
  FUN_006f6e60(*(undefined8 *)PTR_DAT_02710460,*(undefined8 *)(param_1 + 0x160));
  uVar3 = FUN_006f1880(*(undefined8 *)(param_1 + 0x168),0,0);
  uVar4 = FUN_006f18b0(*(undefined8 *)(param_1 + 0x168),0,0);
  FUN_0199db10(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*(int *)puVar2 * 0x170,uVar3,
               *(long *)(param_1 + 0x168) + 0x98,0);
  lVar10 = *(long *)(*(long *)(param_1 + 0x168) + 0xa8);
  FUN_0199dd20(*(undefined4 *)(lVar10 + 0x580),
               *(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*(int *)puVar2 * 0x170,uVar4,
               *(undefined4 *)(lVar10 + 0x584),3,0);
  plVar11 = *(long **)(param_1 + 0x170);
  plVar8 = *(long **)(param_1 + 0x178);
  if (((plVar11 != plVar8) && (*plVar11 != 0)) && (*(int *)(*plVar11 + 0x54) != 0)) {
    do {
      plVar11 = plVar11 + 1;
      plVar5 = plVar8;
      if (plVar8 == plVar11) goto LAB_006ef5a0;
    } while ((*plVar11 != 0) && (*(int *)(*plVar11 + 0x54) != 0));
  }
  plVar5 = plVar11;
  if (plVar11 != plVar8) {
    while( true ) {
      plVar11 = plVar11 + 1;
      if (plVar11 == plVar8) break;
      if ((*plVar11 != 0) && (*(int *)(*plVar11 + 0x54) != 0)) {
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          *plVar5 = 0;
        }
        lVar10 = *plVar11;
        *plVar11 = 0;
        *plVar5 = lVar10;
        plVar5 = plVar5 + 1;
      }
    }
  }
LAB_006ef5a0:
  plVar11 = *(long **)(param_1 + 0x178);
  if (plVar5 != plVar11) {
    if ((long *)((long)plVar5 + ((long)plVar11 - (long)plVar5)) != plVar11) {
      lVar10 = (long)plVar11 - (long)plVar5 >> 3;
      plVar8 = plVar5;
      do {
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
        }
        lVar7 = plVar8[lVar10];
        plVar8[lVar10] = 0;
        plVar5 = plVar8 + 1;
        *plVar8 = lVar7;
        plVar8 = plVar5;
      } while (plVar11 + -lVar10 != plVar5);
      plVar11 = *(long **)(param_1 + 0x178);
    }
    if (plVar11 != plVar5) {
      do {
        plVar8 = plVar11 + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          plVar11[-1] = 0;
        }
        plVar11 = plVar8;
      } while (plVar5 != plVar8);
    }
    *(long **)(param_1 + 0x178) = plVar5;
  }
  FUN_006ef760(*(undefined8 *)(param_1 + 0x170),plVar5);
  plVar11 = *(long **)(param_1 + 0x170);
  plVar8 = *(long **)(param_1 + 0x178);
  do {
    if (plVar11 == plVar8) {
      iVar1 = *(int *)puVar2;
      lVar10 = *(long *)(*(long *)(param_1 + 0x160) + 0x58);
      local_60 = 0;
      uStack_58 = 0;
      thunk_FUN_0199c850(*(long *)(param_1 + 0x1e8) + (long)iVar1 * 0x70 + 0x58,&local_60);
      local_60 = local_60 + 0x10;
      lVar10 = lVar10 + (long)iVar1 * 0x170;
      FUN_0199df70(lVar10,&local_60);
      *(uint *)(lVar10 + 0x168) = *(uint *)(lVar10 + 0x168) | 0x800;
      return;
    }
    if ((*plVar11 != 0) && (puVar9 = *(undefined8 **)(*plVar11 + 0x60), puVar9 != (undefined8 *)0x0)
       ) {
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      lVar10 = FUN_006f10c0();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar10) {
          uVar6 = (**(code **)(puVar9[-10] + 0x58))();
          if ((((uVar6 & 1) != 0) && (lVar10 = puVar9[2], *(char *)(lVar10 + 0x108) != '\0')) &&
             (*(char *)(lVar10 + 0x109) != '\0')) {
            FUN_0199dee0(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*(int *)puVar2 * 0x170
                         ,*(long *)(lVar10 + 0x58) + (long)*(int *)puVar2 * 0x170);
          }
          break;
        }
      }
    }
    plVar11 = plVar11 + 1;
  } while( true );
}


